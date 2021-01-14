/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PV29 _currentPlayerItemRange;
	PVFrameSet* _cacheImageFrameSet;
	HGSynchronizable* _cacheLock;
	SCD_Struct_PV22 _assetDuration;
	float _assetRate;
	SCD_Struct_PV29 _videoTrackRange;
	float _videoTrackFrameRate;
	SCD_Struct_PV22 _videoTrackFrameDelta;
	SCD_Struct_PV30 _videoTrackDimensions;
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVAsset *)asset;
-(void)pause;
-(void)play;
-(SCD_Struct_PV22)itemTimeForHostTime:(double)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)seekToTime:(SCD_Struct_PV22)arg1 ;
-(int)status;
-(void)dealloc;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(void)finishReading;
-(id)initWithAVAsset:(id)arg1 ;
-(id)imageBufferForHostTime:(double)arg1 ;
-(void)setLoopPlayback:(BOOL)arg1 ;
-(void)setRepeatFrames:(BOOL)arg1 ;
-(void)setupPlayer;
-(void)stopObservers;
-(BOOL)loopPlayback;
-(CVBufferRef)_copyPixelBufferForHostTime:(double)arg1 ;
-(BOOL)repeatFrames;
-(void)startObservers;
-(CVBufferRef)_copyPixelBufferForTime:(SCD_Struct_PV22)arg1 ;
-(void)playerItemTimeJumped:(id)arg1 ;
-(void)playerItemFailedToPlayToEnd:(id)arg1 ;
-(void)playerItemPlaybackStalled:(id)arg1 ;
@end

