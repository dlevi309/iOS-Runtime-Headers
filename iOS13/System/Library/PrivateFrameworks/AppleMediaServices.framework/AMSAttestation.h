/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSAttestation : NSObject
+(id)_certChainStringsWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)attestationWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4 ;
+(BOOL)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(BOOL)arg2 error:(id*)arg3 ;
+(id)ACLVersionForOptions:(id)arg1 ;
+(id)ACLVersionOnDiskForOptions:(id)arg1 ;
+(BOOL)clearAttestationWithOptions:(id)arg1 error:(id*)arg2 ;
@end

