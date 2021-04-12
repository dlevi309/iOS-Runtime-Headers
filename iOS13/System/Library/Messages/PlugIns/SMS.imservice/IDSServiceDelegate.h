/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@protocol IDSServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 account:(id)arg2 incomingOpportunisticData:(id)arg3 withIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)service:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)service:(id)arg1 account:(id)arg2 incomingPendingMessageOfType:(long long)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2;
-(void)service:(id)arg1 devicesChanged:(id)arg2;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 sentBytes:(long long)arg4 totalBytes:(long long)arg5;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3;
-(void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1;
-(void)serviceAllowedTrafficClassifiersDidReset:(id)arg1;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3;

@end

