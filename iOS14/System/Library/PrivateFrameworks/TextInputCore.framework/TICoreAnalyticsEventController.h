/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TICoreAnalyticsEventController : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}
+(void)registerScheduledEventsActivity;
-(id)init;
-(void)queueScheduledEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispatchScheduledEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispatchEventsFromRegistry:(id)arg1 withProvider:(id)arg2 andContext:(id)arg3 andMetrics:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dispatchEventWithDescriptor:(id)arg1 andSpec:(id)arg2 withProvider:(id)arg3 andContext:(id)arg4 andMetrics:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)adjustValues:(id)arg1 forFieldSpec:(id)arg2 ;
-(id)adjustValue:(id)arg1 forFieldSpec:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 eventSpec:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)loadEventDescriptorRegistry;
-(id)loadMetricDescriptorRegistry;
-(id)loadConfigWithFilename:(id)arg1 ;
@end

