/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface NetworkUtils : NSObject
+(id)encryptionInfoForKey:(unsigned long long)arg1 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(BOOL)arg3 error:(id*)arg4 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newEncryptionInfoWithMasterKeyIndex:(id)arg1 ;
+(int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newRTPSocketDictionary:(BOOL)arg1 rtpSourcePort:(short)arg2 ;
+(id)securityKeyMaterialWithMasterKeyIndex:(id)arg1 ;
@end

