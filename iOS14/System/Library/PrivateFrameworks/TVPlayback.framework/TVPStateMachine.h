/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString, NSArray;

@interface TVPStateMachine : NSObject {

	/*^block*/id _stateChangeHandler;
	NSMutableArray* _events;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _defaultHandlers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _blocksToExecuteAfterStateTransition;
	BOOL _handlingEvent;
	BOOL _shouldAcceptEvents;
	BOOL _callsStateChangeHandlerSynchronously;
	NSString* _loggingComponent;
	NSString* _name;
	NSString* _currentState;
	long long _mode;
	NSObject*<OS_os_log> _logObject;
	NSArray* _ignorableEvents;

}

@property (copy) NSString * currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long mode;                                       //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL shouldAcceptEvents;                                          //@synthesize shouldAcceptEvents=_shouldAcceptEvents - In the implementation block
@property (nonatomic,copy) NSString * loggingComponent;                              //@synthesize loggingComponent=_loggingComponent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> logObject;                         //@synthesize logObject=_logObject - In the implementation block
@property (copy) NSArray * ignorableEvents;                                          //@synthesize ignorableEvents=_ignorableEvents - In the implementation block
@property (assign,nonatomic) BOOL callsStateChangeHandlerSynchronously;              //@synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously - In the implementation block
+(void)initialize;
+(void)registerStateMachine:(id)arg1 ;
+(id)stateMachineWithName:(id)arg1 ;
+(void)deregisterStateMachine:(id)arg1 ;
+(id)stateMachinesOfType:(Class)arg1 ;
-(void)setCurrentState:(NSString *)arg1 ;
-(long long)mode;
-(NSString *)currentState;
-(NSString *)name;
-(void)_processNextEvent;
-(id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 ;
-(void)setLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setShouldAcceptEvents:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3 ;
-(void)executeBlockAfterCurrentStateTransition:(/*^block*/id)arg1 ;
-(void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)postEvent:(id)arg1 ;
-(void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(/*^block*/id)arg4 ;
-(void)setCallsStateChangeHandlerSynchronously:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 withContext:(id)arg2 ;
-(void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_os_log>)logObject;
-(void)purgeEventQueue;
-(void)deregisterHandlers;
-(BOOL)shouldAcceptEvents;
-(NSArray *)ignorableEvents;
-(void)setLoggingComponent:(NSString *)arg1 ;
-(NSString *)loggingComponent;
-(void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3 ;
-(void)logUnhandledEvents;
-(void)setIgnorableEvents:(NSArray *)arg1 ;
-(BOOL)callsStateChangeHandlerSynchronously;
-(void)_executePostTransitionBlocks;
-(void)_processEvent:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 ;
-(/*^block*/id)_eventHandlerForEvent:(id)arg1 ;
-(void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4 ;
@end

