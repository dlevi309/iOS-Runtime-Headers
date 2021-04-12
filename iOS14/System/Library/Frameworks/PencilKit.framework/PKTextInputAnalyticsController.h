/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKit/UITextInputSessionActionAnalyticsEndingObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSTimer, NSString;

@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _lastEventSource;
	unsigned long long _lastEventSourceChangeTimestamp;
	unsigned long long _eventSourceUsage[7];
	NSTimer* _eventSourceTimer;

}

@property (nonatomic,retain) NSTimer * eventSourceTimer;              //@synthesize eventSourceTimer=_eventSourceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)beginObservingSessionAnalytics;
-(id)init;
-(id)matchingAccumulatorNames;
-(void)didEndMatchingAccumulatorName:(id)arg1 ;
-(void)dealloc;
-(void)_setupAnalyticsTimer;
-(void)eventSourceDidChange:(id)arg1 ;
-(void)q_didEndMatchingAccumulatorName:(id)arg1 inputMode:(id)arg2 ;
-(void)messageHandwritingAnalyticsWithProxyBlock:(/*^block*/id)arg1 ;
-(void)didUpdateToEventSource:(long long)arg1 ;
-(void)_updateAnalyticsTracking;
-(NSTimer *)eventSourceTimer;
-(void)_dispatchAnalytics;
-(void)setEventSourceTimer:(NSTimer *)arg1 ;
@end

