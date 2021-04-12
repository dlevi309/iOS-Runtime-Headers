/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@protocol VoiceTriggerInterface
@required
-(void)enableSpeakerStateListening:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)voiceTriggerPastDataFramesAvailable:(/*^block*/id)arg1;
-(void)setListeningProperty:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)speakerStateActiveReply:(/*^block*/id)arg1;
-(void)enableBargeInMode:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)siriClientsRecordingReply:(/*^block*/id)arg1;
-(void)enableVoiceTriggerListening:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)hasBargeInSupportReply:(/*^block*/id)arg1;
-(void)initializeWithReply:(/*^block*/id)arg1;
-(void)updateVoiceTriggerConfiguration:(id)arg1 reply:(/*^block*/id)arg2;
-(void)speakerStateMutedReply:(/*^block*/id)arg1;
-(void)listeningEnabledReply:(/*^block*/id)arg1;

@end

