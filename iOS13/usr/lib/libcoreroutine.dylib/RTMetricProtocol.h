/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTMetricProtocol <NSObject>
@required
+(SCD_Struct_RT3*)event;
+(id)supportedMetricKeys;
-(BOOL)submitMetricsWithError:(id*)arg1;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2;

@end

