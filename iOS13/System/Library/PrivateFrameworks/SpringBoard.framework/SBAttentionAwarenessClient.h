/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) AWAttentionAwarenessClient * attentionAwarenessClient;               //@synthesize attentionAwarenessClient=_attentionAwarenessClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SBAttentionAwarenessClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AWAttentionAwarenessConfiguration * configuration; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
-(id)init;
-(void)_suspend;
-(void)_resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SBAttentionAwarenessClientDelegate>)delegate;
-(void)setDelegate:(id<SBAttentionAwarenessClientDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(AWAttentionAwarenessClient *)attentionAwarenessClient;
-(void)setAttentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
-(void)resetAttentionLostTimeout;
-(void)_handleAttentionAwarenessEvent:(id)arg1 ;
-(void)_resetAttentionLostTimeout;
@end

