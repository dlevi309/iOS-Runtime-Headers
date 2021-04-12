/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>

@class UIImage, PHMomentShare, PHAsset, NSData, NSDate, NSString, NSNumber;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset> {

	UIImage* _cachedImage;
	PHMomentShare* _momentShare;
	PHAsset* _underlyingAsset;

}

@property (nonatomic,readonly) PHMomentShare * momentShare;                          //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) PHAsset * underlyingAsset;                            //@synthesize underlyingAsset=_underlyingAsset - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewImageDataAvailable; 
@property (nonatomic,readonly) NSData * previewImageData; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFavorite;
-(long long)mediaType;
-(id)init;
-(BOOL)isInCloud;
-(CGSize)size;
-(NSDate *)localCreationDate;
-(unsigned long long)thumbnailIndex;
-(double)aspectRatio;
-(long long)playbackVariation;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(BOOL)representsBurst;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1 ;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 ;
-(UIImage *)previewImage;
-(NSData *)previewImageData;
-(PHMomentShare *)momentShare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2 ;
-(BOOL)isPreviewImageDataAvailable;
-(PHAsset *)underlyingAsset;
-(unsigned long long)pixelWidth;
@end

