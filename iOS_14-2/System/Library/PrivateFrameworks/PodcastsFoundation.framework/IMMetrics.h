/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@interface IMMetrics : NSObject
+(void)disable;
+(void)enable;
+(void)initialize;
+(void)recordEvent:(id)arg1 ;
+(void)setLogLevel:(int)arg1 ;
+(void)startTimer:(id)arg1 ;
+(void)recordMemory:(id)arg1 ;
+(void)flushImmediately;
+(void)addMetricsController:(id)arg1 ;
+(void)removeMetricsController:(id)arg1 ;
+(void)recordUserAction:(id)arg1 dataSource:(id)arg2 ;
+(id)defaultMetricsController;
+(void)recordUserAction:(id)arg1 dataSource:(id)arg2 withData:(id)arg3 ;
+(void)setupEvent:(id)arg1 forDataSource:(id)arg2 ;
+(void)startTimer:(id)arg1 dataSource:(id)arg2 ;
+(id)keyForTimerName:(id)arg1 dataSource:(id)arg2 ;
+(double)endTimer:(id)arg1 dataSource:(id)arg2 ;
+(double)endTimer:(id)arg1 dataSource:(id)arg2 withData:(id)arg3 ;
+(void)recordEvent:(id)arg1 with:(id)arg2 ;
+(id)metricsControllerForTopic:(id)arg1 ;
+(BOOL)canRecordEvent;
+(void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 topic:(id)arg4 ;
+(void)recordEvent:(id)arg1 topic:(id)arg2 ;
+(void)cancelFlush;
+(void)setDefaultMetricsController:(id)arg1 ;
+(void)recordUserAction:(id)arg1 ;
+(double)endTimer:(id)arg1 ;
+(void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 ;
@end

