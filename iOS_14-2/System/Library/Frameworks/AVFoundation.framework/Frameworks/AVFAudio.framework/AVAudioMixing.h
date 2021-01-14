/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(void)setVolume:(float)arg1;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
-(float)volume;

@end

