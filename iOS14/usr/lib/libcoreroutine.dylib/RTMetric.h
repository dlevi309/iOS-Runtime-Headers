/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSMutableDictionary, NSString;

@interface RTMetric : NSObject <RTMetricProtocol> {

	BOOL _loggingEnabled;
	BOOL _submitted;
	NSMutableDictionary* _metrics;

}

@property (assign,nonatomic) BOOL loggingEnabled;                          //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)metricName;
+(id)binForNumber:(id)arg1 bins:(id)arg2 ;
+(id)supportedMetricKeys;
+(id)binsFromStart:(id)arg1 toEnd:(id)arg2 gap:(id)arg3 ;
-(NSMutableDictionary *)metrics;
-(id)init;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)loggingEnabled;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
@end

