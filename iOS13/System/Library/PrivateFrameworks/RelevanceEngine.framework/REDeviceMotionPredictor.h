/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(void)pause;
-(void)resume;
-(unsigned long long)motionType;
-(CMMotionActivityManager *)activityManager;
-(BOOL)isStationary;
-(void)setStationary:(BOOL)arg1 ;
-(void)setMotionType:(unsigned long long)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_updateWithActivity:(id)arg1 ;
@end

