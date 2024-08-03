# pip install scapy
from scapy.all import sniff

def packet_callback(packet):
    print(f"Packet captured: {packet.summary()}")

def start_sniffing(interface):
    print(f"Starting to sniff on interface: {interface}")
    sniff(iface=interface, prn=packet_callback, store=0)

if __name__ == "__main__":
    # Substitua 'eth0' pela interface de rede que você deseja escutar
    interface = 'eth0'
    start_sniffing(interface)
