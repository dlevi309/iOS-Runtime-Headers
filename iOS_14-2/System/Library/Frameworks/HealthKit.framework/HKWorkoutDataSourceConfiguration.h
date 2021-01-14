/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)sampleTypesToCollect;
-(NSSet *)eventTypesToCollect;
-(NSDictionary *)filtersBySampleType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4 ;
@end

