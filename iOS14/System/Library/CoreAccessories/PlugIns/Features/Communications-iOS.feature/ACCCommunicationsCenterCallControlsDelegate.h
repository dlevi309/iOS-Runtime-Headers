/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Communications-iOS.feature/Communications-iOS
*/


@protocol ACCCommunicationsCenterCallControlsDelegate <NSObject>
@required
-(BOOL)swapCalls;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)updateMuteStatus:(BOOL)arg1;
-(BOOL)mergeCalls;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)initiateCallToVoicemail;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
-(BOOL)endAllCalls;
-(BOOL)initiateRedial;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2;

@end

