/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSDate;

@interface RCBlockScheduler : NSObject {

	NSMutableArray* _blocks;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _schedulerQueue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _start;
	/*^block*/id _schedulerBlock;
	BOOL _suspended;
	double _interval;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _date;

}

@property (assign,nonatomic) double interval;                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
-(void)setInterval:(double)arg1 ;
-(void)suspend;
-(id)init;
-(double)interval;
-(void)scheduleBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)date;
-(void)resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

