/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AUAudioUnit;

@interface REAUHostAudioUnit : AUAudioUnit {

	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	/*^block*/id _cachedRenderBlock;
	atomic<bool> _running;
	BOOL _prepared;
	BOOL _shouldPrepareTargetOnAllocate;
	mutex _targetPreparationMutex;
	double _currentHostingSampleRate;
	unsigned _currentHostingMaxFramesToRender;
	AudioBufferList* _abl;
	float* _buffer;
	atomic<float> _signalPresent;
	double _signalPresentDecayPerSample;
	shared_ptr<AudioStreamRecordingManager::StreamWriter>* _recordingStreamWriter;
	unsigned _desiredLayoutTag;
	AUAudioUnit* _target;

}

@property (assign,nonatomic) unsigned desiredLayoutTag;                    //@synthesize desiredLayoutTag=_desiredLayoutTag - In the implementation block
@property (nonatomic,retain) AUAudioUnit * target;                         //@synthesize target=_target - In the implementation block
@property (assign,getter=isPrepared,nonatomic) BOOL prepared; 
@property (assign,getter=isRunning,nonatomic) BOOL running; 
@property (assign,nonatomic) float signalPresent; 
-(void)dealloc;
-(void)setTarget:(AUAudioUnit *)arg1 ;
-(AUAudioUnit *)target;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)isPrepared;
-(void)deallocateRenderResources;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)setPrepared:(BOOL)arg1 ;
-(void)prepareTargetAU;
-(void)setDesiredLayoutTag:(unsigned)arg1 ;
-(float)signalPresent;
-(unsigned)desiredLayoutTag;
@end

