/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCSessionParticipantDelegate <NSObject>
@required
-(void)vcSessionParticipant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(BOOL)arg2;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)arg1;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;
-(void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
-(void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
-(void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;
-(void)vcSessionParticipant:(id)arg1 spatialAudioSourceIDDidChange:(unsigned long long)arg2;

@end

