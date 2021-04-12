/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)binForNumber:(id)arg1 bins:(id)arg2 ;
+(id)supportedMetricKeys;
+(id)binsFromStart:(id)arg1 toEnd:(id)arg2 gap:(id)arg3 ;
+(id)metricName;
-(id)init;
-(NSString *)description;
-(NSMutableDictionary *)metrics;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
@end

