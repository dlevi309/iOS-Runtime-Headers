/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIStateMachine : NSObject {

	const SCD_Struct_UI119* _spec;
	BOOL _externalSpec;
	unsigned long long _state;

}

@property (nonatomic,readonly) void* spec; 
@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)handleEvent:(unsigned long long)arg1 withContext:(_UIStateContext*)arg2 ;
-(void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void*)spec;
-(id)initWithSpec:(void*)arg1 initialState:(unsigned long long)arg2 ;
-(id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3 ;
-(unsigned long long)state;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 postTransitionHandler:(/*^block*/id)arg4 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 ;
-(void)setStateChangeObserver:(unsigned long long)arg1 observer:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

