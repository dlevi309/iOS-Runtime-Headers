/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary;

@interface _UIStateMachine : NSObject {

	unsigned long long _stateCount;
	unsigned long long _eventCount;
	SCD_Struct_UI108* _transitionTable;
	NSMutableDictionary* _stateChangeObservers;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
+(void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 ;
-(void)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)setStateChangeObserver:(unsigned long long)arg1 observer:(/*^block*/id)arg2 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 postTransitionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)_totalStateCount;
-(void)_iterateTransitionTable:(/*^block*/id)arg1 ;
-(void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(id)_transitionDescriptions;
@end

