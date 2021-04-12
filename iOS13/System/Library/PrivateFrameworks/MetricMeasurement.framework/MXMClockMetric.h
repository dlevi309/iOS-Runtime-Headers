/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMMetric.h>

@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {

	MXMSampleTag* _tag;

}

@property (nonatomic,readonly) MXMInstrument * instrument; 
+(BOOL)supportsSecureCoding;
+(id)absoluteTime;
+(id)continuousTime;
+(id)allTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(id)_unit;
-(BOOL)_shouldConstructProbe;
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2 ;
-(id)_unitWithTag:(id)arg1 ;
@end

