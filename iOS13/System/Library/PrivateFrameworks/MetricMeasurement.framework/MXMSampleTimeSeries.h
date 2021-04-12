/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet {

	MXMSampleTimeSeries* _time;

}

@property (nonatomic,retain,readonly) MXMSampleTimeSeries * timeIndex; 
-(id)init;
-(MXMSampleTimeSeries *)timeIndex;
-(void)_appendAbsoluteTime:(unsigned long long)arg1 ;
-(id)initWithAbsoluteTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithTimeSeries:(double*)arg1 unit:(id)arg2 length:(unsigned long long)arg3 ;
-(id)initWithContinuousTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
@end

