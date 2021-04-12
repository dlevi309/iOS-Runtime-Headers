/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@protocol VoiceTriggerInterface
@required
-(void)initializeWithReply:(/*^block*/id)arg1;
-(void)enableVoiceTriggerListening:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setListeningProperty:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)enableSpeakerStateListening:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)speakerStateActiveReply:(/*^block*/id)arg1;
-(void)speakerStateMutedReply:(/*^block*/id)arg1;
-(void)updateVoiceTriggerConfiguration:(id)arg1 reply:(/*^block*/id)arg2;
-(void)voiceTriggerPastDataFramesAvailable:(/*^block*/id)arg1;
-(void)hasBargeInSupportReply:(/*^block*/id)arg1;
-(void)enableBargeInMode:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)listeningEnabledReply:(/*^block*/id)arg1;
-(void)siriClientsRecordingReply:(/*^block*/id)arg1;

@end

