/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface IMMetrics : NSObject
+(void)initialize;
+(void)disable;
+(void)enable;
+(void)setLogLevel:(int)arg1 ;
+(void)recordEvent:(id)arg1 ;
+(void)flushImmediately;
+(void)addMetricsController:(id)arg1 ;
+(void)removeMetricsController:(id)arg1 ;
+(void)startTimer:(id)arg1 ;
+(void)recordUserAction:(id)arg1 ;
+(id)defaultMetricsController;
+(void)recordMemory:(id)arg1 ;
+(void)recordUserAction:(id)arg1 dataSource:(id)arg2 ;
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
+(double)endTimer:(id)arg1 ;
+(void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 ;
@end

