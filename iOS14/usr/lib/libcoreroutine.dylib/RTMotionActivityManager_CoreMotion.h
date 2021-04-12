/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMotionActivityManager.h>

@protocol OS_dispatch_source;
@class NSMutableArray, RTMotionActivity, CMMotionActivityManager, NSOperationQueue, NSObject, NSMutableDictionary, NSDate;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager {

	BOOL _dominantMotionActivityBootstrapped;
	BOOL _motionActivityAvailable;
	NSMutableArray* _motionActivities;
	RTMotionActivity* _dominantMotionActivity;
	unsigned long long _settledState;
	CMMotionActivityManager* _motionActivityManager;
	NSOperationQueue* _operationQueue;
	long long _interestedInActivity;
	NSObject*<OS_dispatch_source> _dominantMotionActivityTimer;
	unsigned long long _vehicleConnectedState;
	NSMutableDictionary* _activityAlarms;
	NSDate* _lastQueryForMotionActivity;

}

@property (nonatomic,retain) CMMotionActivityManager * motionActivityManager;                        //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (assign,nonatomic) BOOL motionActivityAvailable;                                           //@synthesize motionActivityAvailable=_motionActivityAvailable - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long interestedInActivity;                                         //@synthesize interestedInActivity=_interestedInActivity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dominantMotionActivityTimer;              //@synthesize dominantMotionActivityTimer=_dominantMotionActivityTimer - In the implementation block
@property (assign,nonatomic) unsigned long long vehicleConnectedState;                               //@synthesize vehicleConnectedState=_vehicleConnectedState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityAlarms;                                   //@synthesize activityAlarms=_activityAlarms - In the implementation block
@property (nonatomic,retain) NSDate * lastQueryForMotionActivity;                                    //@synthesize lastQueryForMotionActivity=_lastQueryForMotionActivity - In the implementation block
@property (assign,nonatomic) BOOL dominantMotionActivityBootstrapped;                                //@synthesize dominantMotionActivityBootstrapped=_dominantMotionActivityBootstrapped - In the implementation block
@property (nonatomic,retain) NSMutableArray * motionActivities;                                      //@synthesize motionActivities=_motionActivities - In the implementation block
@property (nonatomic,retain) RTMotionActivity * dominantMotionActivity;                              //@synthesize dominantMotionActivity=_dominantMotionActivity - In the implementation block
@property (assign,nonatomic) unsigned long long settledState;                                        //@synthesize settledState=_settledState - In the implementation block
+(double)durationForTrigger:(unsigned)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setMotionActivityManager:(CMMotionActivityManager *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithPlatform:(id)arg1 ;
-(void)_shutdown;
-(NSOperationQueue *)operationQueue;
-(CMMotionActivityManager *)motionActivityManager;
-(void)setActivityAlarms:(NSMutableDictionary *)arg1 ;
-(void)setLastQueryForMotionActivity:(NSDate *)arg1 ;
-(void)setInterestedInActivity:(long long)arg1 ;
-(void)onActivity:(id)arg1 ;
-(NSDate *)lastQueryForMotionActivity;
-(void)setDominantMotionActivityTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_processSettledState;
-(void)_bootstrapDominantActivityWithMotionActivites:(id)arg1 ;
-(void)_processDominantActivity;
-(void)_resubscribeForActivityAlarms;
-(void)_onVehicleDisconnectedNotification;
-(void)_onActivity:(id)arg1 ;
-(void)setDominantMotionActivityBootstrapped:(BOOL)arg1 ;
-(void)_fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSettledState:(unsigned long long)arg1 ;
-(unsigned long long)vehicleConnectedState;
-(BOOL)motionActivityAvailable;
-(void)_fetchPredominantMotionActivityTypeFromStartDate:(id)arg1 toEndDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)settledState;
-(void)onVehicleDisconnectedNotification;
-(BOOL)dominantMotionActivityBootstrapped;
-(void)_onVehicleConnectedNotification;
-(long long)interestedInActivity;
-(void)_invalidateActivityAlarms;
-(void)_invalidateAlarm:(id)arg1 ;
-(id)_rtAlarmForTrigger:(unsigned)arg1 ;
-(void)setVehicleConnectedState:(unsigned long long)arg1 ;
-(void)setMotionActivityAvailable:(BOOL)arg1 ;
-(NSMutableDictionary *)activityAlarms;
-(NSMutableArray *)motionActivities;
-(void)_fetchMotionActivitiesIfNeeded;
-(NSObject*<OS_dispatch_source>)dominantMotionActivityTimer;
-(void)setDominantMotionActivity:(RTMotionActivity *)arg1 ;
-(void)_processActivityAlarm:(id)arg1 error:(id)arg2 ;
-(void)setMotionActivities:(NSMutableArray *)arg1 ;
-(void)onVehicleConnectedNotification;
-(RTMotionActivity *)dominantMotionActivity;
-(void)_subscribeForMotionAlarmTypes:(const unsigned*)arg1 alarmsCount:(unsigned long long)arg2 ;
-(void)onVehicleExitNotification;
@end

