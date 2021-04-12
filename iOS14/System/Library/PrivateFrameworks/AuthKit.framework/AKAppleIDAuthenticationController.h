/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class NSString, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationContextManager, NSLock;

@interface AKAppleIDAuthenticationController : NSObject {

	NSString* _serviceID;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	NSXPCConnection* _authenticationServiceConnection;
	AKAppleIDAuthenticationContextManager* _contextManager;
	NSLock* _connectionLock;
	/*^block*/id _deallocHandler;

}

@property (nonatomic,copy) id deallocHandler;                                                  //@synthesize deallocHandler=_deallocHandler - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate; 
+(id)sensitiveAuthenticationKeys;
-(void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id*)arg2 ;
-(void)fetchDeviceListWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_authenticationServiceConnection;
-(id)activeLoginCode:(id*)arg1 ;
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(void)fetchAuthModeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_urlBagFromCache:(BOOL)arg1 altDSID:(id)arg2 withError:(id*)arg3 ;
-(id)fetchDeviceListWithContext:(id)arg1 error:(id*)arg2 ;
-(void)generateLoginCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)warmUpVerificationSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)deallocHandler;
-(void)performCircleRequestWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountNamesForAltDSID:(id)arg1 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(BOOL)synchronizeFollowUpItemsForContext:(id)arg1 error:(id*)arg2 ;
-(void)renewRecoveryTokenWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id*)arg2 ;
-(void)fetchDeviceMapWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchURLBagForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)isCreateAppleIDAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)setDeallocHandler:(id)arg1 ;
-(void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isDevicePasscodeProtected:(id*)arg1 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getServerUILoadDelegateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)teardownFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)deleteAuthorizationDatabase:(id*)arg1 ;
-(void)dealloc;
-(void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2 ;
@end

