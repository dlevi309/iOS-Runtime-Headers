/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedPlaybackInstance;
+(void)sharedPlaybackInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(void)sharedPhotosOneUpInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(id)sharedPhotosOneUpInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(void)setOutputVolumeChangeHandler:(id)arg1 ;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSString *)category;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)_endObservingOutputVolumeIfNeeded;
-(id)outputVolumeChangeHandler;
-(id)_init;
-(BOOL)setCategory:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(AVAudioSession *)audioSession;
-(void)dealloc;
-(float)outputVolume;
@end

