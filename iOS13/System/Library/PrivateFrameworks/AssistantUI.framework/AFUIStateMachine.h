/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AFUIStateMachineDelegate>)delegate;
-(void)setDelegate:(id<AFUIStateMachineDelegate>)arg1 ;
-(long long)state;
-(void)_setState:(long long)arg1 ;
-(id)_descriptionForEvent:(long long)arg1 ;
-(id)initWithInitialState:(long long)arg1 ;
-(void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3 ;
-(void)performTransitionForEvent:(long long)arg1 ;
-(id)_endStatesByEventByStartState;
-(id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2 ;
-(void)_setState:(long long)arg1 forEvent:(long long)arg2 ;
-(void)setEndStatesByEventByStartState:(NSMutableDictionary *)arg1 ;
@end

