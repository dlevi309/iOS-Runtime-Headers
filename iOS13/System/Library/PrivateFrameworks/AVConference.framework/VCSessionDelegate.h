/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCSessionDelegate <NSObject>
@required
-(void)vcSession:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)vcSession:(id)arg1 didStopWithError:(id)arg2;
-(void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(BOOL)arg3;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(BOOL)arg3;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(BOOL)arg3;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(BOOL)arg3;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didChangeProminence:(unsigned char)arg3 description:(id)arg4;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;
-(void)vcSession:(id)arg1 participantID:(id)arg2 spatialAudioSourceIDDidChange:(unsigned long long)arg3;

@end
