/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


#import <Transparency/Transparency-Structs.h>
@interface TransparencyCertificateHelper : NSObject
+(BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
+(SecCertificateRef)certificateFromData:(id)arg1 error:(id*)arg2 ;
+(id)copyTrustedKeysFromDataArray:(id)arg1 error:(id*)arg2 ;
+(BOOL)addTrustedCertificate:(id)arg1 trustedKeys:(id)arg2 error:(id*)arg3 ;
+(id)createCACertificatesArray:(id)arg1 error:(id*)arg2 ;
+(BOOL)verifyLeaf:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
@end

