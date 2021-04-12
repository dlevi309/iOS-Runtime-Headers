/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)modificationDate;
-(BOOL)isFavorite;
-(NSURL *)providedVideoURL;
-(NSURL *)providedFullsizeRenderVideoURL;
-(PFAssetAdjustments *)assetAdjustments;
-(unsigned long long)mediaType;
-(CLLocation *)location;
-(double)aspectRatio;
-(long long)playbackVariation;
-(BOOL)isLivePhoto;
-(BOOL)representsBurst;
-(NSString *)burstIdentifier;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)numberOfRepresentedAssets;
-(BOOL)isHDR;
-(NSString *)identifier;
-(double)duration;
-(unsigned long long)pixelWidth;
-(BOOL)isLivePhotoPlaceholder;
-(SCD_Struct_AE0)livePhotoSynchronizedDisplayTime;
-(SCD_Struct_AE0)livePhotoDuration;
-(UIImage *)providedPreviewImage;
-(NSDictionary *)providedImageMetadata;
-(NSURL *)providedFullsizeImageURL;
-(NSURL *)providedFullsizeRenderImageURL;
-(PHLivePhoto *)providedLivePhoto;
-(AVAsset *)providedAVAsset;
-(AVAudioMix *)providedAudioMix;

@end

