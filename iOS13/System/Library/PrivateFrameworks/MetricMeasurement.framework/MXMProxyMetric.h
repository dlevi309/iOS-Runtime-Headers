/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMMetric.h>

@class MXMMetric, MXMProbe;

@interface MXMProxyMetric : MXMMetric {

	MXMMetric* __underlyingMetric;

}

@property (retain,readonly) MXMMetric * _underlyingMetric;              //@synthesize _underlyingMetric=__underlyingMetric - In the implementation block
@property (copy,readonly) MXMProbe * _remoteProbe; 
@property (copy,readonly) MXMMetric * metric; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXMMetric *)metric;
-(void)willStartAtEstimatedTime:(unsigned long long)arg1 ;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
-(MXMMetric *)_underlyingMetric;
-(id)initWithMetric:(id)arg1 ;
-(unsigned long long)_sampleMode;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2 ;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2 ;
-(MXMProbe *)_remoteProbe;
-(BOOL)_shouldAlwaysWrapInProxy;
-(BOOL)_shouldNeverWrapInProxy;
@end

