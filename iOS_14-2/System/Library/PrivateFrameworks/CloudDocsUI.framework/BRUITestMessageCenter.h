/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didReceiveMessage:(id)arg1 ;
-(void)stop;
-(id)_init;
-(void)setHandler:(id)arg1 forMessageNamed:(id)arg2 ;
-(void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(BOOL)arg3 messageUUID:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)startSender;
-(void)startReceiver;
-(void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

