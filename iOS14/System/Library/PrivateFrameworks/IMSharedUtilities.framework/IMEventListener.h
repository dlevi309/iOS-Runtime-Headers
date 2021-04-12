/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface IMEventListener : NSObject {

	BOOL _willRepeat;
	double _timerStart;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	double _timeListeningStarted;
	double _timeListeningStopped;
	double _timeLastEventReceived;
	double _timeout;
	unsigned long long _eventCount;
	id _target;
	/*^block*/id _completionBlock;
	/*^block*/id _willInvokeCompletion;
	/*^block*/id _didInvokeCompletion;

}

@property (assign,nonatomic) double timerStart;                                         //@synthesize timerStart=_timerStart - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (__weak) id target;                                                           //@synthesize target=_target - In the implementation block
@property (copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id willInvokeCompletion;                                               //@synthesize willInvokeCompletion=_willInvokeCompletion - In the implementation block
@property (copy) id didInvokeCompletion;                                                //@synthesize didInvokeCompletion=_didInvokeCompletion - In the implementation block
@property (assign) double timeout;                                                      //@synthesize timeout=_timeout - In the implementation block
@property (getter=isListening,readonly) BOOL listening; 
@property (readonly) double timeListeningStarted;                                       //@synthesize timeListeningStarted=_timeListeningStarted - In the implementation block
@property (readonly) double timeListeningStopped;                                       //@synthesize timeListeningStopped=_timeListeningStopped - In the implementation block
@property (readonly) double timeLastEventReceived;                                      //@synthesize timeLastEventReceived=_timeLastEventReceived - In the implementation block
@property (readonly) double elapsedWaitingTime; 
@property (readonly) unsigned long long eventCount;                                     //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL willRepeat;                                           //@synthesize willRepeat=_willRepeat - In the implementation block
+(id)allListeners;
+(id)_mutableListenerDictionary;
+(id)eventListener;
+(id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(BOOL)isListening;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)_startListening;
-(void)reset;
-(double)timerStart;
-(void)_cancelTimeoutTimer;
-(id)willInvokeCompletion;
-(id)createResult:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(id)didInvokeCompletion;
-(void)_invokeCompletion:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)willStartListening;
-(void)_addToListeners;
-(void)_startTimeoutTimerIfNeeded;
-(void)_removeFromListeners;
-(void)willStopListening;
-(void)_handleTimeout:(id)arg1 ;
-(void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_reset;
-(id)target;
-(void)_dispatchStartEventBlock:(/*^block*/id)arg1 ;
-(void)waitForCompletion;
-(double)timeListeningStarted;
-(void)setTimerStart:(double)arg1 ;
-(void)startListeningForEventTarget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)timeListeningStopped;
-(double)timeLastEventReceived;
-(double)elapsedWaitingTime;
-(void)_didReceiveEvent:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)setWillInvokeCompletion:(id)arg1 ;
-(void)setDidInvokeCompletion:(id)arg1 ;
-(BOOL)willRepeat;
-(void)setWillRepeat:(BOOL)arg1 ;
-(unsigned long long)eventCount;
-(void)willReset;
-(void)_stopListening;
@end

