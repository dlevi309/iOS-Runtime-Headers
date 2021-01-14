/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPActivityScheduler.h>

@protocol NAScheduler;
@class NSString;

@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler> {

	NSString* _eventName;
	id<NAScheduler> _callbackScheduler;

}

@property (nonatomic,copy,readonly) NSString * eventName;                      //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler;              //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)eventName;
-(id<NAScheduler>)callbackScheduler;
-(void)unschedule;
-(id)initWithEventName:(id)arg1 callbackScheduler:(id)arg2 ;
-(void)scheduleActivity:(id)arg1 options:(unsigned long long)arg2 activityHandler:(/*^block*/id)arg3 ;
-(void)scheduleActivityWithCriteria:(id)arg1 options:(unsigned long long)arg2 activityHandler:(/*^block*/id)arg3 ;
@end

