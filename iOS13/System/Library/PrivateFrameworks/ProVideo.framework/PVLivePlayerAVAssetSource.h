/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>
#import <libobjc.A.dylib/PVLivePlayerSource.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVAsset, AVQueuePlayer, AVPlayerLooper, NSArray, PVFrameSet, NSObject, NSString;

@interface PVLivePlayerAVAssetSource : NSObject <AVPlayerItemOutputPullDelegate, PVLivePlayerSource> {

	AVAsset* _asset;
	AVQueuePlayer* _playerQueue;
	AVPlayerLooper* _playerLooper;
	NSArray* _playerItemOutputs;
	int _currentPlayerItemOutput;
	SCD_Struct_PV27 _currentPlayerItemRange;
	PVFrameSet* _cacheImageFrameSet;
	HGSynchronizable* _cacheLock;
	SCD_Struct_PV20 _assetDuration;
	float _assetRate;
	SCD_Struct_PV27 _videoTrackRange;
	float _videoTrackFrameRate;
	SCD_Struct_PV20 _videoTrackFrameDelta;
	SCD_Struct_PV28 _videoTrackDimensions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_semaphore> _playbackReadyCondVar;
	NSObject*<OS_dispatch_semaphore> _outputReadyCondVar;
	BOOL loopPlayback;
	BOOL repeatFrames;
	int status;

}

@property (assign) int status; 
@property (assign,nonatomic) BOOL loopPlayback; 
@property (assign,nonatomic) BOOL repeatFrames; 
@property (nonatomic,readonly) AVAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(AVAsset *)asset;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_PV20)arg1 ;
-(SCD_Struct_PV20)itemTimeForHostTime:(double)arg1 ;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(id)initWithAVAsset:(id)arg1 ;
-(void)finishReading;
-(id)imageBufferForHostTime:(double)arg1 ;
-(void)setLoopPlayback:(BOOL)arg1 ;
-(void)setRepeatFrames:(BOOL)arg1 ;
-(void)setupPlayer;
-(void)stopObservers;
-(BOOL)loopPlayback;
-(CVBufferRef)_copyPixelBufferForHostTime:(double)arg1 ;
-(BOOL)repeatFrames;
-(void)startObservers;
-(CVBufferRef)_copyPixelBufferForTime:(SCD_Struct_PV20)arg1 ;
-(void)playerItemTimeJumped:(id)arg1 ;
-(void)playerItemFailedToPlayToEnd:(id)arg1 ;
-(void)playerItemPlaybackStalled:(id)arg1 ;
@end

