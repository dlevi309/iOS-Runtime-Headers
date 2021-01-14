/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

