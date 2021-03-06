/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)accessQueue;
+(id)sharedController;
+(void)migrateOldAccountInformation;
-(id)init;
-(void)dealloc;
-(ACAccountStore *)store;
-(id)accessQueue;
-(void)setStore:(ACAccountStore *)arg1 ;
-(BOOL)loginDisabled;
-(void)accountStoreDidChange:(id)arg1 ;
-(id)credentialForPlayer:(id)arg1 environment:(long long)arg2 ;
-(void)accountStoreEmailDidChange:(id)arg1 ;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(GKThreadsafeDictionary *)primaryCredentialCache;
-(GKThreadsafeDictionary *)allCredentialsCache;
-(void)invalidateCredentialCaches;
-(void)_transact:(/*^block*/id)arg1 complete:(/*^block*/id)arg2 ;
-(id)_transactAndWait:(/*^block*/id)arg1 ;
-(id)allCredentialsForEnvironment:(long long)arg1 ;
-(id)primaryCredentialForEnvironment:(long long)arg1 ;
-(long long)loginCancelledCount;
-(void)setCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)loginStatusForCredential:(id)arg1 ;
-(id)credentialForUsername:(id)arg1 environment:(long long)arg2 ;
-(id)pushCredentialForEnvironment:(long long)arg1 ;
-(id)suggestedUsername;
-(void)setPrimaryCredentialCache:(GKThreadsafeDictionary *)arg1 ;
-(void)setAllCredentialsCache:(GKThreadsafeDictionary *)arg1 ;
@end

