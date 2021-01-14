/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)newTurnBasedInstrumentationContext;
-(id)init;
-(id)_service:(BOOL)arg1 ;
-(void)logEventWithType:(long long)arg1 contextResolver:(/*^block*/id)arg2 ;
-(void)_stageEvents:(id)arg1 ;
-(void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(/*^block*/id)arg3 contextProvidingQueue:(id)arg4 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(void)logClientFeedbackPresented:(id)arg1 dialogIdentifierProvider:(id)arg2 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 ;
-(void)logClientFeedbackPresented:(id)arg1 ;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 ;
-(void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3 ;
-(void)_stageEvent:(id)arg1 ;
-(void)logInstrumentation:(id)arg1 turnContext:(id)arg2 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(/*^block*/id)arg3 ;
-(void)logEventWithType:(long long)arg1 contextProvider:(/*^block*/id)arg2 contextProvidingQueue:(id)arg3 ;
-(void)beginEventsGrouping;
-(void)setService:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 ;
-(void)endEventsGrouping;
-(id)_init;
-(void)boostQueuedEvents:(/*^block*/id)arg1 ;
-(void)logEvent:(id)arg1 ;
-(void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2 ;
-(void)logEvents:(id)arg1 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
@end

