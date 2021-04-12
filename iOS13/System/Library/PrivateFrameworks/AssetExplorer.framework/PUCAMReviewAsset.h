/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

@class NSString, CLLocation, NSDate, UIImage, NSDictionary, NSURL, PHLivePhoto, AVAsset, AVAudioMix, PFAssetAdjustments;


@protocol PUCAMReviewAsset <PUDisplayAsset>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (nonatomic,readonly) double duration; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (getter=isLivePhotoPlaceholder,nonatomic,readonly) BOOL livePhotoPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_AE0 livePhotoSynchronizedDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_AE0 livePhotoDuration; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * providedPreviewImage; 
@property (nonatomic,readonly) NSDictionary * providedImageMetadata; 
@property (nonatomic,readonly) NSURL * providedFullsizeImageURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderImageURL; 
@property (nonatomic,readonly) PHLivePhoto * providedLivePhoto; 
@property (nonatomic,readonly) AVAsset * providedAVAsset; 
@property (nonatomic,readonly) AVAudioMix * providedAudioMix; 
@property (nonatomic,readonly) NSURL * providedVideoURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderVideoURL; 
@property (nonatomic,readonly) PFAssetAdjustments * assetAdjustments; 
@required
-(NSString *)identifier;
-(double)duration;
-(NSDate *)modificationDate;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(double)aspectRatio;
-(unsigned long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(long long)playbackVariation;
-(long long)playbackStyle;
-(NSString *)burstIdentifier;
-(BOOL)isLivePhoto;
-(BOOL)isHDR;
-(BOOL)representsBurst;
-(unsigned long long)mediaSubtypes;
-(BOOL)isLivePhotoPlaceholder;
-(SCD_Struct_AE0)livePhotoSynchronizedDisplayTime;
-(SCD_Struct_AE0)livePhotoDuration;
-(unsigned long long)numberOfRepresentedAssets;
-(UIImage *)providedPreviewImage;
-(NSDictionary *)providedImageMetadata;
-(NSURL *)providedFullsizeImageURL;
-(NSURL *)providedFullsizeRenderImageURL;
-(PHLivePhoto *)providedLivePhoto;
-(AVAsset *)providedAVAsset;
-(AVAudioMix *)providedAudioMix;
-(NSURL *)providedVideoURL;
-(NSURL *)providedFullsizeRenderVideoURL;
-(PFAssetAdjustments *)assetAdjustments;

@end

