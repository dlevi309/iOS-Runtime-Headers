/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVCSessionParticipantDelegate <NSObject>
@optional
-(void)participant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2;
-(void)participant:(id)arg1 spatialAudioSourceIDDidChange:(unsigned long long)arg2;

@end

