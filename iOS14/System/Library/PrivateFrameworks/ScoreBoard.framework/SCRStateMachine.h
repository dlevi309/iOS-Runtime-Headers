/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/


@protocol SCRStateTransitionable;
#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRStateTransitionContext;

@interface SCRStateMachine : NSObject {

	id<SCRStateTransitionable> _parent;
	unsigned long long _currentState;
	SCRStateTransitionContext* _nextStateTransition;
	os_unfair_lock_s _stateLock;
	os_unfair_lock_s _processingLock;

}
+(id)stateMachineForTransitionableObject:(id)arg1 ;
-(void)_updateInternalState;
-(id)_stringForState:(unsigned long long)arg1 ;
-(void)_processingLock_processPendingTransitions;
-(void)transitionToState:(unsigned long long)arg1 ;
-(void)_enqueueTransitionToState:(unsigned long long)arg1 ;
-(void)synchronouslyTransitionToState:(unsigned long long)arg1 ;
-(void)_performStateTransition;
-(id)description;
-(id)_pendingStateTransition;
-(BOOL)_acquireProcessingLock:(BOOL)arg1 acquisitionHandler:(/*^block*/id)arg2 ;
-(void)_assertNextStateTransitionIsValid;
-(id)_transitionStringForTransitionContext:(id)arg1 ;
-(void)_processPendingTransitions:(BOOL)arg1 ;
-(id)_initWithParent:(id)arg1 ;
@end

