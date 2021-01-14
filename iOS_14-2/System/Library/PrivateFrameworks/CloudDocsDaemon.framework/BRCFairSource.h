/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_workloop;
@class NSString, BRCFairScheduler, NSObject;

@interface BRCFairSource : NSObject {

	unsigned long long _schedulerBitIndex;
	NSString* _name;
	BRCFairScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSObject*<OS_dispatch_workloop> _workloop;
	/*^block*/id _eventHandler;

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
-(id)initWithName:(id)arg1 scheduler:(id)arg2 ;
-(void)_runEventHandler;
@end

