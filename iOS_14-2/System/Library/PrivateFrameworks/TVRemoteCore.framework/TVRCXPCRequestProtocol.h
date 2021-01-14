/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRCXPCRequestProtocol <NSObject>
@required
-(void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
-(void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
-(void)openConnectionToDeviceWithIdentifier:(id)arg1;
-(void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
-(void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
-(void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)setVoiceRecorderAutomaticRecording:(BOOL)arg1 forDeviceWithIdentifier:(id)arg2;
-(void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)beginDeviceQuery;
-(void)endDeviceQuery;
-(void)fetchActiveMREndpointUIDWithCompletion:(/*^block*/id)arg1;
-(void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(/*^block*/id)arg4;

@end

