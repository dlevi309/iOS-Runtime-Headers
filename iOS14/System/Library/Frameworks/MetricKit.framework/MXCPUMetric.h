/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXCPUMetric : MXMetric {

	NSMeasurement* _cumulativeCPUTime;
	NSMeasurement* _cumulativeCPUInstructions;

}

@property (readonly) NSMeasurement * cumulativeCPUTime;                      //@synthesize cumulativeCPUTime=_cumulativeCPUTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeCPUInstructions;              //@synthesize cumulativeCPUInstructions=_cumulativeCPUInstructions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)cumulativeCPUTime;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg1 withCumulativeCPUInstructions:(id)arg2 ;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg1 ;
-(id)initWithCumulativeCPUTimeMeasurement:(id)arg1 withCumulativeCPUInstructions:(id)arg2 withCumulativeForegroundCPUTimeMeasurement:(id)arg3 withCumulativeBackgroundCPUTimeMeasurement:(id)arg4 ;
-(NSMeasurement *)cumulativeCPUInstructions;
@end

