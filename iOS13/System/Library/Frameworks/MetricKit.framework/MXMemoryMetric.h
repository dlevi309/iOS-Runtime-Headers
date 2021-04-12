/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2 ;
-(NSMeasurement *)peakMemoryUsage;
-(MXAverage *)averageSuspendedMemory;
@end

