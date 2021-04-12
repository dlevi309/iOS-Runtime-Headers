/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKWorkoutRoute;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration {

	HKWorkoutRoute* _workoutRoute;

}

@property (nonatomic,retain) HKWorkoutRoute * workoutRoute;              //@synthesize workoutRoute=_workoutRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkoutRoute:(HKWorkoutRoute *)arg1 ;
-(HKWorkoutRoute *)workoutRoute;
@end

