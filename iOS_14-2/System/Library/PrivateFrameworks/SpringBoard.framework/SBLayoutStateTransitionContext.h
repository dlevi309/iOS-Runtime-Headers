/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBLayoutState, NSError, SBWorkspaceTransaction, SBWorkspaceApplicationSceneTransitionContext;

@interface SBLayoutStateTransitionContext : NSObject {

	BOOL _complete;
	BOOL _animationsDisabled;
	SBLayoutState* _fromLayoutState;
	SBLayoutState* _toLayoutState;
	NSError* _error;
	SBWorkspaceTransaction* _workspaceTransaction;
	SBWorkspaceApplicationSceneTransitionContext* _applicationTransitionContext;

}

@property (nonatomic,__weak,readonly) SBWorkspaceTransaction * workspaceTransaction;                                            //@synthesize workspaceTransaction=_workspaceTransaction - In the implementation block
@property (nonatomic,__weak,readonly) SBWorkspaceApplicationSceneTransitionContext * applicationTransitionContext;              //@synthesize applicationTransitionContext=_applicationTransitionContext - In the implementation block
@property (nonatomic,readonly) SBLayoutState * fromLayoutState;                                                                 //@synthesize fromLayoutState=_fromLayoutState - In the implementation block
@property (nonatomic,readonly) SBLayoutState * toLayoutState;                                                                   //@synthesize toLayoutState=_toLayoutState - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                                                                 //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                                                 //@synthesize error=_error - In the implementation block
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (nonatomic,readonly) BOOL animationsDisabled;                                                                         //@synthesize animationsDisabled=_animationsDisabled - In the implementation block
-(BOOL)isInterrupted;
-(BOOL)isComplete;
-(id)init;
-(SBWorkspaceTransaction *)workspaceTransaction;
-(BOOL)animationsDisabled;
-(id)initWithWorkspaceTransaction:(id)arg1 ;
-(NSError *)error;
-(SBLayoutState *)toLayoutState;
-(SBLayoutState *)fromLayoutState;
-(SBWorkspaceApplicationSceneTransitionContext *)applicationTransitionContext;
-(void)transitionCompletedWithError:(id)arg1 ;
@end

