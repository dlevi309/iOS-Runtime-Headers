/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryCommunications.framework/AccessoryCommunications
*/


@protocol ACCCommunicationsXPCClientProtocol <NSObject>
@required
-(void)swapCalls;
-(void)updateSubscriberList:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerCallStateUpdatesWithReply:(/*^block*/id)arg1;
-(void)triggerCommunicationsUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerUpdateForListType:(int)arg1 coalesce:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
-(void)initiateCallToVoicemail;
-(void)initiateRedial;
-(void)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
-(void)endCallWithAction:(int)arg1 callUUID:(id)arg2;
-(void)endAllCalls;
-(void)mergeCalls;
-(void)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2;
-(void)updateMuteStatus:(BOOL)arg1;
-(void)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;

@end

