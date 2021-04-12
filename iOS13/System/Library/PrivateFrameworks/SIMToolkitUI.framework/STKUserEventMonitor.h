/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;
@class AWAttentionAwarenessConfiguration, NSObject, AWAttentionAwarenessClient;

@interface STKUserEventMonitor : NSObject {

	AWAttentionAwarenessConfiguration* _queue_configuration;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _invalidated;
	BOOL _enabled;
	id<STKUserEventMonitorDelegate> _delegate;
	AWAttentionAwarenessClient* _attentionAwarenessClient;

}

@property (nonatomic,retain) AWAttentionAwarenessClient * attentionAwarenessClient;              //@synthesize attentionAwarenessClient=_attentionAwarenessClient - In the implementation block
@property (assign,nonatomic,__weak) id<STKUserEventMonitorDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_suspend;
-(void)_resume;
-(void)invalidate;
-(id)_queue;
-(void)setEnabled:(BOOL)arg1 ;
-(id<STKUserEventMonitorDelegate>)delegate;
-(void)setDelegate:(id<STKUserEventMonitorDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)_queue_handleAttentionAwarenessEvent:(id)arg1 ;
-(id)_initWithAttentionAwarenessClient:(id)arg1 ;
-(AWAttentionAwarenessClient *)attentionAwarenessClient;
-(void)setAttentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
@end

