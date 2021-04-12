/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRUITestMessageCenter : NSObject {

	NSMutableDictionary* _pendingReplies;
	NSMutableDictionary* _messageHandlers;
	NSObject*<OS_dispatch_queue> _messageQueue;
	BOOL _started;
	BOOL _isSender;

}
+(id)defaultCenter;
-(id)init;
-(id)_init;
-(void)stop;
-(void)didReceiveMessage:(id)arg1 ;
-(void)setHandler:(id)arg1 forMessageNamed:(id)arg2 ;
-(void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(BOOL)arg3 messageUUID:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)startSender;
-(void)startReceiver;
-(void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

