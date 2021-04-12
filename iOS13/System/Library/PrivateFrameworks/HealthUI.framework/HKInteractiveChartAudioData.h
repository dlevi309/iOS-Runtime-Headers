/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData> {

	double _averageLEQ;
	double _duration;
	HKInteractiveChartAudioData* _overviewData;

}

@property (assign,nonatomic) double averageLEQ;                                       //@synthesize averageLEQ=_averageLEQ - In the implementation block
@property (assign,nonatomic) double duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) HKInteractiveChartAudioData * overviewData;              //@synthesize overviewData=_overviewData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)averageLEQ;
-(HKInteractiveChartAudioData *)overviewData;
-(void)setAverageLEQ:(double)arg1 ;
-(void)setOverviewData:(HKInteractiveChartAudioData *)arg1 ;
-(id)_durationString:(double)arg1 ;
@end

