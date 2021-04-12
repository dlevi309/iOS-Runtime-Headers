/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedsHistoricalData:(BOOL)arg1 ;
-(void)setWorkoutBuilderIdentifier:(NSUUID *)arg1 ;
-(BOOL)needsHistoricalData;
-(NSUUID *)workoutBuilderIdentifier;
@end

