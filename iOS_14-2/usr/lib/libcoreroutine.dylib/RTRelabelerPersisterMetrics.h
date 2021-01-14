/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSString;

@interface RTRelabelerPersisterMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)supportedMetricKeys;
+(id)booleanKeys;
+(id)doubleKeys;
+(id)bucketedKeys;
+(id)unsignedIntegerKeys;
-(void)setErrorKey:(id)arg1 ;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
-(void)tallyKey:(id)arg1 ;
-(void)setDerivedMetrics;
-(void)tallyError:(id)arg1 ;
-(double)safeFraction:(double)arg1 denominator:(double)arg2 ;
-(void)setBucketedPercentageMetricsWithMappings:(id)arg1 sharedDenominator:(double)arg2 sharedBins:(id)arg3 ;
@end

