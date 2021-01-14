/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_queue;
-(id<STKUserEventMonitorDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_suspend;
-(void)setDelegate:(id<STKUserEventMonitorDelegate>)arg1 ;
-(void)invalidate;
-(BOOL)isEnabled;
-(void)_resume;
-(void)dealloc;
-(void)_queue_handleAttentionAwarenessEvent:(id)arg1 ;
-(id)_initWithAttentionAwarenessClient:(id)arg1 ;
-(AWAttentionAwarenessClient *)attentionAwarenessClient;
-(void)setAttentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
@end

