/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICSelectorDelayer : NSObject {

	BOOL _waitToFireUntilRequestsStop;
	BOOL _callOnMainThread;
	id _target;
	SEL _selector;
	double _delay;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic,__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL waitToFireUntilRequestsStop;                       //@synthesize waitToFireUntilRequestsStop=_waitToFireUntilRequestsStop - In the implementation block
@property (assign,nonatomic) BOOL callOnMainThread;                                  //@synthesize callOnMainThread=_callOnMainThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign) double delay;                                                     //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) BOOL isScheduledToFire; 
-(void)setTarget:(id)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(SEL)selector;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setSelector:(SEL)arg1 ;
-(BOOL)callOnMainThread;
-(void)setDelay:(double)arg1 ;
-(void)fireImmediately;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isScheduledToFire;
-(double)delay;
-(void)_cancelFireRequests;
-(void)setWaitToFireUntilRequestsStop:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(BOOL)arg4 callOnMainThread:(BOOL)arg5 ;
-(void)callTargetSelector;
-(id)target;
-(BOOL)waitToFireUntilRequestsStop;
-(void)requestFire;
-(void)cancelPreviousFireRequests;
-(void)dealloc;
-(void)setCallOnMainThread:(BOOL)arg1 ;
@end

