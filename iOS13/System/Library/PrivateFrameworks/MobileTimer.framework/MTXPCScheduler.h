/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSchedulingDelegate.h>

@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {

	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)xpcSchedulerWithEvent:(id)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)scheduleTimerForSeconds:(double)arg1 ;
-(void)unscheduleTimer;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 performImmediately:(BOOL)arg3 ;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 ;
-(void)unscheduleActivity;
@end

