/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychain;
@class NSString, NSDictionary, CRKAnnotatedCredentialManifest;

@interface CRKAnnotatedCredentialStore : NSObject {

	id<CRKKeychain> _keychain;
	NSString* _accessGroup;
	NSString* _manifestStorageKey;
	/*^block*/id _addBlock;
	/*^block*/id _fetchBlock;

}

@property (nonatomic,readonly) id<CRKKeychain> keychain;                                    //@synthesize keychain=_keychain - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;                                 //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * manifestStorageKey;                          //@synthesize manifestStorageKey=_manifestStorageKey - In the implementation block
@property (nonatomic,readonly) id addBlock;                                                 //@synthesize addBlock=_addBlock - In the implementation block
@property (nonatomic,readonly) id fetchBlock;                                               //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) CRKAnnotatedCredentialManifest * manifest; 
+(id)certificateStoreWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3 ;
+(id)identityStoreWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3 ;
-(id)fetchBlock;
-(id<CRKKeychain>)keychain;
-(CRKAnnotatedCredentialManifest *)manifest;
-(NSString *)accessGroup;
-(NSDictionary *)debugInfo;
-(id)addCredentials:(id)arg1 ;
-(id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3 addBlock:(/*^block*/id)arg4 fetchBlock:(/*^block*/id)arg5 ;
-(id)storedManifest;
-(id)addCredential:(id)arg1 manifest:(id)arg2 ;
-(void)setStoredManifest:(id)arg1 ;
-(void)removePersistentIDsFromKeychain:(id)arg1 ;
-(void)forgetCredentialsWithPersistentIDs:(id)arg1 ;
-(id)addBlock;
-(id)storedManifestData;
-(void)setStoredManifestData:(id)arg1 ;
-(NSString *)manifestStorageKey;
-(id)dataForStorageKey:(id)arg1 ;
-(void)setData:(id)arg1 forStorageKey:(id)arg2 ;
-(id)credentialWithPersistentID:(id)arg1 ;
-(void)removeCredentialsWithPersistentIDs:(id)arg1 ;
@end

