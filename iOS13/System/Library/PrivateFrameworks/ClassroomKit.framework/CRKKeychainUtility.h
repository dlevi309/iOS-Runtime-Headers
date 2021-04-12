/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@interface CRKKeychainUtility : NSObject
+(const void*)copyItemWithPersistentID:(id)arg1 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 ;
+(BOOL)removeItemWithPersistentID:(id)arg1 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 ;
+(id)getCertificateExpirationDate:(SecCertificateRef)arg1 ;
+(id)baseQueryAttributes;
+(id)persistentIdFromPrivateKeyData:(id)arg1 certificateData:(id)arg2 ;
+(SecIdentityRef)identityFromPrivateKeyData:(id)arg1 certificateData:(id)arg2 ;
+(id)addItem:(void*)arg1 toGroup:(id)arg2 ;
+(id)_validityEndDateForCertificateRef:(SecCertificateRef)arg1 ;
+(id)getCertificateFingerprint:(SecCertificateRef)arg1 ;
+(SecKeyRef)privateKeyFromPersistentId:(id)arg1 ;
+(SecIdentityRef)createIdentityWithCommonName:(id)arg1 error:(id*)arg2 ;
+(id)getCommonNamesForCertificate:(SecCertificateRef)arg1 ;
+(id)validityDateIntervalForItemWithPersistentID:(id)arg1 ;
+(id)_validityDateIntervalForCetificateRef:(SecCertificateRef)arg1 ;
+(id)_validityStartDateForCertificateRef:(SecCertificateRef)arg1 ;
+(id)addPrivateKeyData:(id)arg1 certificateData:(id)arg2 toGroup:(id)arg3 ;
+(id)getCertificatesWithPersistentIDs:(id)arg1 ;
+(SecCertificateRef)getLeafCertificateForTrust:(SecTrustRef)arg1 ;
+(id)getIdentityExpirationDate:(SecIdentityRef)arg1 ;
+(id)getIdentityFingerprint:(SecIdentityRef)arg1 ;
+(id)getIdentityPublicCertificateData:(SecIdentityRef)arg1 ;
+(id)privateKeyDataFromPersistentId:(id)arg1 ;
+(id)certificateDataFromPersistentId:(id)arg1 ;
+(id)persistentIdFromCertificateData:(id)arg1 ;
+(id)addCertificateData:(id)arg1 toGroup:(id)arg2 ;
+(id)createIdentityPersistentIdFromCommonName:(id)arg1 groupName:(id)arg2 ;
+(id)certificateCommonNamesFromPersistentID:(id)arg1 ;
+(BOOL)itemWithPersistentIDIsTemporallyValid:(id)arg1 ;
+(id)identityExpirationDateFromPersistentId:(id)arg1 ;
+(id)certificateExpirationDateFromPersistentId:(id)arg1 ;
+(BOOL)certificateExpiredWithPersistentId:(id)arg1 ;
+(BOOL)identityExpiredWithPersistentId:(id)arg1 ;
@end

