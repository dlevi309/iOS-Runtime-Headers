/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_source;
@class NSHashTable, NSObject;

@interface SKUIMetricsFlushTimer : NSObject {

	NSHashTable* _metricsControllers;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _timerStartTime;

}
+(id)sharedTimer;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)init;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)addMetricsController:(id)arg1 ;
-(void)removeMetricsController:(id)arg1 ;
-(void)flushAllMetricsControllers;
-(void)reloadFlushInterval;
-(void)_performFlush;
-(void)_cancelFlushTimer;
@end

