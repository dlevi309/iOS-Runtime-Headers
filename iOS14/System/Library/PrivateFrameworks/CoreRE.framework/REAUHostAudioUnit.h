/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AUAudioUnit, AVAudioFormat;

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
	/*^block*/id _pullInputOverride;
	AVAudioFormat* _inputFormat;

}

@property (assign,nonatomic) unsigned desiredLayoutTag;                    //@synthesize desiredLayoutTag=_desiredLayoutTag - In the implementation block
@property (nonatomic,retain) AUAudioUnit * target;                         //@synthesize target=_target - In the implementation block
@property (assign,getter=isPrepared,nonatomic) BOOL prepared; 
@property (assign,getter=isRunning,nonatomic) BOOL running; 
@property (assign,nonatomic) float signalPresent; 
@property (nonatomic,copy) id pullInputOverride;                           //@synthesize pullInputOverride=_pullInputOverride - In the implementation block
@property (nonatomic,retain) AVAudioFormat * inputFormat;                  //@synthesize inputFormat=_inputFormat - In the implementation block
-(void)setTarget:(AUAudioUnit *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)setPrepared:(BOOL)arg1 ;
-(AVAudioFormat *)inputFormat;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(BOOL)isPrepared;
-(void)deallocateRenderResources;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isRunning;
-(AUAudioUnit *)target;
-(void)setInputFormat:(AVAudioFormat *)arg1 ;
-(void)dealloc;
-(void)prepareTargetAU;
-(id)pullInputOverride;
-(void)setDesiredLayoutTag:(unsigned)arg1 ;
-(float)signalPresent;
-(unsigned)desiredLayoutTag;
-(void)setPullInputOverride:(id)arg1 ;
@end

