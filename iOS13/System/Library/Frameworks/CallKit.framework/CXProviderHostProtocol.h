/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXProviderHostProtocol <CXAbstractProviderHostProtocol>
@required
-(oneway void)registerWithConfiguration:(id)arg1;
-(oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
-(oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
-(oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
-(oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2;

@end

