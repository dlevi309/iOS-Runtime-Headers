/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSSmartSiriVolumeProcessor
@required
-(void)setAsset:(id)arg1;
-(void)reset;
-(void)startSmartSiriVolume;
-(id)initWithSamplingRate:(float)arg1 asset:(id)arg2;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;
-(void)didReceiveAlarmChanged:(long long)arg1;
-(void)didReceiveTimerChanged:(long long)arg1;
-(void)didReceiveMusicVolumeChanged:(float)arg1;
-(void)didReceiveAlarmVolumeChanged:(float)arg1;
-(void)didDetectKeywordWithResult:(id)arg1;

@end

