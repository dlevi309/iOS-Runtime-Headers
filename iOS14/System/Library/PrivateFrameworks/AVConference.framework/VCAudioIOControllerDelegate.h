/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

