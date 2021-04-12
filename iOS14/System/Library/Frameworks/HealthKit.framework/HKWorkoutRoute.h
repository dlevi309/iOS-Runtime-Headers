/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSeriesSample.h>

@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample {

	HDCodableLocationSeries* __codableWorkoutRoute;

}

@property (setter=_setCodableWorkoutRoute:,nonatomic,retain) HDCodableLocationSeries * _codableWorkoutRoute;              //@synthesize _codableWorkoutRoute=__codableWorkoutRoute - In the implementation block
+(BOOL)_isConcreteObjectClass;
+(id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(BOOL)_isSmoothed;
-(id)_validateSample;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(id)_valueDescription;
-(HDCodableLocationSeries *)_codableWorkoutRoute;
-(void)_setCodableWorkoutRoute:(id)arg1 ;
@end

