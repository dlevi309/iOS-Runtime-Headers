/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Communications-iOS.feature/Communications-iOS
*/


@protocol ACCCommunicationsCenterCallControlsDelegate <NSObject>
@required
-(BOOL)swapCalls;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
-(BOOL)initiateCallToVoicemail;
-(BOOL)initiateRedial;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)endAllCalls;
-(BOOL)mergeCalls;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2;
-(BOOL)updateMuteStatus:(BOOL)arg1;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;

@end

