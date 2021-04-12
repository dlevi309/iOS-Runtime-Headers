/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject {

	long long _loginCancelledCount;
	ACAccountStore* _store;
	GKThreadsafeDictionary* _primaryCredentialCache;
	GKThreadsafeDictionary* _allCredentialsCache;

}

@property (nonatomic,retain) ACAccountStore * store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * primaryCredentialCache;              //@synthesize primaryCredentialCache=_primaryCredentialCache - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * allCredentialsCache;                 //@synthesize allCredentialsCache=_allCredentialsCache - In the implementation block
@property (assign) long long loginCancelledCount;                                          //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (readonly) BOOL loginDisabled; 
+(void)migrateOldAccountInformation;
+(id)accessQueue;
+(id)sharedController;
-(void)setStore:(ACAccountStore *)arg1 ;
-(void)accountStoreEmailDidChange:(id)arg1 ;
-(void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(ACAccountStore *)store;
-(BOOL)loginDisabled;
-(void)setAllCredentialsCache:(GKThreadsafeDictionary *)arg1 ;
-(void)setPrimaryCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)credentialForPlayer:(id)arg1 environment:(long long)arg2 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)removeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryCredentialCache:(GKThreadsafeDictionary *)arg1 ;
-(id)pushCredentialForEnvironment:(long long)arg1 ;
-(void)_transact:(/*^block*/id)arg1 complete:(/*^block*/id)arg2 ;
-(id)primaryCredentialForEnvironment:(long long)arg1 ;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(id)accessQueue;
-(unsigned long long)loginStatusForCredential:(id)arg1 ;
-(void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)loginCancelledCount;
-(GKThreadsafeDictionary *)primaryCredentialCache;
-(id)_transactAndWait:(/*^block*/id)arg1 ;
-(GKThreadsafeDictionary *)allCredentialsCache;
-(void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)credentialForUsername:(id)arg1 environment:(long long)arg2 ;
-(id)suggestedUsername;
-(void)dealloc;
-(void)invalidateCredentialCaches;
-(id)allCredentialsForEnvironment:(long long)arg1 ;
@end

