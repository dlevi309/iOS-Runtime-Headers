/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler> {

	unsigned long long _clock;
	unsigned long long _nextSchedulableTick;
	unsigned long long _stopTime;
	CNQueue* _queue;
	BOOL _isStarted;
	BOOL _isPerforming;

}

@property (nonatomic,readonly) unsigned long long nextSchedulableTick;              //@synthesize nextSchedulableTick=_nextSchedulableTick - In the implementation block
@property (nonatomic,readonly) unsigned long long stopTime;                         //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL isStarted;                                      //@synthesize isStarted=_isStarted - In the implementation block
@property (nonatomic,readonly) BOOL isPerforming;                                   //@synthesize isPerforming=_isPerforming - In the implementation block
@property (readonly) unsigned long long clock;                                      //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2 ;
+(id)providerWithScheduler:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(CNQueue *)queue;
-(BOOL)isStarted;
-(void)stop;
-(void)start;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_nextSchedulableTick;
-(id)_scheduleBlock:(/*^block*/id)arg1 atTime:(unsigned long long)arg2 ;
-(BOOL)_performJobs;
-(unsigned long long)clock;
-(void)advanceTo:(unsigned long long)arg1 ;
-(unsigned long long)stopTime;
-(void)advanceBy:(unsigned long long)arg1 ;
-(BOOL)hasJobsScheduled;
-(unsigned long long)nextSchedulableTick;
-(BOOL)isPerforming;
@end

