/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
*/


@protocol OS_dispatch_queue, AnalyticsConfigurationObserverDelegate;
#import <CoreAnalytics/CoreAnalytics-Structs.h>
@class NSObject;

@interface AnalyticsConfigurationObserver : NSObject {

	shared_ptr<(anonymous namespace)::ConfigurationObserverImpl>* observer;
	NSObject*<OS_dispatch_queue> _queue;
	id<AnalyticsConfigurationObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AnalyticsConfigurationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<AnalyticsConfigurationObserverDelegate>)delegate;
-(void)setDelegate:(id<AnalyticsConfigurationObserverDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)startObservingConfigurationType:(id)arg1 ;
-(BOOL)stopObservingConfigurationType:(id)arg1 ;
@end

