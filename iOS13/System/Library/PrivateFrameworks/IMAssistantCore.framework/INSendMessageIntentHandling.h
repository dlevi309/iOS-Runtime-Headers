/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@protocol INSendMessageIntentHandling <NSObject>
@optional
-(void)confirmSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveContentForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSendMessage:(id)arg1 completion:(/*^block*/id)arg2;

@end

