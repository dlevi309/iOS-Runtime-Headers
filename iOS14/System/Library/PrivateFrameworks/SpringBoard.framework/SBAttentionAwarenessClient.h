/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAttentionAwarenessClientDelegate, OS_dispatch_queue;
@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient, NSObject;

@interface SBAttentionAwarenessClient : NSObject {

	AWAttentionAwarenessConfiguration* _queue_configuration;
	BOOL _enabled;
	id<SBAttentionAwarenessClientDelegate> _delegate;
	AWAttentionAwarenessClient* _attentionAwarenessClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SBAttentionAwarenessClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AWAttentionAwarenessConfiguration * configuration; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(id<SBAttentionAwarenessClientDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)resetAttentionLostTimeout;
-(void)_suspend;
-(void)setDelegate:(id<SBAttentionAwarenessClientDelegate>)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(void)_handleAttentionAwarenessEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(void)_resume;
-(void)_resetAttentionLostTimeout;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
@end

