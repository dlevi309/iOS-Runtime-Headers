/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDiMessageIncomingMessageHandler : NSObject
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 description:(id)arg3 ;
-(void)handleMessagePlayedReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleMessageWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleMessageReadReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleMessageDeliveryReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

