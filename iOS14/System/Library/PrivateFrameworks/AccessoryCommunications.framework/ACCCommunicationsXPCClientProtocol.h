/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryCommunications.framework/AccessoryCommunications
*/


@protocol ACCCommunicationsXPCClientProtocol <NSObject>
@required
-(void)swapCalls;
-(void)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
-(void)updateMuteStatus:(BOOL)arg1;
-(void)mergeCalls;
-(void)endCallWithAction:(int)arg1 callUUID:(id)arg2;
-(void)initiateCallToVoicemail;
-(void)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
-(void)endAllCalls;
-(void)initiateRedial;
-(void)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;
-(void)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2;
-(void)updateSubscriberList:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerCallStateUpdatesWithReply:(/*^block*/id)arg1;
-(void)triggerCommunicationsUpdateWithReply:(/*^block*/id)arg1;
-(void)triggerUpdateForListType:(int)arg1 coalesce:(BOOL)arg2 withReply:(/*^block*/id)arg3;

@end

