/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCCallSessionDelegate
@required
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
-(void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
-(void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
-(void)session:(id)arg1 isSendingAudio:(BOOL)arg2 error:(id)arg3;
-(void)didChangeLocalVariablesForSession:(id)arg1;
-(void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3;
-(void)session:(id)arg1 setRemoteBasebandCodecType:(unsigned)arg2 sampleRate:(double)arg3;
-(void)session:(id)arg1 startAudioWithFarEndVersionInfo:(VoiceIOFarEndVersionInfo*)arg2 internalFormat:(AudioStreamBasicDescription)arg3 internalSamplesPerFrame:(unsigned)arg4 completionHandler:(/*^block*/id)arg5;
-(void)session:(id)arg1 stopAudioWithCompletionHandler:(/*^block*/id)arg2;
-(void)session:(id)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3;
-(int)currentCameraID;
-(void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned)arg4;
-(void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned)arg3 withCallID:(unsigned)arg4;
-(void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned)arg2;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3;
-(void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6;
-(void)session:(id)arg1 didStopWithError:(id)arg2;
-(void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3;
-(void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned)arg2;
-(void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned)arg2;
-(void)session:(id)arg1 setMomentsCapabilities:(int)arg2 imageType:(int)arg3 videoCodec:(int)arg4;
-(void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4;
-(BOOL)session:(id)arg1 startVideoSend:(id*)arg2 captureRuleWifi:(id)arg3 captureRuleCell:(id)arg4 interface:(int)arg5 isUnpausing:(BOOL)arg6;
-(BOOL)session:(id)arg1 startVideoReceive:(id*)arg2;
-(BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id*)arg3;
-(BOOL)session:(id)arg1 stopVideoReceive:(id*)arg2 isPausing:(BOOL)arg3;
-(AudioStreamBasicDescription*)audioIOFormat;
-(void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
-(void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 didReceiveMomentsRequest:(id)arg2;
-(void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2;
-(void)session:(id)arg1 initiateRelayRequest:(id)arg2;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2;
-(BOOL)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC84)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3;

@end
