/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol TVRUIDeviceDelegate <NSObject>
@required
-(void)deviceBeganConnecting:(id)arg1;
-(void)deviceDidConnect:(id)arg1;
-(void)deviceDidDisconnect:(id)arg1 reason:(long long)arg2 error:(id)arg3;
-(void)deviceDidEncounterAuthenticationChallenge:(id)arg1 passwordType:(unsigned long long)arg2 passcode:(id)arg3;
-(void)device:(id)arg1 didEncounterAuthenticationThrottle:(long long)arg2;
-(void)device:(id)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(id)arg3;
-(void)device:(id)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(id)arg3;
-(void)device:(id)arg1 didUpdateText:(id)arg2;
-(void)device:(id)arg1 didUpdateAttributes:(id)arg2;
-(void)device:(id)arg1 needsMediaControls:(id)arg2;
-(void)device:(id)arg1 hidesMediaControls:(id)arg2;
-(void)device:(id)arg1 hasCaptionsEnabled:(BOOL)arg2;
-(void)device:(id)arg1 supportsVolumeControl:(BOOL)arg2;

@end

