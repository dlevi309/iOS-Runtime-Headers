/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSKeychain : NSObject
+(BOOL)deleteCertificateChainWithOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)deleteKeyPairWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)legacyAttestationForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)copyPublicKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(SecAccessControlRef)createAccessControlRefWithOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)storePrimaryCert:(SecCertificateRef)arg1 extendedCert:(SecCertificateRef)arg2 privateKey:(_SecKey*)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)certificateKeychainLabelsForOptions:(id)arg1 ;
+(id)_certificatePrivateKeyLabelForOptions:(id)arg1 ;
+(id)keychainLabelForOptions:(id)arg1 ;
+(id)certificateChainForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)_generateLegacyKeypairForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(id)_legacyAttestationForOptions:(id)arg1 error:(id*)arg2 ;
+(id)_primaryConstraintsWithOptions:(id)arg1 ;
+(id)_extendedConstraintsWithOptions:(id)arg1 ;
+(id)_primaryConstraints;
+(id)_primaryConstraintsForMac;
+(id)_primaryConstraintsForWatch;
@end

