/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioSessionControllerDelegate <NSObject>
@optional
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;

@end

