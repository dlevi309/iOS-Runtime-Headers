/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEIKEv2Helper : NSObject
+(BOOL)getDPDAttributesForMode:(long long)arg1 isWakeUp:(BOOL)arg2 isNAT:(BOOL)arg3 retry:(unsigned*)arg4 timeout:(unsigned long long*)arg5 frequency:(unsigned*)arg6 ;
+(unsigned long long)getIdentifierType:(id)arg1 ;
+(id)createIKESAConfigFromProtocol:(id)arg1 path:(id)arg2 ifIndex:(unsigned)arg3 options:(id)arg4 serverAddress:(id)arg5 ;
+(id)createIKEv2ChildSAConfigFromProtocol:(id)arg1 ;
+(id)createIKEv2SessionConfigFromProtocol:(id)arg1 options:(id)arg2 onDemandEnabled:(BOOL)arg3 ;
+(id)createDNSSettingsFromTunnelConfig:(id)arg1 ;
+(id)createIPv4SettingsFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3 ;
+(id)createIPv6SettingsFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3 ;
+(id)createRouteArrayFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3 gatewayAddress:(id)arg4 isIPv4:(BOOL)arg5 ;
+(id)createIKESAProposalFromProtocol:(id)arg1 saParameters:(id)arg2 options:(id)arg3 nonceSize:(unsigned*)arg4 ;
+(id)createIKEv2ChildSAProposalFromProtocol:(id)arg1 saParameters:(id)arg2 ;
@end

