/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray, NSString;

@interface RECaptureAudioUnit : AUAudioUnit {

	AVAudioPCMBuffer* _inputBuffer;
	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	shared_ptr<AudioStreamRecordingManager::StreamWriter>* _recordingStreamWriter;
	NSString* _captureName;

}

@property (nonatomic,copy) NSString * captureName;              //@synthesize captureName=_captureName - In the implementation block
-(void)deallocateRenderResources;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(NSString *)captureName;
-(void)setCaptureName:(NSString *)arg1 ;
@end

