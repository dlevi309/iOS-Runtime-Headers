/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)addMetricsController:(id)arg1 ;
-(void)removeMetricsController:(id)arg1 ;
-(void)flushAllMetricsControllers;
-(void)reloadFlushInterval;
-(void)_performFlush;
-(void)_cancelFlushTimer;
@end

