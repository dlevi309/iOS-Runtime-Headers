/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class CUStateMachine, CUStateEvent;

@interface CKUploadRequestManagerStateMachine : NSObject {

	/*^block*/id _actionHandler;
	/*^block*/id _enterStateHandler;
	/*^block*/id _exitStateHandler;
	CUStateMachine* _stateMachine;
	CUStateEvent* _eventCausingTransition;
	/*^block*/id _internalActionHandler;

}

@property (nonatomic,retain) CUStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) CUStateEvent * eventCausingTransition;              //@synthesize eventCausingTransition=_eventCausingTransition - In the implementation block
@property (nonatomic,copy) id internalActionHandler;                             //@synthesize internalActionHandler=_internalActionHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id enterStateHandler;                                 //@synthesize enterStateHandler=_enterStateHandler - In the implementation block
@property (nonatomic,copy) id exitStateHandler;                                  //@synthesize exitStateHandler=_exitStateHandler - In the implementation block
+(id)nameFromStateEvent:(long long)arg1 ;
+(id)nameFromState:(long long)arg1 ;
+(id)nameFromFunction:(long long)arg1 ;
+(id)nameFromResponseAction:(long long)arg1 ;
-(void)start;
-(id)actionHandler;
-(void)setStateMachine:(CUStateMachine *)arg1 ;
-(/*^block*/id)eventHandlerForState:(id)arg1 withEnterBlock:(/*^block*/id)arg2 exitBlock:(/*^block*/id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)transitionToState:(id)arg1 withEvent:(id)arg2 ;
-(void)dispatchEvent:(long long)arg1 userInfo:(id)arg2 ;
-(void)setInternalActionHandler:(id)arg1 ;
-(id)internalActionHandler;
-(void)setEventCausingTransition:(CUStateEvent *)arg1 ;
-(CUStateEvent *)eventCausingTransition;
-(id)enterStateHandler;
-(id)exitStateHandler;
-(void)setActionHandler:(id)arg1 ;
-(CUStateMachine *)stateMachine;
-(void)dispatchEvent:(long long)arg1 ;
-(id)createStateMachine;
-(BOOL)canPerformFunction:(long long)arg1 ;
-(id)initWithActionHandler:(/*^block*/id)arg1 ;
-(void)setEnterStateHandler:(id)arg1 ;
-(void)setExitStateHandler:(id)arg1 ;
-(void)dealloc;
@end

