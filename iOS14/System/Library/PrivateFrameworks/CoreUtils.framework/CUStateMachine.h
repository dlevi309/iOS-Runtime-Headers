/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class CUState, NSMutableArray, NSPointerArray, NSArray;

@interface CUStateMachine : NSObject {

	CUState* _currentState;
	NSMutableArray* _eventQueue;
	BOOL _dispatching;
	NSPointerArray* _lcaPath;
	BOOL _started;
	CUState* _targetState;
	CUState* _initialState;
	NSArray* _states;

}

@property (nonatomic,retain) CUState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSArray * states;                    //@synthesize states=_states - In the implementation block
-(void)setInitialState:(CUState *)arg1 ;
-(CUState *)initialState;
-(NSArray *)states;
-(void)start;
-(void)_firstTimeInit;
-(void)transitionToState:(id)arg1 ;
-(void)setStates:(NSArray *)arg1 ;
-(void)invalidate;
-(void)dispatchEvent:(id)arg1 ;
-(void)dealloc;
@end

