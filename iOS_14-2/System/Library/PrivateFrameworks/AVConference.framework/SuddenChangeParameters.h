/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface SuddenChangeParameters : NSObject {

	int margin;
	int minSamplesCountFastBandwidthEstimation;
	int minSamplesCount;
	int minMarginRequired;
	double percentage;
	double durationThresholdUpward;
	double durationThresholdDownward;

}

@property (assign,nonatomic) int margin; 
@property (assign,nonatomic) int minSamplesCount; 
@property (assign,nonatomic) int minSamplesCountFastBandwidthEstimation; 
@property (assign,nonatomic) int minMarginRequired; 
@property (assign,nonatomic) double percentage; 
@property (assign,nonatomic) double durationThresholdUpward; 
@property (assign,nonatomic) double durationThresholdDownward; 
-(void)setMargin:(int)arg1 ;
-(int)margin;
-(double)percentage;
-(int)minSamplesCount;
-(void)setMinSamplesCount:(int)arg1 ;
-(int)minSamplesCountFastBandwidthEstimation;
-(void)setMinSamplesCountFastBandwidthEstimation:(int)arg1 ;
-(int)minMarginRequired;
-(void)setMinMarginRequired:(int)arg1 ;
-(void)setPercentage:(double)arg1 ;
-(double)durationThresholdUpward;
-(void)setDurationThresholdUpward:(double)arg1 ;
-(double)durationThresholdDownward;
-(void)setDurationThresholdDownward:(double)arg1 ;
@end

