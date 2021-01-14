/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychain;
@class CRKAnnotatedCredentialStore, NSDictionary, CRKASMCredentialManifest;

@interface CRKASMCredentialStore : NSObject {

	id<CRKKeychain> _keychain;
	CRKAnnotatedCredentialStore* _certificateAnnotatedStore;
	CRKAnnotatedCredentialStore* _identityAnnotatedStore;

}

@property (nonatomic,readonly) id<CRKKeychain> keychain;                                             //@synthesize keychain=_keychain - In the implementation block
@property (nonatomic,readonly) CRKAnnotatedCredentialStore * certificateAnnotatedStore;              //@synthesize certificateAnnotatedStore=_certificateAnnotatedStore - In the implementation block
@property (nonatomic,readonly) CRKAnnotatedCredentialStore * identityAnnotatedStore;                 //@synthesize identityAnnotatedStore=_identityAnnotatedStore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) CRKASMCredentialManifest * certificateManifest; 
@property (nonatomic,copy,readonly) CRKASMCredentialManifest * identityManifest; 
-(void)clearCertificates;
-(id<CRKKeychain>)keychain;
-(NSDictionary *)debugInfo;
-(id)certificateWithPersistentID:(id)arg1 ;
-(id)identityWithPersistentID:(id)arg1 ;
-(CRKAnnotatedCredentialStore *)certificateAnnotatedStore;
-(CRKAnnotatedCredentialStore *)identityAnnotatedStore;
-(id)makeIdentityWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(CRKASMCredentialManifest *)certificateManifest;
-(void)removeCertificatesWithPersistentIDs:(id)arg1 ;
-(id)addCertificates:(id)arg1 forUserIdentifier:(id)arg2 ;
-(id)makeEntryWithCertificate:(id)arg1 userIdentifier:(id)arg2 ;
-(id)addEntriesByCertificate:(id)arg1 ;
-(CRKASMCredentialManifest *)identityManifest;
-(void)removeIdentitiesWithPersistentIDs:(id)arg1 ;
-(id)addIdentity:(id)arg1 entry:(id)arg2 ;
-(id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 certificateManifestStorageKey:(id)arg3 identityManifestStorageKey:(id)arg4 ;
-(void)forgetCertificatesWithPersistentIDs:(id)arg1 ;
-(id)makeCertificateWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(id)addCertificate:(id)arg1 forUserIdentifier:(id)arg2 ;
-(id)addCertificate:(id)arg1 entry:(id)arg2 ;
-(void)forgetIdentitiesWithPersistentIDs:(id)arg1 ;
-(void)clearIdentities;
-(id)addIdentity:(id)arg1 forUserIdentifier:(id)arg2 ;
@end
