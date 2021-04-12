/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDMediaDestinationControllerMessageHandlerDelegate
@required
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg2 destinationIdentifier:(id)arg3 updateOptions:(unsigned long long)arg4;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationUpdatedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveHomeAccessoryRemovedNotification:(id)arg2 destination:(id)arg3;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemAddedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemRemovedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveAccessoryChangedRoomNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)arg2 destinationControllerIdentifier:(id)arg3 destinationIdentifier:(id)arg4;

@end

