/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInitialState:(long long)arg1 ;
-(long long)initialState;
-(NSMutableDictionary *)transitions;
-(void)setTransitions:(NSMutableDictionary *)arg1 ;
-(long long)currentState;
-(id<CSStateMachineDelegate>)delegate;
-(void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3 ;
-(void)setDelegate:(id<CSStateMachineDelegate>)arg1 ;
-(void)reset;
-(id)initWithInitialState:(long long)arg1 ;
-(void)performTransitionForEvent:(long long)arg1 ;
@end

