/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class NSDate, HKQuantity;

@interface FIUIWorkoutSegment : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _activeEnergy;
	HKQuantity* _distance;
	double _elapsedTime;

}

@property (nonatomic,copy) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergy;              //@synthesize activeEnergy=_activeEnergy - In the implementation block
@property (nonatomic,retain) HKQuantity * distance;                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)_decimalNumberFormatter;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDistance:(HKQuantity *)arg1 ;
-(HKQuantity *)distance;
-(double)elapsedTime;
-(void)setElapsedTime:(double)arg1 ;
-(HKQuantity *)activeEnergy;
-(id)formattedActiveEnergyValueForUnit:(id)arg1 ;
-(id)formattedDistanceValueForUnit:(id)arg1 ;
-(id)formattedDurationValueWithFormattingManager:(id)arg1 ;
-(id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2 ;
-(void)setActiveEnergy:(HKQuantity *)arg1 ;
@end

