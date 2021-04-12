/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSAudioMeterProviding <NSObject>
@required
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1;
-(float)peakPowerForChannel:(unsigned long long)arg1;
-(void)setMeteringEnabled:(BOOL)arg1;

@end

