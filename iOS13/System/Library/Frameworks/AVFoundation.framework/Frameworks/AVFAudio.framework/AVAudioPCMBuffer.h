/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic,readonly) NSArray * peakPowerPerChannel; 
@property (nonatomic,readonly) NSArray * averagePowerPerChannel; 
@property (nonatomic,readonly) unsigned frameCapacity; 
@property (assign,nonatomic) unsigned frameLength; 
@property (nonatomic,readonly) unsigned long long stride; 
@property (nonatomic,readonly) float* floatChannelData; 
@property (nonatomic,readonly) short* int16ChannelData; 
@property (nonatomic,readonly) int* int32ChannelData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)frameLength;
-(id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned)arg2 ;
-(void)setByteLength:(unsigned)arg1 ;
-(unsigned)frameCapacity;
-(void)setFrameLength:(unsigned)arg1 ;
-(unsigned long long)stride;
-(void)_initChannelPtrs;
-(float*)floatChannelData;
-(int*)int32ChannelData;
-(short*)int16ChannelData;
-(BOOL)appendDataFromBuffer:(id)arg1 ;
-(BOOL)appendDataFromBuffer:(id)arg1 channel:(long long)arg2 ;
-(id)splitIntoSingleChannelBuffers;
-(NSArray *)averagePowerPerChannel;
-(NSArray *)peakPowerPerChannel;
-(id)calculatePower:(unsigned long long)arg1 ;
-(float)calculatePower:(unsigned long long)arg1 forFloatData:(float*)arg2 stride:(long long)arg3 frameLength:(unsigned)arg4 ;
@end

