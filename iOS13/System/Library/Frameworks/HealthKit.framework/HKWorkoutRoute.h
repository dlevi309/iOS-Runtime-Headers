/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSeriesSample.h>

@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample {

	HDCodableLocationSeries* __codableWorkoutRoute;

}

@property (setter=_setCodableWorkoutRoute:,nonatomic,retain) HDCodableLocationSeries * _codableWorkoutRoute;              //@synthesize _codableWorkoutRoute=__codableWorkoutRoute - In the implementation block
+(id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2 ;
-(id)_valueDescription;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)_validateSample;
-(BOOL)_isSmoothed;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(HDCodableLocationSeries *)_codableWorkoutRoute;
-(void)_setCodableWorkoutRoute:(id)arg1 ;
@end

