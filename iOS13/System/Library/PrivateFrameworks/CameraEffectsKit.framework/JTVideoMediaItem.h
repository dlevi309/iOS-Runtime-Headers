/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTAssetMediaItem.h>

@class AVAsset, JTThumbnailGenerator, JTVideoMediaUtils;

@interface JTVideoMediaItem : JTAssetMediaItem {

	BOOL _isHighFrameRate;
	BOOL _capturedByInAppCamera;
	BOOL _originalIsHEVC4k;
	int _mediaStartOffset;
	AVAsset* _avAsset;
	JTThumbnailGenerator* _thumbnailGenerator;
	JTVideoMediaUtils* _videoMediaItemUtils;

}

@property (nonatomic,retain) AVAsset * avAsset;                                      //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,retain) JTThumbnailGenerator * thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (nonatomic,retain) JTVideoMediaUtils * videoMediaItemUtils;                //@synthesize videoMediaItemUtils=_videoMediaItemUtils - In the implementation block
@property (assign,nonatomic) BOOL originalIsHEVC4k;                                  //@synthesize originalIsHEVC4k=_originalIsHEVC4k - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (assign,nonatomic) int mediaStartOffset;                                   //@synthesize mediaStartOffset=_mediaStartOffset - In the implementation block
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) BOOL isHighFrameRate;                                 //@synthesize isHighFrameRate=_isHighFrameRate - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoTracks; 
@property (nonatomic,readonly) BOOL hasAudioTracks; 
@property (assign,nonatomic) BOOL capturedByInAppCamera;                             //@synthesize capturedByInAppCamera=_capturedByInAppCamera - In the implementation block
@property (nonatomic,readonly) BOOL needsDerivativeMedia; 
@property (nonatomic,readonly) BOOL isUnsupportedAudio; 
+(void)videoMediaItemWithAssetIdentifier:(id)arg1 progressHandlerBlock:(/*^block*/id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)videoMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(id)info;
-(void)commonInit;
-(id)assetURL;
-(CGSize)naturalSize;
-(AVAsset *)avAsset;
-(JTThumbnailGenerator *)thumbnailGenerator;
-(void)setThumbnailGenerator:(JTThumbnailGenerator *)arg1 ;
-(float)frameRate;
-(int)durationAt30fps;
-(BOOL)needsDerivativeMedia;
-(void)setMediaStartOffset:(int)arg1 ;
-(CGSize)naturalSizeWithTransform;
-(int)mediaStartOffset;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(BOOL)hasAudibleCharacteristic;
-(BOOL)isUnsupportedAudio;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(void)mediaserverdCrashed;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasVisualCharacteristic;
-(void)setAvAsset:(AVAsset *)arg1 ;
-(void)cacheAssetInformation;
-(JTVideoMediaUtils *)videoMediaItemUtils;
-(void)loadAVAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateThumbnailWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVideoMediaItemUtils:(JTVideoMediaUtils *)arg1 ;
-(void)setAssetIs4kHEVC:(BOOL)arg1 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(BOOL)isHighFrameRate;
-(BOOL)capturedByInAppCamera;
-(void)setCapturedByInAppCamera:(BOOL)arg1 ;
-(BOOL)originalIsHEVC4k;
-(void)setOriginalIsHEVC4k:(BOOL)arg1 ;
@end

