/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSSmartSiriVolumeProviding <NSObject>
@required
-(float)getEstimatedTTSVolume;
-(void)updateMusicVolume:(float)arg1;
-(void)updateAlarmVolume:(float)arg1;
-(void)updateAlarmState:(long long)arg1;
-(void)updateTimerState:(long long)arg1;

@end

