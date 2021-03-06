/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUIStateMachineDelegate;
@class NSMutableDictionary;

@interface AFUIStateMachine : NSObject {

	id<AFUIStateMachineDelegate> _delegate;
	long long _state;
	NSMutableDictionary* _endStatesByEventByStartState;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                                                    //@synthesize state=_state - In the implementation block
@property (getter=_endStatesByEventByStartState,nonatomic,retain) NSMutableDictionary * endStatesByEventByStartState;              //@synthesize endStatesByEventByStartState=_endStatesByEventByStartState - In the implementation block
@property (assign,nonatomic,__weak) id<AFUIStateMachineDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
-(void)_setState:(long long)arg1 ;
-(id<AFUIStateMachineDelegate>)delegate;
-(void)setDelegate:(id<AFUIStateMachineDelegate>)arg1 ;
-(id)_descriptionForEvent:(long long)arg1 ;
-(long long)state;
-(id)initWithInitialState:(long long)arg1 ;
-(void)performTransitionForEvent:(long long)arg1 ;
-(void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3 ;
-(id)_endStatesByEventByStartState;
-(id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2 ;
-(void)_setState:(long long)arg1 forEvent:(long long)arg2 ;
-(void)setEndStatesByEventByStartState:(NSMutableDictionary *)arg1 ;
@end

