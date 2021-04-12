/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {

	ATXCoreDuetContextHelper* _contextHelper;
	ATXTimeBucketedRateLimiter* _rateLimiter;

}
+(id)sharedInstance;
-(id)init;
-(void)train;
-(id)addNowPlayingEventsToAppLaunches:(id)arg1 ;
-(id)fetchAppLaunchEventsForTraining;
-(id)generateAppLaunchCountedSetFromAppLaunches:(id)arg1 ;
@end

