/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface CBAnalyticsManager : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _reportTimer;
	NSMutableDictionary* _timestamps;
	NSMutableDictionary* samples;

}
+(id)sharedInstance;
+(BOOL)handleColorSample:(id)arg1 ;
+(void)sendEventOnceADayLazy:(id)arg1 andDict:(id)arg2 ;
+(void)stopReporting:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)stringForType:(unsigned long long)arg1 ;
-(BOOL)handleColorSampleInternal:(id)arg1 ;
-(void)startReporting;
-(void)logColorSample:(id)arg1 withType:(id)arg2 ;
-(void)sendEventLazy:(id)arg1 andDict:(id)arg2 ;
-(void)sendEventOnceADayLazyInternal:(id)arg1 andDict:(id)arg2 ;
-(BOOL)isFirstEventToday:(id)arg1 ;
-(void)logAllColorSamples;
-(void)stopReportingInternal:(unsigned long long)arg1 ;
-(BOOL)isSameDay:(id)arg1 asDay:(id)arg2 ;
-(void)storeTimestamp:(id)arg1 forEventName:(id)arg2 ;
@end

