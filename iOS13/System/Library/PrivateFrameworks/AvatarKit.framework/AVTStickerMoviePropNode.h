/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <SceneKit/SCNNode.h>

@class AVAssetReader, AVAssetReaderTrackOutput, AVPlayerItem, AVPlayer, NSURL, AVAsset;

@interface AVTStickerMoviePropNode : SCNNode {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _assetReaderOutput;
	opaqueCMSampleBufferRef _currentSampleBuffer;
	BOOL _enableLoop;
	BOOL _isObservingPlayerItemStatus;
	BOOL _applyToEmission;
	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	/*^block*/id _loadCompletionHandler;
	NSURL* _movieURL;
	AVAsset* _movieAsset;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;                     //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id loadCompletionHandler;                        //@synthesize loadCompletionHandler=_loadCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL isObservingPlayerItemStatus;              //@synthesize isObservingPlayerItemStatus=_isObservingPlayerItemStatus - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                              //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) AVAsset * movieAsset;                          //@synthesize movieAsset=_movieAsset - In the implementation block
@property (assign,nonatomic) BOOL applyToEmission;                          //@synthesize applyToEmission=_applyToEmission - In the implementation block
@property (assign,nonatomic) BOOL enableLoop;                               //@synthesize enableLoop=_enableLoop - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setup;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(NSURL *)movieURL;
-(id)clone;
-(void)stickerGenerationWillBegin;
-(void)stickerGenerationDidEnd;
-(id)initWithMovieURL:(id)arg1 geometry:(id)arg2 applyToEmission:(BOOL)arg3 ;
-(void)setEnableLoop:(BOOL)arg1 ;
-(void)preparePlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(opaqueCMSampleBufferRef)copySampleBufferAtTime:(SCD_Struct_AV12)arg1 ;
-(void)setApplyToEmission:(BOOL)arg1 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(AVAsset *)movieAsset;
-(void)setMovieAsset:(AVAsset *)arg1 ;
-(BOOL)applyToEmission;
-(BOOL)enableLoop;
-(void)stopObservingPlayerItemStatusIfNeeded;
-(BOOL)isObservingPlayerItemStatus;
-(void)setIsObservingPlayerItemStatus:(BOOL)arg1 ;
-(void)setLoadCompletionHandler:(id)arg1 ;
-(void)startObservingPlayerItemStatus;
-(void)itemDidFinishPlaying:(id)arg1 ;
-(id)loadCompletionHandler;
@end

