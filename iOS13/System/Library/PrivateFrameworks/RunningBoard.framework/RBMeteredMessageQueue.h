/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface RBMeteredMessageQueue : NSObject {

	NSMutableDictionary* _pendingMessagesByIdentifier;
	BOOL _isProcessingPendingMessages;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	/*^block*/id _messageSendBlock;

}

@property (nonatomic,copy) id messageSendBlock;              //@synthesize messageSendBlock=_messageSendBlock - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(BOOL)containsMessageWithIdentifier:(id)arg1 ;
-(void)_lockQueue_processPendingMessages;
-(void)enqueueIdentifier:(id)arg1 message:(id)arg2 ;
-(id)messageSendBlock;
-(void)setMessageSendBlock:(id)arg1 ;
@end

