/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource;
@class SBInitialRestartState, SBStartupTransitionController, SBRestartTransitionRequest, NSMutableSet, FBSystemService;

@interface SBRestartManager : NSObject {

	id<SBRestartManagerDelegate> _delegate;
	SBInitialRestartState* _initialRestartState;
	SBStartupTransitionController* _startupController;
	SBRestartTransitionRequest* _pendingRestartTransitionRequest;
	id<SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
	BOOL _isShuttingDown;
	BOOL _isRestartImminent;
	NSMutableSet* _pendingExternallyControlledRestartReasons;
	FBSystemService* _systemService;

}

@property (assign,nonatomic,__weak) id<SBRestartManagerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BSTransaction*<SBStartupTransition> startupTransition; 
@property (nonatomic,readonly) SBRestartTransitionRequest * pendingRestartTransitionRequest;              //@synthesize pendingRestartTransitionRequest=_pendingRestartTransitionRequest - In the implementation block
@property (getter=isPendingExit,nonatomic,readonly) BOOL pendingExit; 
-(id)init;
-(id)description;
-(id<SBRestartManagerDelegate>)delegate;
-(void)setDelegate:(id<SBRestartManagerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isPendingExit;
-(void)initializeAndRunStartupTransition:(/*^block*/id)arg1 ;
-(void)rebootForReason:(id)arg1 ;
-(id)initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 ;
-(BSTransaction*<SBStartupTransition>)startupTransition;
-(void)restartWithTransitionRequest:(id)arg1 ;
-(void)shutdownForReason:(id)arg1 ;
-(void)shutdownWithContext:(id)arg1 ;
-(void)_exitIsImminent;
-(SBRestartTransitionRequest *)pendingRestartTransitionRequest;
-(void)_addPendingExternallyControlledRestartReason:(id)arg1 ;
-(void)_removePendingExternallyControlledRestartReason:(id)arg1 ;
-(void)rebootWithContext:(id)arg1 ;
-(id)_initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 startupController:(id)arg3 systemService:(id)arg4 ;
-(BOOL)_isPendingExitIncludingExternallyControlledReasons:(BOOL)arg1 ;
-(void)_persistStartupTransitionContextFromShutdownContext:(id)arg1 ;
-(void)_shutdownWithOptions:(unsigned long long)arg1 byUser:(BOOL)arg2 description:(id)arg3 ;
-(void)_persistStartupTransitionContextFromRebootContext:(id)arg1 ;
-(void)_restartWithTransitionRequest:(id)arg1 ;
-(void)_postShutdownNotification;
-(void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_reallyRestartWithTransitionRequest:(id)arg1 ;
-(void)_persistStartupTransitionContextFromRestartRequest:(id)arg1 ;
-(void)_doRestartForTransition:(int)arg1 ;
-(void)___waitForeverForRunningBoardKill;
@end

