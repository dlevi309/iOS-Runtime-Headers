/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class RTPlatform;

@interface RTMotionActivityManager : RTService {

	RTPlatform* _platform;

}

@property (nonatomic,readonly) RTPlatform * platform;              //@synthesize platform=_platform - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)motionSettledStateToString:(unsigned long long)arg1 ;
+(id)motionActivityVehicleConnectedStateToString:(unsigned long long)arg1 ;
+(void)removeActivities:(id)arg1 stoppedBeforeDate:(id)arg2 ;
+(double)ratioOfMotionActivityType:(unsigned long long)arg1 forActivities:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)init;
-(RTPlatform *)platform;
-(id)initWithPlatform:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredominantMotionActivityTypeFromStartDate:(id)arg1 toEndDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPredominantMotionActivityTypeFromStartDate:(id)arg1 toEndDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end

