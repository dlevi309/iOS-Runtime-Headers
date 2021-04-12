/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@protocol OS_dispatch_queue;
@class HDClinicalIngestionAnalyticsAccumulator, HDHealthRecordsProfileExtension, HDProfile, NSObject, HKSynchronousObserverSet;

@interface HDClinicalAccountManager : NSObject {

	HDClinicalIngestionAnalyticsAccumulator* _currentAnalyticsAccumulator;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _observerQueue;
	HKSynchronousObserverSet* _stateChangeObservers;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;                          //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                                         //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) HKSynchronousObserverSet * stateChangeObservers;                                      //@synthesize stateChangeObservers=_stateChangeObservers - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionAnalyticsAccumulator * currentAnalyticsAccumulator;              //@synthesize currentAnalyticsAccumulator=_currentAnalyticsAccumulator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_accountDidChange:(id)arg1 ;
-(HDProfile *)profile;
-(id)accountWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(id)allAccountsWithError:(out id*)arg1 ;
-(void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pruneAuthenticationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAccountStateObserver:(id)arg1 ;
-(id)beginInitialLoginSessionForGatewayWithExternalID:(id)arg1 error:(out id*)arg2 ;
-(id)beginReloginSessionForAccountWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)accountsForGatewaysWithExternalIDs:(id)arg1 errorOut:(out id*)arg2 ;
-(id)accountForSource:(id)arg1 error:(out id*)arg2 ;
-(id)createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 countryCode:(id)arg4 onlyIfNeededForSimulatedGatewayID:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteAccountWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)invalidateCredentialForAccountWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(void)resetLastExtractedRowIDWithCompletion:(/*^block*/id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(BOOL)hasAccountsWithError:(out id*)arg1 ;
-(void)removeAccountStateObserver:(id)arg1 ;
-(BOOL)deleteAccountWithSyncIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)didCompleteFetchForAccount:(id)arg1 wasFullFetch:(BOOL)arg2 ;
-(id)credentialedSessionForAccount:(id)arg1 error:(out id*)arg2 ;
-(id)accountsWithIdentifiers:(id)arg1 error:(out id*)arg2 ;
-(id)userFetchEligibleAccountsWithIdentifiers:(id)arg1 error:(out id*)arg2 ;
-(HDClinicalIngestionAnalyticsAccumulator *)currentAnalyticsAccumulator;
-(id)_loginURLComponentsForState:(id)arg1 gateway:(id)arg2 error:(out id*)arg3 ;
-(id)_createAccountForGatewayWithExternalID:(id)arg1 database:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(id)_savePatientMismatchedCredentialFromAuthResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAccountWithIdentifierNeedsRelogin:(id)arg1 reason:(long long)arg2 error:(id*)arg3 ;
-(void)_fetchAccessTokenForTokenSession:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sessionForAccount:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_updateCredentialFromAuthResponse:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(void)_performIngestionForNewCredentialsOnAccountsWithIdentifiers:(id)arg1 ;
-(BOOL)_deleteAccountWithSyncIdentifier:(id)arg1 database:(id)arg2 error:(out id*)arg3 ;
-(id)_newAccountIdentifierAfterReplacingAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 error:(id*)arg3 ;
-(id)_createCredentialVendorForAccount:(id)arg1 error:(out id*)arg2 ;
-(void)_observerQueue_accountDidChange:(id)arg1 changeType:(long long)arg2 ;
-(void)_observerQueue_messageObserversAboutAccount:(id)arg1 changeType:(long long)arg2 ;
-(id)fetchableAccountsWithIdentifiers:(id)arg1 error:(out id*)arg2 ;
-(id)createStaticAccountWithTitle:(id)arg1 error:(id*)arg2 ;
-(id)unitTesting_createAccountForGateway:(id)arg1 authResponse:(id)arg2 error:(id*)arg3 ;
-(HKSynchronousObserverSet *)stateChangeObservers;
-(void)setStateChangeObservers:(HKSynchronousObserverSet *)arg1 ;
@end

