/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioConnectionPoint * connectionPoint; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)pan;
-(AVAudioMixingImpl*)implementation;
-(AVAudio3DPoint)position;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(AVAudioConnectionPoint *)connectionPoint;
-(void)setRate:(float)arg1 ;
-(id)initWithImpl:(AVAudioMixingImpl*)arg1 ;
-(float)rate;
-(float)occlusion;
-(long long)sourceMode;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(float)reverbBlend;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(void)setSourceMode:(long long)arg1 ;
-(long long)pointSourceInHeadMode;
-(void)setPointSourceInHeadMode:(long long)arg1 ;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(void)setOcclusion:(float)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)setPan:(float)arg1 ;
-(float)volume;
-(void)dealloc;
@end

