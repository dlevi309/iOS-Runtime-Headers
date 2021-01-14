/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_workloop;
@class BRCDeadlineScheduler, NSString, NSObject;

@interface BRCDeadlineSource : NSObject {

	long long _deadline;
	BRCDeadlineScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSString* _name;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_workloop> _workloop;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,copy) id eventHandler;                                         //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)suspend;
-(id)description;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(void)signal;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)cancel;
-(void)resume;
-(id)initWithScheduler:(id)arg1 name:(id)arg2 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(BOOL)willRunEvenHandler;
-(void)runEventHandler;
@end

