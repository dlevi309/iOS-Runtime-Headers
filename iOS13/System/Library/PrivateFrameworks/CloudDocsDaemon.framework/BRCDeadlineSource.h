/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue;
@class BRCDeadlineScheduler, NSString, NSObject;

@interface BRCDeadlineSource : NSObject {

	long long _deadline;
	BRCDeadlineScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSString* _name;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)resume;
-(void)signal;
-(void)suspend;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithScheduler:(id)arg1 name:(id)arg2 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(BOOL)willRunEvenHandler;
-(void)runEventHandler;
@end

