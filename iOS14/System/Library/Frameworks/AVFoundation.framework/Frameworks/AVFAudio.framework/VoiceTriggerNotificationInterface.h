/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol VoiceTriggerNotificationInterface
@required
-(void)speakerStateChangedNotification:(id)arg1;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg1 recordingCount:(unsigned long long)arg2;
-(void)voiceTriggerNotification:(id)arg1;

@end

