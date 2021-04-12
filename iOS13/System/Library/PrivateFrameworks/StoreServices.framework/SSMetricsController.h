/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_connection;
-(id)serialQueue;
-(id)configuration;
-(BOOL)isDisabled;
-(id)_userType;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(id)pingURLs;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(void)setPageConfiguration:(id)arg1 ;
-(BOOL)isFlushTimerEnabled;
@end

