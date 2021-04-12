/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)date;
-(void)resume;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)suspend;
-(void)scheduleBlock:(/*^block*/id)arg1 ;
@end

