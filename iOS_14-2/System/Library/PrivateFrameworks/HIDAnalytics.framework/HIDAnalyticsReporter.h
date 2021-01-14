/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject;

@interface HIDAnalyticsReporter : NSObject {

	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)unregisterEvent:(id)arg1 ;
-(id)init;
-(id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3 ;
-(void)start;
-(void)stop;
-(void)registerEvent:(id)arg1 ;
-(void)logAnalyticsEvent:(id)arg1 ;
-(void)dispatchAnalyticsForEvent:(id)arg1 ;
-(void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3 ;
-(void)dealloc;
@end

