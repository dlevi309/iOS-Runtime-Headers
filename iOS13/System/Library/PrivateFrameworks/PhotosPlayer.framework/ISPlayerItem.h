/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, AVVideoComposition, ISPlayerContent, AVPlayerItem, NSNumber, NSString, NSError, AVAssetImageGenerator, ISAsset;

@interface ISPlayerItem : ISObservable {

	void* _ivarQueueIdentifier;
	void* _workQueueIdentifier;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _ivarQueue_loadingTarget;
	AVVideoComposition* _ivarQueue_videoComposition;
	long long _ivarQueue_videoPlayerItemRequestID;
	BOOL _ivarQueue_aggressivelyCacheVideoFrames;
	BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
	BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
	BOOL _ivarQueue_contentSupportsVitality;
	SCD_Struct_IS1 _ivarQueue_playerItemPhotoTime;
	SCD_Struct_IS1 _ivarQueue_playerItemDuration;
	ISPlayerContent* _ivarQueue_playerContent;
	long long _ivarQueue_status;
	AVPlayerItem* _ivarQueue_videoPlayerItem;
	NSNumber* _ivarQueue_variationIdentifier;
	NSString* _ivarQueue_minimumClientVersion;
	NSError* _ivarQueue_error;
	SCD_Struct_IS5 _ivarQueue_isValid;
	AVAssetImageGenerator* _workQueue_imageGenerator;
	BOOL _workQueue_isGeneratingOffsetImage;
	BOOL __loadingCancelled;
	ISAsset* _asset;
	CGSize _targetSize;

}

@property (assign,setter=_setStatus:,nonatomic) long long status; 
@property (setter=_setError:,nonatomic,retain) NSError * error; 
@property (setter=_setPlayerContent:,nonatomic,retain) ISPlayerContent * playerContent; 
@property (assign,setter=_setLoadingCancelled:,getter=_isLoadingCancelled,nonatomic) BOOL _loadingCancelled;              //@synthesize _loadingCancelled=__loadingCancelled - In the implementation block
@property (assign,setter=_setVideoPlayerItemRequestID:,nonatomic) long long _videoPlayerItemRequestID; 
@property (setter=_setVariationIdentifier:,nonatomic,retain) NSNumber * _variationIdentifier; 
@property (setter=_setMinimumClientVersion:,nonatomic,retain) NSString * _minimumClientVersion; 
@property (assign,nonatomic) BOOL contentSupportsVitality; 
@property (assign,nonatomic) BOOL reversesMoreVideoFramesInMemory; 
@property (assign,nonatomic) BOOL aggressivelyCacheVideoFrames; 
@property (assign,nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback; 
@property (nonatomic,readonly) ISAsset * asset;                                                                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                                                         //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long loadingTarget; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
+(id)playerItemWithAsset:(id)arg1 targetSize:(CGSize)arg2 ;
+(long long)currentClientVersion;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(long long)status;
-(ISAsset *)asset;
-(BOOL)_needsUpdate;
-(CGSize)targetSize;
-(void)cancelLoading;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(BOOL)reversesMoreVideoFramesInMemory;
-(BOOL)decodesAllFramesDuringOrdinaryPlayback;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(void)_updateIfNeeded;
-(BOOL)_isOnIvarQueue;
-(void)_performIvarRead:(/*^block*/id)arg1 ;
-(void)_performIvarWrite:(/*^block*/id)arg1 ;
-(id)_videoPlayerItem;
-(void)_invalidateStatus;
-(NSString *)_minimumClientVersion;
-(void)_updateStatusIfNeeded;
-(void)setLoadingTarget:(long long)arg1 ;
-(void)_cancelLoading;
-(void)_invalidatePlayerContent;
-(void)_updatePlayerContentIfNeeded;
-(long long)loadingTarget;
-(id)initWithAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)resetAVObjects;
-(ISPlayerContent *)playerContent;
-(void)discardContentBelowLoadingTarget;
-(void)setAggressivelyCacheVideoFrames:(BOOL)arg1 ;
-(NSNumber *)_variationIdentifier;
-(long long)_videoPlayerItemRequestID;
-(void)_setVideoPlayerItemRequestID:(long long)arg1 ;
-(void)_reloadAllContent;
-(BOOL)aggressivelyCacheVideoFrames;
-(void)_setPlayerContent:(id)arg1 ;
-(void)_invalidateMinimumClientVersion;
-(BOOL)_isMinimumClientVersionValid;
-(void)_updateMinimumClientVersionIfNeeded;
-(void)_setMinimumClientVersion:(id)arg1 ;
-(void)_invalidatePlaybackStyleIdentifier;
-(BOOL)_isPlaybackStyleIdentifierValid;
-(void)_updatePlaybackStyleIdentifierIfNeeded;
-(void)_setVariationIdentifier:(id)arg1 ;
-(BOOL)_isContentSupportsVitalityValid;
-(void)_invalidateContentSupportsVitality;
-(void)_updateContentSupportsVitalityIfNeeded;
-(void)setContentSupportsVitality:(BOOL)arg1 ;
-(BOOL)contentSupportsVitality;
-(void)_invalidateVideoPlayerItem;
-(BOOL)_isVideoPlayerItemValid;
-(void)_updateVideoPlayerItemIfNeeded;
-(void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoDuration:(SCD_Struct_IS1)arg3 error:(id)arg4 ;
-(void)_setVideoPlayerItem:(id)arg1 videoDuration:(SCD_Struct_IS1)arg2 ;
-(BOOL)_isPlayerContentValid;
-(BOOL)_isStatusVaild;
-(void)_performWork:(/*^block*/id)arg1 sync:(BOOL)arg2 ;
-(void)_performWork:(/*^block*/id)arg1 ;
-(BOOL)_isOnWorkQueue;
-(void)_assertOnWorkQueue;
-(void)_assertOnIvarQueue;
-(BOOL)_isLoadingCancelled;
-(void)_setLoadingCancelled:(BOOL)arg1 ;
@end

