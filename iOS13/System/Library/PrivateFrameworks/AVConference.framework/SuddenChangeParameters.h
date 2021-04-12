/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface SuddenChangeParameters : NSObject {

	int margin;
	int minSamplesCount;
	int minMarginRequired;
	double percentage;
	double durationThresholdUpward;
	double durationThresholdDownward;

}

@property (assign,nonatomic) int margin; 
@property (assign,nonatomic) int minSamplesCount; 
@property (assign,nonatomic) int minMarginRequired; 
@property (assign,nonatomic) double percentage; 
@property (assign,nonatomic) double durationThresholdUpward; 
@property (assign,nonatomic) double durationThresholdDownward; 
-(double)percentage;
-(void)setMargin:(int)arg1 ;
-(int)margin;
-(int)minSamplesCount;
-(void)setMinSamplesCount:(int)arg1 ;
-(int)minMarginRequired;
-(void)setMinMarginRequired:(int)arg1 ;
-(void)setPercentage:(double)arg1 ;
-(double)durationThresholdUpward;
-(void)setDurationThresholdUpward:(double)arg1 ;
-(double)durationThresholdDownward;
-(void)setDurationThresholdDownward:(double)arg1 ;
@end

