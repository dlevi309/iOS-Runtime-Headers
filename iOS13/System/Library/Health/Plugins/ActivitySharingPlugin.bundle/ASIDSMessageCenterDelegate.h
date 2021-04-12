/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASIDSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 errorSendingInviteRequest:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingInviteResponse:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingFinalizeHandshake:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingWithdrawInviteRequest:(id)arg2;

@required
-(void)messageCenter:(id)arg1 didReceiveInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveInviteResponse:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveFinalizeHandshake:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveWithdrawInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;

@end

