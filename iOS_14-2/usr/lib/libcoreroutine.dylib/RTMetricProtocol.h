/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTMetricProtocol <NSObject>
@required
+(SCD_Struct_RT3*)event;
+(id)supportedMetricKeys;
-(BOOL)submitMetricsWithError:(id*)arg1;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2;

@end

