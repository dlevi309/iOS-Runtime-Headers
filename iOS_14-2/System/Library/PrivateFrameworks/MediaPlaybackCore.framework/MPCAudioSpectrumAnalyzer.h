/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class MPCPlaybackEngine, NSMutableArray;

@interface MPCAudioSpectrumAnalyzer : NSObject {

	unsigned long long _frequencyBuffersSize;
	float* _intermediateBuffer;
	unsigned long long _windowSize;
	DSPSplitComplex* _fftBuffer;
	opaqueMTAudioProcessingTapRef _audioProcessingTap;
	float _sampleRate;
	float _powerLevel;
	MPCPlaybackEngine* _playbackEngine;
	OpaqueFFTSetupRef _fftSetup;
	float* _window;
	NSMutableArray* _observers;
	MPCAudioSpectrumAnalyzer* _selfRef;

}

@property (assign,nonatomic) float powerLevel;                                         //@synthesize powerLevel=_powerLevel - In the implementation block
@property (assign,nonatomic) float sampleRate;                                         //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) OpaqueFFTSetupRef fftSetup;                               //@synthesize fftSetup=_fftSetup - In the implementation block
@property (assign,nonatomic) float* window;                                            //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MPCAudioSpectrumAnalyzer * selfRef;                       //@synthesize selfRef=_selfRef - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)_analyzeSamples:(AudioBufferList*)arg1 numberFrames:(long long)arg2 timeRange:(SCD_Struct_MP18)arg3 ;
-(void)_destroyFFTSetup;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(NSMutableArray *)observers;
-(void)setWindow:(float*)arg1 ;
-(void)_createAudioTap;
-(BOOL)_shouldAttachToPlayerItem:(id)arg1 ;
-(void)setPowerLevel:(float)arg1 ;
-(float)powerLevel;
-(void)_resizeBuffers:(unsigned long long)arg1 ;
-(void)_itemAssetLoadedNotification:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(float*)window;
-(void)setSampleRate:(float)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_destroyAudioTap;
-(void)setFftSetup:(OpaqueFFTSetupRef)arg1 ;
-(void)reset;
-(OpaqueFFTSetupRef)fftSetup;
-(void)_attachAudioTapToPlayerItem:(id)arg1 ;
-(void)setSelfRef:(MPCAudioSpectrumAnalyzer *)arg1 ;
-(void)_freeBuffers;
-(MPCPlaybackEngine *)playbackEngine;
-(void)_analyzeFrequencies:(AudioBufferList*)arg1 numberFrames:(long long)arg2 timeRange:(SCD_Struct_MP18)arg3 observers:(id)arg4 ;
-(MPCAudioSpectrumAnalyzer *)selfRef;
-(void)_itemInsertedNotification:(id)arg1 ;
-(void)configurePlayerItem:(id)arg1 ;
-(float)sampleRate;
-(void)dealloc;
@end

