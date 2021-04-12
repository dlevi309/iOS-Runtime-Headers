/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKComposeChatControllerDelegate <NSObject,CKChatControllerDelegate>
@optional
-(void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(/*^block*/id)arg2;
-(void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)composeChatControllerDidCancelComposition:(id)arg1;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;

@end

