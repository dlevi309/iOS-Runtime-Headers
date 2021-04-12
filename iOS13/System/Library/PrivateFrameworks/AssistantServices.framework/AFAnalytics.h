/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue, OS_dispatch_group, AFAnalyticsService;
@class NSObject;

@interface AFAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	id<AFAnalyticsService> _service;

}
+(id)sharedAnalytics;
-(id)init;
-(id)_init;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 ;
-(id)newTurnBasedInstrumentationContext;
-(void)setService:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(void)logEvent:(id)arg1 ;
-(void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)boostQueuedEvents:(/*^block*/id)arg1 ;
-(void)beginEventsGrouping;
-(void)endEventsGrouping;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(/*^block*/id)arg3 contextProvidingQueue:(id)arg4 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(/*^block*/id)arg3 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3 ;
-(void)_stageEvent:(id)arg1 ;
-(id)_service:(BOOL)arg1 ;
-(void)_stageEvents:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 contextProvidingQueue:(id)arg3 ;
-(void)logEventWithType:(long long)arg1 contextResolver:(/*^block*/id)arg2 ;
-(void)logInstrumentation:(id)arg1 turnContext:(id)arg2 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2 ;
-(void)logEvents:(id)arg1 ;
-(void)logClientFeedbackPresented:(id)arg1 ;
-(void)sampleDictationRequestIfNeeded:(id)arg1 sessionId:(id)arg2 forLanguageCode:(id)arg3 ;
@end

