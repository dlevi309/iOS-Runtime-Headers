/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject {

	BOOL _didBeginObservingOutputVolume;
	/*^block*/id _outputVolumeChangeHandler;
	AVAudioSession* _audioSession;

}

@property (nonatomic,readonly) AVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,copy) id outputVolumeChangeHandler;                   //@synthesize outputVolumeChangeHandler=_outputVolumeChangeHandler - In the implementation block
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) float outputVolume; 
+(id)auxiliarySession;
+(id)sharedAmbientInstance;
+(void)sharedAmbientInstanceWithLoadHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)_init;
-(NSString *)category;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(AVAudioSession *)audioSession;
-(float)outputVolume;
-(void)setOutputVolumeChangeHandler:(id)arg1 ;
-(BOOL)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)_endObservingOutputVolumeIfNeeded;
-(id)outputVolumeChangeHandler;
@end

