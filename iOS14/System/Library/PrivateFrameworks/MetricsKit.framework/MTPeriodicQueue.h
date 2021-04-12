/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface MTPeriodicQueue : NSObject {

	BOOL _flushTimerEnabled;
	double _flushTimeInterval;
	long long _maximumBatchSize;
	/*^block*/id _flushHandler;
	NSObject*<OS_dispatch_queue> _flushQueue;
	NSMutableArray* _mutableObjects;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) NSMutableArray * mutableObjects;                                //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                            //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double flushTimeInterval;                                       //@synthesize flushTimeInterval=_flushTimeInterval - In the implementation block
@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
@property (assign,nonatomic) long long maximumBatchSize;                                     //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,copy) id flushHandler;                                                  //@synthesize flushHandler=_flushHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> flushQueue;                        //@synthesize flushQueue=_flushQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMutableObjects:(NSMutableArray *)arg1 ;
-(void)insertObject:(id)arg1 ;
-(NSMutableArray *)mutableObjects;
-(long long)maximumBatchSize;
-(void)appendObject:(id)arg1 ;
-(void)setFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)flushQueue;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isFlushTimerEnabled;
-(void)setMaximumBatchSize:(long long)arg1 ;
-(void)setFlushTimeInterval:(double)arg1 ;
-(void)setFlushHandler:(id)arg1 ;
-(void)insertObjects:(id)arg1 ;
-(void)flushObjects;
-(double)flushTimeInterval;
-(void)_beginFlushTimer;
-(void)__beginFlushTimer;
-(void)__endFlushTimer;
-(void)__flushObjects;
-(id)__clearObjects;
-(void)__flushObjects:(id)arg1 ;
-(void)__flushObjects:(id)arg1 maximumBatchSize:(long long)arg2 flushHandler:(/*^block*/id)arg3 ;
-(void)_endFlushTimer;
-(id)flushHandler;
@end

