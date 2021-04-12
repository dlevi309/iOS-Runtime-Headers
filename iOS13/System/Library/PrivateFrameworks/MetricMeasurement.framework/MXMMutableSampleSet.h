/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMMutableSampleSet : MXMSampleSet
-(void)appendSet:(id)arg1 ;
-(void)appendAttribute:(id)arg1 ;
-(void)appendSample:(id)arg1 ;
-(void)appendIntValue:(int)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendIntegerValue:(long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendUnsignedIntValue:(unsigned)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendUnsignedIntegerValue:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2 ;
-(void)appendFloatValue:(float)arg1 timestamp:(unsigned long long)arg2 ;
@end

