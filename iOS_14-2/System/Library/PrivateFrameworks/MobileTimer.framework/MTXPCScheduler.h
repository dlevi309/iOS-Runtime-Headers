/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSchedulingDelegate.h>

@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {

	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)xpcSchedulerWithEvent:(id)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 performImmediately:(BOOL)arg3 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)unscheduleActivity;
-(void)unscheduleTimer;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 ;
-(void)scheduleTimerForSeconds:(double)arg1 ;
@end

