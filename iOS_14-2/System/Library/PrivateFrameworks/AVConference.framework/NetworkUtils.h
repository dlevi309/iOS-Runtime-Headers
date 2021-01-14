/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface NetworkUtils : NSObject
+(id)encryptionInfoForKey:(unsigned long long)arg1 ;
+(BOOL)createAndStartListener:(id*)arg1 withParameters:(id)arg2 ;
+(void)setUniquePIDOnParameters:(id)arg1 shouldRunInProcess:(BOOL)arg2 ;
+(int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(BOOL)arg3 error:(id*)arg4 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newEncryptionInfoWithMasterKeyIndex:(id)arg1 ;
+(BOOL)createNWPathEvaluator:(id*)arg1 withIPAddress:(id)arg2 localPort:(int*)arg3 remotePort:(int)arg4 shouldRunInProcess:(BOOL)arg5 ;
+(id)newNWConnectionWithIPAddress:(id)arg1 srcPort:(short)arg2 ;
+(int)nonConnectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newRTPSocketDictionary:(BOOL)arg1 rtpSourcePort:(short)arg2 ;
+(id)securityKeyMaterialWithMasterKeyIndex:(id)arg1 ;
@end

