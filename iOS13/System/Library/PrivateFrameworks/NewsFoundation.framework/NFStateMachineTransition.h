/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFStateMachineContextType;
@class NFStateMachine, NFStateMachineEvent, NFStateMachineState;

@interface NFStateMachineTransition : NSObject {

	NFStateMachine* _stateMachine;
	NFStateMachineEvent* _event;
	NFStateMachineState* _fromState;
	NFStateMachineState* _toState;
	id<NFStateMachineContextType> _context;

}

@property (nonatomic,retain) NFStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NFStateMachineState * fromState;                    //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,retain) NFStateMachineState * toState;                      //@synthesize toState=_toState - In the implementation block
@property (nonatomic,retain) NFStateMachineEvent * event;                        //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) id<NFStateMachineContextType> context;              //@synthesize context=_context - In the implementation block
-(id)description;
-(id<NFStateMachineContextType>)context;
-(void)setContext:(id<NFStateMachineContextType>)arg1 ;
-(NFStateMachineEvent *)event;
-(void)setEvent:(NFStateMachineEvent *)arg1 ;
-(NFStateMachine *)stateMachine;
-(void)setStateMachine:(NFStateMachine *)arg1 ;
-(NFStateMachineState *)fromState;
-(NFStateMachineState *)toState;
-(void)setFromState:(NFStateMachineState *)arg1 ;
-(void)setToState:(NFStateMachineState *)arg1 ;
-(id)initWithStateMachine:(id)arg1 event:(id)arg2 fromState:(id)arg3 toState:(id)arg4 context:(id)arg5 ;
@end

