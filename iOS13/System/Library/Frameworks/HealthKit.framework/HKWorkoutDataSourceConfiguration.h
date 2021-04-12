/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSSet, NSDictionary;

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration {

	HKWorkoutConfiguration* _workoutConfiguration;
	NSSet* _sampleTypesToCollect;
	NSDictionary* _filtersBySampleType;
	NSSet* _eventTypesToCollect;

}

@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (copy,readonly) NSSet * sampleTypesToCollect;                               //@synthesize sampleTypesToCollect=_sampleTypesToCollect - In the implementation block
@property (copy,readonly) NSDictionary * filtersBySampleType;                         //@synthesize filtersBySampleType=_filtersBySampleType - In the implementation block
@property (copy,readonly) NSSet * eventTypesToCollect;                                //@synthesize eventTypesToCollect=_eventTypesToCollect - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4 ;
-(NSSet *)sampleTypesToCollect;
-(NSDictionary *)filtersBySampleType;
-(NSSet *)eventTypesToCollect;
@end

