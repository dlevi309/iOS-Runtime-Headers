/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@protocol INSendMessageIntentHandling <NSObject>
@optional
-(void)resolveGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveOutgoingMessageTypeForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveContentForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSendMessage:(id)arg1 completion:(/*^block*/id)arg2;

@end

