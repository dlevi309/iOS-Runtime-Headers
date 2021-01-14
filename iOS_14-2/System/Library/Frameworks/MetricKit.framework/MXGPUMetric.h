/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXGPUMetric : MXMetric {

	NSMeasurement* _cumulativeGPUTime;

}

@property (readonly) NSMeasurement * cumulativeGPUTime;              //@synthesize cumulativeGPUTime=_cumulativeGPUTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCumulativeGPUTimeMeasurement:(id)arg1 ;
-(NSMeasurement *)cumulativeGPUTime;
@end

