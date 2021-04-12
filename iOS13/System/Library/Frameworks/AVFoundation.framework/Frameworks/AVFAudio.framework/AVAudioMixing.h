/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;

@end

