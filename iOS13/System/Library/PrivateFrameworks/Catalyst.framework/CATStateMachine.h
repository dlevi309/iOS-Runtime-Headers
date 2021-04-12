/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSMutableDictionary, NSString, CATState;

@interface CATStateMachine : NSObject {

	NSMutableDictionary* mStateByName;
	NSString* mCalloutReason;
	NSString* _name;
	CATState* _initialState;
	CATState* _currentState;
	id _target;
	unsigned long long _logLevel;

}

@property (nonatomic,retain) CATState * currentState;                  //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CATState * initialState;                  //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,__weak,readonly) id target;                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)new;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)target;
-(void)start;
-(id)initWithTarget:(id)arg1 ;
-(CATState *)currentState;
-(CATState *)initialState;
-(void)setCurrentState:(CATState *)arg1 ;
-(void)setInitialState:(CATState *)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(void)addState:(id)arg1 ;
-(id)stateWithName:(id)arg1 ;
-(void)transitionWithTriggeringEvent:(id)arg1 ;
-(void)delegateDidEnterState:(id)arg1 event:(id)arg2 ;
-(id)eventForTriggeringEvent:(id)arg1 ;
-(void)delegateWillExitState:(id)arg1 event:(id)arg2 ;
-(void)invokeAction:(SEL)arg1 event:(id)arg2 ;
-(id)addStateWithName:(id)arg1 ;
-(BOOL)canTransitionWithTriggeringEvent:(id)arg1 ;
@end

