/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@class CUStateMachine, NSDictionary, CUState, NSPointerArray;

@interface SUICProgressStateMachine : NSObject {

	CUStateMachine* _underlyingStateMachine;
	NSDictionary* _stateForStateName;
	unsigned long long _currentState;
	CUState* _abstractState;
	NSPointerArray* _stateMachineObservers;

}

@property (setter=_setStateMachineObservers:,getter=_stateMachineObservers,nonatomic,retain) NSPointerArray * stateMachineObservers;              //@synthesize stateMachineObservers=_stateMachineObservers - In the implementation block
@property (readonly) unsigned long long state; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)handleEvent:(unsigned long long)arg1 ;
-(void)setObservers:(id)arg1 ;
-(unsigned long long)state;
-(void)dealloc;
-(void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2 ;
-(void)_ignoreEvent:(unsigned long long)arg1 ;
-(void)addObservers:(id)arg1 ;
-(id)_stateMachineObservers;
-(void)_setStateMachineObservers:(id)arg1 ;
@end

