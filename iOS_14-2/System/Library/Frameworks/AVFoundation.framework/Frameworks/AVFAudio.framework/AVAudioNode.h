/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioEngine, AVAudioTime, AUAudioUnit;

@interface AVAudioNode : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioNodeImplBase* impl; 
@property (nonatomic,readonly) AVAudioEngine * engine; 
@property (nonatomic,readonly) unsigned long long numberOfInputs; 
@property (nonatomic,readonly) unsigned long long numberOfOutputs; 
@property (nonatomic,readonly) AVAudioTime * lastRenderTime; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) double latency; 
@property (nonatomic,readonly) double outputPresentationLatency; 
-(float)pan;
-(id)clock;
-(AVAudioEngine *)engine;
-(AVAudio3DPoint)position;
-(BOOL)resetImpl:(AVAudioNodeImplBase*)arg1 ;
-(void)setVolume:(float)arg1 ;
-(AUAudioUnit *)AUAudioUnit;
-(id)init;
-(id)outputFormatForBus:(unsigned long long)arg1 ;
-(BOOL)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)inputFormatForBus:(unsigned long long)arg1 ;
-(BOOL)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)nameForInputBus:(unsigned long long)arg1 ;
-(id)nameForOutputBus:(unsigned long long)arg1 ;
-(AVAudioTime *)lastRenderTime;
-(double)outputPresentationLatency;
-(unsigned long long)numberOfInputs;
-(unsigned long long)numberOfOutputs;
-(void)setNumberOfInputs:(unsigned long long)arg1 ;
-(void)setNumberOfOutputs:(unsigned long long)arg1 ;
-(void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)removeTapOnBus:(unsigned long long)arg1 ;
-(void)setRate:(float)arg1 ;
-(id)initWithImpl:(AVAudioNodeImplBase*)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(double)latency;
-(float)rate;
-(float)occlusion;
-(long long)sourceMode;
-(void)didAttachToEngine:(id)arg1 ;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(void)didDetachFromEngine:(id)arg1 error:(id*)arg2 ;
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
-(void)reset;
-(void)setPan:(float)arg1 ;
-(float)volume;
-(void)dealloc;
-(AVAudioNodeImplBase*)impl;
@end

