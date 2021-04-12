/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
*/


@protocol ITAttentionAwarenessClientDelegate;
#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;

@interface ITAttentionAwarenessClient : NSObject {

	os_unfair_lock_s _accessLock;
	BOOL _access_enabled;
	AWAttentionAwarenessClient* _access_attentionAwarenessClient;
	id<ITAttentionAwarenessClientDelegate> _delegate;

}

@property (nonatomic,retain) AWAttentionAwarenessClient * _access_attentionAwarenessClient;              //@synthesize access_attentionAwarenessClient=_access_attentionAwarenessClient - In the implementation block
@property (assign,nonatomic,__weak) id<ITAttentionAwarenessClientDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AWAttentionAwarenessConfiguration * configuration; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize access_enabled=_access_enabled - In the implementation block
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)init;
-(id<ITAttentionAwarenessClientDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<ITAttentionAwarenessClientDelegate>)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(void)_handleAttentionAwarenessEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
-(id)_initWithCalloutQueue:(id)arg1 attentionAwarenessClient:(id)arg2 ;
-(void)_access_resume;
-(void)_access_suspend;
-(AWAttentionAwarenessClient *)_access_attentionAwarenessClient;
-(void)set_access_attentionAwarenessClient:(AWAttentionAwarenessClient *)arg1 ;
@end

