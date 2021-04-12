/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSStateMachineDelegate;
@class NSMutableDictionary;

@interface CSStateMachine : NSObject {

	id<CSStateMachineDelegate> _delegate;
	long long _currentState;
	long long _initialState;
	NSMutableDictionary* _transitions;

}

@property (assign,nonatomic) long long initialState;                                  //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transitions;                       //@synthesize transitions=_transitions - In the implementation block
@property (assign,nonatomic,__weak) id<CSStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentState;                                //@synthesize currentState=_currentState - In the implementation block
-(id<CSStateMachineDelegate>)delegate;
-(void)setDelegate:(id<CSStateMachineDelegate>)arg1 ;
-(void)reset;
-(long long)currentState;
-(long long)initialState;
-(void)setInitialState:(long long)arg1 ;
-(NSMutableDictionary *)transitions;
-(void)setTransitions:(NSMutableDictionary *)arg1 ;
-(id)initWithInitialState:(long long)arg1 ;
-(void)performTransitionForEvent:(long long)arg1 ;
-(void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3 ;
@end

