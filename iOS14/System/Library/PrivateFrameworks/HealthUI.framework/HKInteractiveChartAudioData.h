/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(NSString *)description;
-(double)duration;
-(double)averageLEQ;
-(HKInteractiveChartAudioData *)overviewData;
-(void)setAverageLEQ:(double)arg1 ;
-(void)setOverviewData:(HKInteractiveChartAudioData *)arg1 ;
-(id)_durationString:(double)arg1 ;
@end

