/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol NMSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
-(void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(/*^block*/id)arg3;
-(void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;
-(void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2;

@end

