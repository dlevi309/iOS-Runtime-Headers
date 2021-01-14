/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioIODelegate <VCBasebandCodecNotifications>
@optional
-(void)spatialAudioSourceIDChanged:(unsigned long long)arg1;

@required
-(void)didSuspendAudioIO:(id)arg1;
-(void)didResumeAudioIO:(id)arg1;

@end

