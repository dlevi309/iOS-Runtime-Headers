/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSDaemonListenerProtocol <NSObject>
@optional
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)continuityDidLosePeer:(id)arg1;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2;
-(void)connectionComplete:(BOOL)arg1 withResponse:(id)arg2;
-(void)continuityDidStartScanningForType:(long long)arg1;
-(void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
-(void)deactivatePairedDevices;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1;
-(void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;
-(void)accountEnabled:(id)arg1 onService:(id)arg2;
-(void)accountDisabled:(id)arg1 onService:(id)arg2;
-(void)deviceIdentifierDidChange:(id)arg1;
-(void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(BOOL*)arg3;
-(void)accountRemoved:(id)arg1;
-(void)daemonConnected;
-(void)didSwitchActivePairedDevice:(id)arg1;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2;
-(void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
-(void)service:(id)arg1 linkedDevicesUpdated:(id)arg2;
-(void)setupCompleteWithInfo:(id)arg1;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
-(void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2;
-(void)daemonDisconnected;
-(void)continuityDidStopScanningForType:(long long)arg1;
-(void)accountAdded:(id)arg1;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2;
-(void)service:(id)arg1 tinkerDeviceAdded:(id)arg2;
-(void)continuityDidUpdateStateToState:(long long)arg1;
-(void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
-(void)userAccessTokens:(id)arg1 error:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)session:(id)arg1 audioEnabled:(BOOL)arg2;
-(void)consentTokens:(id)arg1 error:(id)arg2;
-(void)session:(id)arg1 muted:(BOOL)arg2;
-(void)openedSocket:(id)arg1 forHandlerID:(id)arg2 error:(id)arg3;
-(void)deliveryStats:(id)arg1;
-(void)groupSessionDidTerminate:(id)arg1;
-(void)continuityDidStopTrackingPeer:(id)arg1;
-(void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
-(void)serviceUserIDs:(id)arg1 error:(id)arg2;
-(void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)updateDeviceIdentity:(id)arg1 error:(id)arg2;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7;
-(void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
-(void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
-(void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
-(void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)session:(id)arg1 didReceiveReport:(id)arg2;
-(void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)checkTransportLogWithReason:(long long)arg1;
-(void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2;
-(void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2;
-(void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;
-(void)groupSessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
-(void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3;
-(void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
-(void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
-(void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
-(void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(BOOL)arg3;
-(void)session:(id)arg1 didReceivePluginAllocationInfo:(id)arg2;
-(void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
-(void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
-(void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
-(void)adminAccessTokens:(id)arg1 error:(id)arg2;
-(void)refreshUserAccessTokens:(id)arg1 error:(id)arg2;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2 pairedDevices:(id)arg3;
-(void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;
-(void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(BOOL)arg3 delay:(double)arg4 withError:(id)arg5;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
-(void)accountUpdated:(id)arg1;
-(void)refreshRegistrationForAccount:(id)arg1;
-(void)device:(id)arg1 nsuuidChanged:(id)arg2;
-(void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;

@end

