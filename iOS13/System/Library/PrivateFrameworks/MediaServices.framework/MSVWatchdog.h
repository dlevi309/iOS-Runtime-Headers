/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSOperationQueue, NSObject, NSRunLoop;

@interface MSVWatchdog : NSObject {

	BOOL _scheduled;
	BOOL _running;
	double _interval;
	double _timeoutInterval;
	/*^block*/id _timeoutCallback;
	NSString* _mode;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSRunLoop* _runLoop;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) BOOL scheduled;                                          //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) BOOL running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                  //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutCallback;                                        //@synthesize timeoutCallback=_timeoutCallback - In the implementation block
@property (nonatomic,retain) NSString * mode;                                         //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setMode:(NSString *)arg1 ;
-(void)resume;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(NSRunLoop *)runLoop;
-(void)suspend;
-(NSString *)mode;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)running;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(BOOL)scheduled;
-(void)setRunning:(BOOL)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
-(void)setScheduled:(BOOL)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)scheduleInOperationQueue:(id)arg1 ;
-(void)scheduleInDispatchQueue:(id)arg1 ;
-(void)setTimeoutCallback:(id)arg1 ;
@end

