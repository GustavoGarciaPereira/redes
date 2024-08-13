Aqui está um exemplo de README para o seu projeto FastAPI, que inclui as rotas `/calcular_rede/` e `/verificar_vizinhanca/`:

```markdown
# Rede IP e Vizinhança API

Este projeto é uma API desenvolvida com FastAPI para calcular detalhes de rede para endereços IP fornecidos e verificar se dois endereços IP estão na mesma sub-rede.

## Funcionalidades

- **Calcular Rede**: Recebe um endereço IP com a notação CIDR e retorna detalhes como o endereço de rede, o endereço de broadcast, os endereços IP utilizáveis e a quantidade de endereços utilizáveis.
- **Verificar Vizinhança**: Recebe dois endereços IP com suas máscaras e verifica se estão na mesma sub-rede.

## Tecnologias Utilizadas

- **FastAPI**: Framework moderno e rápido (baseado em Starlette e Pydantic) para construção de APIs com Python 3.7+.
- **Python 3.7+**: Linguagem de programação utilizada.
- **ipaddress**: Biblioteca padrão do Python para manipulação de redes e IPs.

## Configuração e Execução

### Pré-requisitos

Certifique-se de ter o Python 3.7+ instalado em seu sistema. Além disso, você precisará dos seguintes pacotes:

```bash
pip install fastapi uvicorn
```

### Executando a API

Para executar a API, utilize o seguinte comando na raiz do projeto:

```bash
uvicorn main:app --reload
```

Este comando irá iniciar o servidor em `http://127.0.0.1:8000`, onde `main` é o nome do arquivo Python que contém a aplicação FastAPI.

## Uso

### Calcular Rede

Envie um POST request para `http://127.0.0.1:8000/calcular_rede/` com um JSON contendo o IP e o CIDR:

```json
{
  "ip_cidr": "192.168.1.1/24"
}
```

### Verificar Vizinhança

Envie um POST request para `http://127.0.0.1:8000/verificar_vizinhanca/` com um JSON contendo os dois IPs e suas máscaras:

```json
[
    {
        "ip": "192.168.1.1",
        "mascara": "255.255.255.0"
    },
    {
        "ip": "192.168.1.254",
        "mascara": "255.255.255.0"
    }
]
```
