/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioIODelegate <VCBasebandCodecNotifications>
@optional
-(void)spatialAudioSourceIDChanged:(unsigned long long)arg1;

@required
-(void)didSuspendAudioIO:(id)arg1;
-(void)didResumeAudioIO:(id)arg1;

@end

