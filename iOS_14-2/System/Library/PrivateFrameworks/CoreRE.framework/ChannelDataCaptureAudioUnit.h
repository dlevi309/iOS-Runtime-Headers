/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray;

@interface ChannelDataCaptureAudioUnit : AUAudioUnit {

	AVAudioPCMBuffer* _inputBuffer;
	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	array<std::__1::vector<float, std::__1::allocator<float> >, 2>* _buffers;
	vector<int, std::__1::allocator<int> >* capturedPositions;
	AVAudioPCMBuffer* capturedBuffer;

}
-(id)stopRecording;
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)startRecording:(int)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(void)deallocateRenderResources;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
@end

