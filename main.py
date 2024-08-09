# # pip install scapy
# from scapy.all import sniff

# def packet_callback(packet):
#     print(f"Packet captured: {packet.summary()}")

# def start_sniffing(interface):
#     print(f"Starting to sniff on interface: {interface}")
#     sniff(iface=interface, prn=packet_callback, store=0)

# if __name__ == "__main__":
#     # Substitua 'eth0' pela interface de rede que você deseja escutar
#     interface = 'eth0'
#     start_sniffing(interface)


import ipaddress

def calcular_rede_e_broadcast(ip_cidr):
    # Cria um objeto IPv4Network a partir do IP/CIDR fornecido
    rede = ipaddress.ip_network(ip_cidr, strict=False)
    
    # Calcula o endereço de rede e o endereço de broadcast
    endereco_rede = rede.network_address
    endereco_broadcast = rede.broadcast_address
    
    return endereco_rede, endereco_broadcast

# Testes
ips = [
    "10.32.55.29/30",
    "10.10.43.70/29",
    "172.10.63.112/25",
    "201.38.99.175/27",
    "200.200.60.212/28",
    "10.100.25.18/29",
    "172.15.100.149/26",
    "80.55.22.78/27"
]

for ip in ips:
    rede, broadcast = calcular_rede_e_broadcast(ip)
    print(f"IP: {ip}")
    print(f"Rede: {rede}")
    print(f"Broadcast: {broadcast}\n")
