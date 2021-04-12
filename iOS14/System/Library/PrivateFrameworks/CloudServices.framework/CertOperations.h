/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
*/


#import <CloudServices/CloudServices-Structs.h>
@interface CertOperations : NSObject
+(id)certVersion:(SecCertificateRef)arg1 ;
+(id)rootTrustedVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3 ;
+(id)rootBaseVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3 ;
+(id)rootCurrentVersionForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
+(BOOL)verifyCertData:(id)arg1 withCert:(_SecCertificate*)arg2 withPubKey:(_SecKey*)arg3 stingray:(BOOL)arg4 enroll:(BOOL)arg5 env:(id)arg6 duplicate:(BOOL)arg7 sigVerification:(BOOL)arg8 error:(id*)arg9 ;
@end

