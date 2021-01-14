/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSMetricsConfiguration, NSObject;

@interface SSMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSMetricsConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _flushSerialQueue;
	BOOL _flushTimerEnabled;
	BOOL _flushOnForeground;
	/*^block*/id _flushTimerBlock;
	NSObject*<OS_dispatch_queue> _flushTimerQueue;

}

@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
-(id)init;
-(id)serialQueue;
-(BOOL)isDisabled;
-(void)setGlobalConfiguration:(id)arg1 ;
-(id)pingURLs;
-(id)_userType;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)configuration;
-(id)_connection;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(void)dealloc;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(void)setPageConfiguration:(id)arg1 ;
-(BOOL)isFlushTimerEnabled;
@end

