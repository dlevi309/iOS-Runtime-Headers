/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventRecorderDelegate;
@class NSMutableArray;

@interface MTEventRecorder : MTObject {

	id<MTEventRecorderDelegate> _delegate;
	NSMutableArray* _eventListeners;

}

@property (assign,nonatomic) BOOL monitorsLifecycleEvents; 
@property (nonatomic,retain) NSMutableArray * eventListeners;                          //@synthesize eventListeners=_eventListeners - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2 ;
+(id)_metricsDataApplyingWhitelisting:(id)arg1 usingRecorder:(id)arg2 ;
-(id)init;
-(id<MTEventRecorderDelegate>)delegate;
-(NSMutableArray *)eventListeners;
-(void)setDelegate:(id<MTEventRecorderDelegate>)arg1 ;
-(id)recordEvent:(id)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(void)dealloc;
-(id)flushUnreportedEvents;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(id)sendMethod;
-(id)initWithMetricsKit:(id)arg1 ;
-(void)maybeSubscribeToFlushNotification;
-(id)_flushUnreportedEventsUsingRecorder:(id)arg1 ;
-(id)recordEvent:(id)arg1 shouldSkipValidation:(BOOL)arg2 ;
-(id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3 ;
-(id)_recordEvent:(id)arg1 usingRecorder:(id)arg2 ;
-(void)setEventListeners:(NSMutableArray *)arg1 ;
-(id)_amsDelegate;
@end

