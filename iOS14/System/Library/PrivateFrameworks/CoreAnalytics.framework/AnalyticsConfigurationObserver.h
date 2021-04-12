/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AnalyticsConfigurationObserverDelegate>)delegate;
-(void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<AnalyticsConfigurationObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)startObservingConfigurationType:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)stopObservingConfigurationType:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

