





!
!
!
line con 0
line vty 0 4
 login
!
!
!
end




Router>
Router>
Router>
Router>
Router>
Router>
Router>
Router>
Router>enable
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#
Router#conf t
Enter configuration commands, one per line.  End with CNTL/Z.
Router(config)#interface f0/0
Router(config-if)#ip address <!--StartFragment--><div style="color: #cccccc;background-color: #1f1f1f;font-family: Consolas, 'Courier New', monospace;font-weight: normal;font-size: 14px;line-height: 19px;white-space: pre;"><div><span style="color: #cccccc;">192.168.10.1 255^Z
Router#
%SYS-5-CONFIG_I: Configured from console by console

Router#
Router#
Router#
Router#conf t
Enter configuration commands, one per line.  End with CNTL/Z.
Router(config)#interface f0/0
Router(config-if)#ip address 192.168.10.1 255.255.255.248
Router(config-if)#wr
                  ^
% Invalid input detected at '^' marker.
	
Router(config-if)#wr
                  ^
% Invalid input detected at '^' marker.
	
Router(config-if)#exit
Router(config)#wr
               ^
% Invalid input detected at '^' marker.
	
Router(config)#exit
Router#
%SYS-5-CONFIG_I: Configured from console by console

Router#wr
Building configuration...
[OK]
Router#
Router#
Router#
Router#
Router#enable
Router#conf t
Enter configuration commands, one per line.  End with CNTL/Z.
Router(config)#interface f0/1
Router(config-if)#ip address 192.168.10.33 255.255.255.224
Router(config-if)#exit
Router(config)#exit
Router#
%SYS-5-CONFIG_I: Configured from console by console

Router#
Router#wr
Building configuration...
[OK]
Router#
Router#
Router#wr
Building configuration...
[OK]
Router#
Router#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Router(config)#interface FastEthernet0/1
Router(config-if)#no shutdown

%LINK-5-CHANGED: Interface FastEthernet0/1, changed state to up


%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/1, changed state to up
Router(config-if)#
Router(config-if)#exit
Router(config)#interface FastEthernet0/1
Router(config-if)#
Router(config-if)#exit
Router(config)#interface FastEthernet0/0
Router(config-if)#no shutdown

%LINK-5-CHANGED: Interface FastEthernet0/0, changed state to up


%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/0, changed state to up
Router(config-if)#








Router con0 is now available






Press RETURN to get started.













Router>enable
Router#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Router(config)#interface FastEthernet0/0
Router(config-if)#shutdown

Router(config-if)#
%LINK-5-CHANGED: Interface FastEthernet0/0, changed state to administratively down

%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/0, changed state to down
no shutdown

%LINK-5-CHANGED: Interface FastEthernet0/0, changed state to up


%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/0, changed state to up
Router(config-if)#
Router(config-if)#
Router(config-if)#
Router(config-if)#
Router(config-if)#








Router con0 is now available






Press RETURN to get started.




