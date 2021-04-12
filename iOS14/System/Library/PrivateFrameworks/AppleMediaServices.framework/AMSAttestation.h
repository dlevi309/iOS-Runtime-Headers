/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSAttestation : NSObject
+(id)attestationWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)_generateCertificateChainStringsForOptions:(id)arg1 error:(id*)arg2 ;
+(id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4 ;
+(id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

