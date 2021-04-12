/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<MTEventRecorderDelegate>)delegate;
-(void)setDelegate:(id<MTEventRecorderDelegate>)arg1 ;
-(NSMutableArray *)eventListeners;
-(id)recordEvent:(id)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(id)flushUnreportedEvents;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
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

