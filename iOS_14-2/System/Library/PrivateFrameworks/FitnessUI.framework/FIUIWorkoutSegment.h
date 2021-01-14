/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)setDistance:(HKQuantity *)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantity *)distance;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)elapsedTime;
-(id)description;
-(HKQuantity *)activeEnergy;
-(id)formattedActiveEnergyValueForUnit:(id)arg1 ;
-(id)formattedDistanceValueForUnit:(id)arg1 ;
-(id)formattedDurationValueWithFormattingManager:(id)arg1 ;
-(id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2 ;
-(void)setActiveEnergy:(HKQuantity *)arg1 ;
@end

