/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSMSComposeRemoteViewControllerDelegate <NSObject>
@required
-(void)viewServiceDidTerminateWithError:(id)arg1;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerEntryViewContentInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3;
-(void)smsComposeControllerSendStartedWithText:(id)arg1;
-(void)smsComposeControllerCancelled;

@end

