/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMProbe.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXMProxyMetric;

@interface MXMProxyProbe : MXMProbe <NSSecureCoding> {

	MXMProxyMetric* _proxyMetric;

}

@property (readonly) MXMProxyMetric * proxyMetric;              //@synthesize proxyMetric=_proxyMetric - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProxyMetric:(id)arg1 ;
-(MXMProxyMetric *)proxyMetric;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 stopHandler:(/*^block*/id)arg2 ;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
@end

