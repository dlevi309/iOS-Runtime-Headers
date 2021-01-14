/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol NMSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
-(void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(/*^block*/id)arg3;
-(void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;
-(void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2;

@end

