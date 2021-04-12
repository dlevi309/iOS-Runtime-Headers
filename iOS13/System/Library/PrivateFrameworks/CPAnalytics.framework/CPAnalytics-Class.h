/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@protocol OS_dispatch_queue;
@class CPAnalyticsDestinationsRegistry, NSObject, CPAnalyticsSystemProperties;

@interface CPAnalytics : NSObject {

	CPAnalyticsDestinationsRegistry* _registry;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	long long _lastSignpostID;
	CPAnalyticsSystemProperties* _systemProperties;

}

@property (nonatomic,readonly) CPAnalyticsDestinationsRegistry * registry;                  //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventsQueue;                    //@synthesize eventsQueue=_eventsQueue - In the implementation block
@property (readonly) long long lastSignpostID;                                              //@synthesize lastSignpostID=_lastSignpostID - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
+(id)bundle;
+(id)_sharedInstance;
+(void)sendEvent:(id)arg1 withPayload:(id)arg2 ;
+(void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3 ;
+(long long)startSignpost;
+(BOOL)isAllowed;
+(void)setupWithConfigurationAtURL:(id)arg1 ;
+(void)startViewTracking;
+(void)activateEventQueue;
-(id)init;
-(CPAnalyticsDestinationsRegistry *)registry;
-(CPAnalyticsSystemProperties *)systemProperties;
-(void)_sendEvent:(id)arg1 withPayload:(id)arg2 ;
-(long long)_startSignpost;
-(void)_endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3 ;
-(void)_registerPropertyProviders;
-(long long)_generateNextSignpostID;
-(void)_activateEventQueue;
-(NSObject*<OS_dispatch_queue>)eventsQueue;
-(long long)lastSignpostID;
@end

