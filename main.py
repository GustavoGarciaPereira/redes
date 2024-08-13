from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
import ipaddress


class IPCIDR(BaseModel):
    ip_cidr: str


app = FastAPI()

@app.post("/calcular_rede/")
async def calcular_rede_broadcast_e_utilizaveis(ip_cidr: IPCIDR):
    try:
        # Cria um objeto IPv4Network a partir do IP/CIDR fornecido
        rede = ipaddress.ip_network(ip_cidr.ip_cidr, strict=False)
        
        # Calcula o endereço de rede e o endereço de broadcast
        endereco_rede = rede.network_address
        endereco_broadcast = rede.broadcast_address
        
        # Calcula os endereços utilizáveis entre a rede e o broadcast
        enderecos_utilizaveis = list(rede.hosts())
        quantidade_enderecos = len(enderecos_utilizaveis)
        
        return {
            "rede": str(endereco_rede),
            "broadcast": str(endereco_broadcast),
            "endereços_utilizáveis": [str(ip) for ip in enderecos_utilizaveis],
            "quantidade_endereços_utilizáveis": quantidade_enderecos
        }
    except ValueError as e:
        raise HTTPException(status_code=400, detail=str(e))
