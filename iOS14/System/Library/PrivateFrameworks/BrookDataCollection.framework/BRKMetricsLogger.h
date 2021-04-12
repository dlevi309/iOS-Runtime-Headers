/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/


@interface BRKMetricsLogger : NSObject
+(id)sharedInstance;
-(id)_init;
-(void)_enumerateMetrics:(id)arg1 distributionBlock:(/*^block*/id)arg2 scalarBlock:(/*^block*/id)arg3 ;
-(id)_aggdKeyForMetricKey:(id)arg1 ;
-(void)logMetrics:(id)arg1 ;
-(void)appendMetrics:(id)arg1 ;
-(void)clearMetrics:(id)arg1 ;
@end

