/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMSampleData.h>

@interface MXMMutableSampleData : MXMSampleData
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)appendData:(id)arg1 ;
-(void)appendSet:(id)arg1 ;
-(id)appendUnsignedIntegerValue:(unsigned long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendUnsignedIntValue:(unsigned)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)dataMatchingFilter:(id)arg1 ;
-(void)appendAttribute:(id)arg1 ;
-(id)appendSample:(id)arg1 ;
-(id)appendDoubleValue:(double)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntValue:(int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)appendIntegerValue:(long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(void)appendAttributes:(id)arg1 ;
-(id)appendFloatValue:(float)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3 ;
@end

