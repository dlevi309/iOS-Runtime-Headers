/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BSTransaction*<SBStartupTransition>)startupTransition;
-(id)succinctDescription;
-(void)initializeAndRunStartupTransition:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)_isPendingExitIncludingExternallyControlledReasons:(BOOL)arg1 ;
-(id<SBRestartManagerDelegate>)delegate;
-(void)_addPendingExternallyControlledRestartReason:(id)arg1 ;
-(void)shutdownForReason:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 ;
-(void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)restartWithTransitionRequest:(id)arg1 ;
-(void)_shutdownWithOptions:(unsigned long long)arg1 byUser:(BOOL)arg2 description:(id)arg3 ;
-(void)_persistStartupTransitionContextFromRebootContext:(id)arg1 ;
-(void)setDelegate:(id<SBRestartManagerDelegate>)arg1 ;
-(id)description;
-(void)_restartWithTransitionRequest:(id)arg1 ;
-(void)rebootForReason:(id)arg1 ;
-(BOOL)isPendingExit;
-(void)_exitIsImminent;
-(SBRestartTransitionRequest *)pendingRestartTransitionRequest;
-(void)rebootWithContext:(id)arg1 ;
-(void)_persistStartupTransitionContextFromShutdownContext:(id)arg1 ;
-(void)_postShutdownNotification;
-(void)shutdownWithContext:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_doRestartForTransition:(int)arg1 ;
-(void)_removePendingExternallyControlledRestartReason:(id)arg1 ;
-(void)_persistStartupTransitionContextFromRestartRequest:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_reallyRestartWithTransitionRequest:(id)arg1 ;
-(void)___waitForeverForRunningBoardKill;
-(id)_initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 startupController:(id)arg3 systemService:(id)arg4 ;
@end

