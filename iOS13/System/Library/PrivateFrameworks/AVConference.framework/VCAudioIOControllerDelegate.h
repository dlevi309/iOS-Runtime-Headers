/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioIOControllerDelegate <VCBasebandCodecNotifications>
@required
-(void)didStart:(BOOL)arg1 error:(id)arg2;
-(void)controllerFormatChanged:(AudioStreamBasicDescription)arg1;
-(void)didStop:(BOOL)arg1 error:(id)arg2;
-(void)spatialAudioSourceIDChanged:(unsigned long long)arg1;
-(void)didResume;
-(void)didSuspend;

@end

