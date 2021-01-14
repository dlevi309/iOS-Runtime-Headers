/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _needsHistoricalData;
	NSUUID* _workoutBuilderIdentifier;

}

@property (assign,nonatomic) BOOL needsHistoricalData;                     //@synthesize needsHistoricalData=_needsHistoricalData - In the implementation block
@property (nonatomic,copy) NSUUID * workoutBuilderIdentifier;              //@synthesize workoutBuilderIdentifier=_workoutBuilderIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNeedsHistoricalData:(BOOL)arg1 ;
-(void)setWorkoutBuilderIdentifier:(NSUUID *)arg1 ;
-(BOOL)needsHistoricalData;
-(NSUUID *)workoutBuilderIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

