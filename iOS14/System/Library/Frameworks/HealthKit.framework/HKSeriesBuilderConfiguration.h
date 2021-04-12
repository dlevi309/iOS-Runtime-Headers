/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration {

	HKDevice* _device;
	NSUUID* _workoutBuilderID;

}

@property (nonatomic,copy,readonly) HKDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * workoutBuilderID;              //@synthesize workoutBuilderID=_workoutBuilderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)workoutBuilderID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

