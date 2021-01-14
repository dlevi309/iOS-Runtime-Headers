/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSceneLayoutSlaveTransactionProviding.h>

@protocol SBFAuthenticationStatusProvider;
@class SBMainWorkspace, SBMainDisplaySceneManager, FBSDisplayIdentity, SBExternalDisplayPresenter, FBSDisplayConfiguration, NSMutableArray, NSString;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding> {

	SBMainWorkspace* _mainWorkspace;
	id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
	SBMainDisplaySceneManager* _mainDisplaySceneManager;
	FBSDisplayIdentity* _identity;
	SBExternalDisplayPresenter* _presenter;
	FBSDisplayConfiguration* _currentConfiguration;
	BOOL _observingAppState;
	BOOL _hasConnectTransactionRun;
	BOOL _disconnected;
	BOOL _tornDown;
	NSMutableArray* _pendingWork;

}

@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(void)_appProcessStateDidChange:(id)arg1 ;
-(id)init;
-(FBSDisplayIdentity *)displayIdentity;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainDisplaySceneManager:(id)arg3 layoutPublisher:(id)arg4 displayConfiguration:(id)arg5 ;
-(void)_authenicationStateDidChange:(id)arg1 ;
-(void)_handleDisplayConnectIfPossible;
-(void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createUpdateTransactionWithLabel:(id)arg1 ;
-(id)_expectedForegroundApp;
-(BOOL)_displayConnectShouldWaitForAppRunning:(id)arg1 ;
-(BOOL)_application:(id)arg1 canAccessDisplay:(id)arg2 ;
-(BOOL)_shouldConnectDisplayNow:(id)arg1 ;
-(void)disconnectWithCompletion:(/*^block*/id)arg1 ;
@end

