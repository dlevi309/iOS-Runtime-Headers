/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement, MXAverage;

@interface MXMemoryMetric : MXMetric {

	NSMeasurement* _peakMemoryUsage;
	MXAverage* _averageSuspendedMemory;

}

@property (readonly) NSMeasurement * peakMemoryUsage;                 //@synthesize peakMemoryUsage=_peakMemoryUsage - In the implementation block
@property (readonly) MXAverage * averageSuspendedMemory;              //@synthesize averageSuspendedMemory=_averageSuspendedMemory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2 ;
-(NSMeasurement *)peakMemoryUsage;
-(MXAverage *)averageSuspendedMemory;
@end

