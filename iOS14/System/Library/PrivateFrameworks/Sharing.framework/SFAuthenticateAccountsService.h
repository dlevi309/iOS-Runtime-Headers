/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol CDPStateUIProvider, SFAuthenticateAccountsServiceDelegate, OS_dispatch_queue;
@class SFService, SFSession, ACAccountStore, NSObject;

@interface SFAuthenticateAccountsService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFService* _sfService;
	SFSession* _sfSession;
	ACAccountStore* _accountStore;
	id<CDPStateUIProvider> _cdpUIProvider;
	unsigned _targetedAccountTypes;
	id<SFAuthenticateAccountsServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) unsigned targetedAccountTypes;                                          //@synthesize targetedAccountTypes=_targetedAccountTypes - In the implementation block
@property (assign,nonatomic,__weak) id<SFAuthenticateAccountsServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                             //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                       //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)_invalidate;
-(void)_cleanup;
-(id)init;
-(id<SFAuthenticateAccountsServiceDelegate>)delegate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_activate;
-(void)setDelegate:(id<SFAuthenticateAccountsServiceDelegate>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)_sfServiceStart;
-(id)progressHandler;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleRequest:(id)arg1 flags:(unsigned)arg2 session:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_handleInfoExchange:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldSignInAccountsInInfoRequest:(id)arg1 ;
-(long long)_nextServiceTypeForTRAccountServices:(id)arg1 ;
-(void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_saveRemoteVerifiedAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1 ;
-(unsigned)_accountTypeForTRAccountService:(unsigned long long)arg1 ;
-(unsigned)targetedAccountTypes;
-(void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticateGameCenterWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__runAuthenticateiCloudWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTargetedAccountTypes:(unsigned)arg1 ;
@end

