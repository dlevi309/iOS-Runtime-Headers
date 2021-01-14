/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTAssetMediaItem.h>

@class AVAsset, JTVideoMediaUtils;

@interface JFXVideoMediaItem : JTAssetMediaItem {

	BOOL _isHighFrameRate;
	BOOL _capturedByInAppCamera;
	BOOL _originalIsHEVC4k;
	int _mediaStartOffset;
	AVAsset* _avAsset;
	JTVideoMediaUtils* _videoMediaItemUtils;

}

@property (nonatomic,retain) AVAsset * avAsset;                                    //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,retain) JTVideoMediaUtils * videoMediaItemUtils;              //@synthesize videoMediaItemUtils=_videoMediaItemUtils - In the implementation block
@property (assign,nonatomic) BOOL originalIsHEVC4k;                                //@synthesize originalIsHEVC4k=_originalIsHEVC4k - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (assign,nonatomic) int mediaStartOffset;                                 //@synthesize mediaStartOffset=_mediaStartOffset - In the implementation block
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) BOOL isHighFrameRate;                               //@synthesize isHighFrameRate=_isHighFrameRate - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoTracks; 
@property (nonatomic,readonly) BOOL hasAudioTracks; 
@property (assign,nonatomic) BOOL capturedByInAppCamera;                           //@synthesize capturedByInAppCamera=_capturedByInAppCamera - In the implementation block
@property (nonatomic,readonly) BOOL needsDerivativeMedia; 
@property (nonatomic,readonly) BOOL isUnsupportedAudio; 
+(void)videoMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)colorSpace;
-(id)info;
-(CGSize)naturalSize;
-(id)assetURL;
-(void)commonInit;
-(CGAffineTransform)transform;
-(float)frameRate;
-(void)setAvAsset:(AVAsset *)arg1 ;
-(unsigned long long)hash;
-(AVAsset *)avAsset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)mediaStartOffset;
-(BOOL)hasAudibleCharacteristic;
-(BOOL)isUnsupportedAudio;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(int)durationAt30fps;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasVisualCharacteristic;
-(CGSize)naturalSizeWithTransform;
-(void)mediaserverdCrashed;
-(void)cacheAssetInformation;
-(JTVideoMediaUtils *)videoMediaItemUtils;
-(BOOL)needsDerivativeMedia;
-(void)loadAVAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMediaStartOffset:(int)arg1 ;
-(void)setVideoMediaItemUtils:(JTVideoMediaUtils *)arg1 ;
-(void)reloadAVAsset;
-(void)setAssetIs4kHEVC:(BOOL)arg1 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(BOOL)isHighFrameRate;
-(BOOL)capturedByInAppCamera;
-(void)setCapturedByInAppCamera:(BOOL)arg1 ;
-(BOOL)originalIsHEVC4k;
-(void)setOriginalIsHEVC4k:(BOOL)arg1 ;
@end

