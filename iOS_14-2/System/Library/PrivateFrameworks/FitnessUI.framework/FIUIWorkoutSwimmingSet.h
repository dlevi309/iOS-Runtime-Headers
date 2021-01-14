/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class NSDate, HKQuantity;

@interface FIUIWorkoutSwimmingSet : NSObject {

	NSDate* _startDate;
	NSDate* _movementEndDate;
	NSDate* _endDate;
	long long _dominantStrokeStyle;
	long long _strokeCount;
	HKQuantity* _distance;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * movementEndDate;                   //@synthesize movementEndDate=_movementEndDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long dominantStrokeStyle;              //@synthesize dominantStrokeStyle=_dominantStrokeStyle - In the implementation block
@property (assign,nonatomic) long long strokeCount;                      //@synthesize strokeCount=_strokeCount - In the implementation block
@property (nonatomic,retain) HKQuantity * distance;                      //@synthesize distance=_distance - In the implementation block
+(id)_decimalNumberFormatter;
-(NSDate *)endDate;
-(void)setDistance:(HKQuantity *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantity *)distance;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(long long)strokeCount;
-(double)_activeDuration;
-(void)setStrokeCount:(long long)arg1 ;
-(id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2 ;
-(NSDate *)movementEndDate;
-(double)_restingDuration;
-(long long)dominantStrokeStyle;
-(id)formattedActiveDurationWithFormattingManager:(id)arg1 ;
-(id)formattedRestDurationWithFormattingManager:(id)arg1 ;
-(id)formattedDistanceValueWithFormattingManager:(id)arg1 ;
-(id)formattedStrokeCountUsingFormatType:(long long)arg1 formattingManager:(id)arg2 ;
-(id)formattedDominantStrokeStyle;
-(void)setMovementEndDate:(NSDate *)arg1 ;
-(void)setDominantStrokeStyle:(long long)arg1 ;
@end

