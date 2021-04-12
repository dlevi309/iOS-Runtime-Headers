/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
*/


@protocol OS_dispatch_queue, AnalyticsEventObserverDelegate;
#import <CoreAnalytics/CoreAnalytics-Structs.h>
@class NSObject;

@interface AnalyticsEventObserver : NSObject {

	shared_ptr<(anonymous namespace)::EventObserverImpl>* observer;
	NSObject*<OS_dispatch_queue> _queue;
	id<AnalyticsEventObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AnalyticsEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(BOOL)stopObserving;
-(id)init;
-(id<AnalyticsEventObserverDelegate>)delegate;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<AnalyticsEventObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(BOOL)startObservingEventList:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)setEventObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)startObservingEventList:(id)arg1 ;
@end

