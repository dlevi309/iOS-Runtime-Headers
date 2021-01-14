/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface CSIndexingQueue : NSObject {

	long long _mode;
	double _idleTime;
	double _idleTimeLeeway;
	unsigned long long _maximumBatchSize;
	NSMutableDictionary* _queuedItems;
	NSObject*<OS_dispatch_queue> _coalescingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	/*^block*/id _notifyBlock;

}

@property (assign) double idleTime;                                            //@synthesize idleTime=_idleTime - In the implementation block
@property (assign) double idleTimeLeeway;                                      //@synthesize idleTimeLeeway=_idleTimeLeeway - In the implementation block
@property (assign) unsigned long long maximumBatchSize;                        //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (retain) NSMutableDictionary * queuedItems;                          //@synthesize queuedItems=_queuedItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> coalescingQueue;               //@synthesize coalescingQueue=_coalescingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> coalescingTimer;              //@synthesize coalescingTimer=_coalescingTimer - In the implementation block
@property (assign) long long mode;                                             //@synthesize mode=_mode - In the implementation block
@property (copy) id notifyBlock;                                               //@synthesize notifyBlock=_notifyBlock - In the implementation block
-(void)flush;
-(long long)mode;
-(void)setQueuedItems:(NSMutableDictionary *)arg1 ;
-(double)idleTimeLeeway;
-(void)_flushWithAppResigned:(BOOL)arg1 forced:(BOOL)arg2 ;
-(void)setNotifyBlock:(id)arg1 ;
-(id)initWithMode:(long long)arg1 notifyBlock:(/*^block*/id)arg2 ;
-(void)setMode:(long long)arg1 ;
-(void)queueItems:(id)arg1 ;
-(void)setIdleTimeLeeway:(double)arg1 ;
-(id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(/*^block*/id)arg5 ;
-(void)setCoalescingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)coalescingQueue;
-(NSObject*<OS_dispatch_source>)coalescingTimer;
-(void)_applicationWillResign:(id)arg1 ;
-(void)setCoalescingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)queuedItems;
-(void)queueItem:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(double)idleTime;
-(void)_queueItems:(id)arg1 ;
-(void)dealloc;
-(void)setIdleTime:(double)arg1 ;
-(id)notifyBlock;
-(void)setMaximumBatchSize:(unsigned long long)arg1 ;
@end

