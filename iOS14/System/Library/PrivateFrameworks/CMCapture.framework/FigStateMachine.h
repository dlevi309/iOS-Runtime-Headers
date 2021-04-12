/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString;

@interface FigStateMachine : NSObject {

	id _owner;
	os_unfair_lock_s _lock;
	BOOL _performsAtomicStateTransitions;
	unsigned _currentState;
	FigStateMachineStateConfiguration* _stateConfigurations;
	char _stateCount;
	NSString* _label;

}

@property (assign,nonatomic) BOOL performsAtomicStateTransitions;              //@synthesize performsAtomicStateTransitions=_performsAtomicStateTransitions - In the implementation block
@property (readonly) unsigned currentState; 
@property (readonly) NSString * label; 
@property (readonly) NSString * currentStateLabel; 
+(void)initialize;
-(void)whenTransitioningToStates:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(void)whenTransitioningToStatesFail:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(unsigned)currentState;
-(BOOL)transitionToState:(unsigned)arg1 ;
-(BOOL)transitionToState:(unsigned)arg1 fromState:(unsigned)arg2 ;
-(BOOL)transitionToState:(unsigned)arg1 errorStatus:(int)arg2 ;
-(NSString *)currentStateLabel;
-(void)markStateAsTerminal:(unsigned)arg1 ;
-(id)labelForState:(unsigned)arg1 ;
-(id)initWithLabel:(id)arg1 stateCount:(char)arg2 initialState:(unsigned)arg3 owner:(id)arg4 ;
-(id)description;
-(void)whenTransitioningToStateFails:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(void)setLabel:(id)arg1 forState:(unsigned)arg2 ;
-(void)whenTransitioningToState:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(BOOL)_transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 errorStatus:(int)arg3 ;
-(BOOL)performsAtomicStateTransitions;
-(void)setPerformsAtomicStateTransitions:(BOOL)arg1 ;
-(BOOL)transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 ;
-(void)whenTransitioningFromState:(unsigned)arg1 toState:(unsigned)arg2 callHandler:(/*^block*/id)arg3 ;
-(NSString *)label;
-(void)dealloc;
@end

