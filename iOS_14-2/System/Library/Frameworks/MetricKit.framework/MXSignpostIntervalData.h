/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXHistogram, NSMeasurement, MXAverage, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject <NSSecureCoding> {

	MXHistogram* _histogrammedSignpostDuration;
	NSMeasurement* _cumulativeCPUTime;
	MXAverage* _averageMemory;
	NSMeasurement* _cumulativeLogicalWrites;
	NSMeasurementFormatter* _measurementFormatter;
	NSMeasurement* _peakMemory;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
@property (readonly) NSMeasurement * peakMemory;                               //@synthesize peakMemory=_peakMemory - In the implementation block
@property (readonly) MXHistogram * histogrammedSignpostDuration;               //@synthesize histogrammedSignpostDuration=_histogrammedSignpostDuration - In the implementation block
@property (readonly) NSMeasurement * cumulativeCPUTime;                        //@synthesize cumulativeCPUTime=_cumulativeCPUTime - In the implementation block
@property (readonly) MXAverage * averageMemory;                                //@synthesize averageMemory=_averageMemory - In the implementation block
@property (readonly) NSMeasurement * cumulativeLogicalWrites;                  //@synthesize cumulativeLogicalWrites=_cumulativeLogicalWrites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)cumulativeCPUTime;
-(NSMeasurement *)cumulativeLogicalWrites;
-(id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withPeakMemory:(id)arg3 withAverageMemory:(id)arg4 withCumulativeLogicalWrites:(id)arg5 ;
-(NSMeasurementFormatter *)measurementFormatter;
-(id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4 ;
-(MXHistogram *)histogrammedSignpostDuration;
-(MXAverage *)averageMemory;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
-(NSMeasurement *)peakMemory;
@end

