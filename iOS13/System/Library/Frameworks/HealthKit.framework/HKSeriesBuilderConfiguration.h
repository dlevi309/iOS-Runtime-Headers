/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2 ;
-(NSUUID *)workoutBuilderID;
@end

