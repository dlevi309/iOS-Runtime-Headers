/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)isConnected;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg1 ;
-(id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainDisplaySceneManager:(id)arg3 layoutPublisher:(id)arg4 displayConfiguration:(id)arg5 ;
-(void)_authenicationStateDidChange:(id)arg1 ;
-(void)_handleDisplayConnectIfPossible;
-(void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createUpdateTransactionWithLabel:(id)arg1 ;
-(id)_expectedForegroundApp;
-(BOOL)_displayConnectShouldWaitForAppRunning:(id)arg1 ;
-(BOOL)_application:(id)arg1 canAccessDisplay:(id)arg2 ;
-(void)_appProcessStateDidChange:(id)arg1 ;
-(BOOL)_shouldConnectDisplayNow:(id)arg1 ;
-(void)disconnectWithCompletion:(/*^block*/id)arg1 ;
@end

