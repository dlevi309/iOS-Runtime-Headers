/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REDeviceMotionPredictorProperties.h>

@class CMMotionActivityManager, REUpNextScheduler, CMMotionActivity;

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties> {

	CMMotionActivityManager* _activityManager;
	REUpNextScheduler* _scheduler;
	CMMotionActivity* _lastActivity;
	BOOL _stationary;
	unsigned long long _motionType;

}

@property (getter=isStationary) BOOL stationary;                                       //@synthesize stationary=_stationary - In the implementation block
@property (assign) unsigned long long motionType;                                      //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) CMMotionActivityManager * activityManager; 
+(id)supportedFeatures;
-(CMMotionActivityManager *)activityManager;
-(BOOL)isStationary;
-(void)setStationary:(BOOL)arg1 ;
-(void)pause;
-(unsigned long long)motionType;
-(void)setMotionType:(unsigned long long)arg1 ;
-(id)_init;
-(void)resume;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_updateWithActivity:(id)arg1 ;
@end

