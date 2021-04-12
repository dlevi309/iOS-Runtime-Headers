/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PUDisplayAsset.h>
#import <libobjc.A.dylib/PXPhotoKitAdjustedDisplayAsset.h>

@protocol PXDisplaySuggestion, PXDisplayAsset;
@class NSString, PHAsset, CLLocation, NSDate, NSNumber;

@interface PXForYouSuggestionDisplayAsset : NSObject <PUDisplayAsset, PXPhotoKitAdjustedDisplayAsset> {

	BOOL _shouldInvert;
	PHAsset* _photoKitAsset;
	NSString* _adjustedContentIdentifier;
	id<PXDisplaySuggestion> _suggestion;
	id<PXDisplayAsset> _keyAsset;

}

@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PX8 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PX8 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_PX8 videoKeyFrameSourceTime; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldInvert;                                     //@synthesize shouldInvert=_shouldInvert - In the implementation block
@property (nonatomic,readonly) id<PXDisplaySuggestion> suggestion;                    //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;                           //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) BOOL isApplied; 
@property (nonatomic,readonly) BOOL wantsAdjustments; 
@property (nonatomic,readonly) NSString * adjustedContentIdentifier;                  //@synthesize adjustedContentIdentifier=_adjustedContentIdentifier - In the implementation block
@property (nonatomic,readonly) PHAsset * photoKitAsset;                               //@synthesize photoKitAsset=_photoKitAsset - In the implementation block
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
-(NSDate *)modificationDate;
-(NSString *)uuid;
-(BOOL)isHidden;
-(CLLocation *)location;
-(unsigned long long)originalFilesize;
-(SCD_Struct_PX8)photoIrisStillDisplayTime;
-(SCD_Struct_PX8)photoIrisVideoDuration;
-(NSString *)uniformTypeIdentifier;
-(BOOL)isLivePhoto;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)hasPhotoColorAdjustments;
-(SCD_Struct_PX8)videoKeyFrameSourceTime;
-(NSString *)localizedGeoDescription;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;
-(unsigned long long)pixelHeight;
-(double)duration;
-(unsigned long long)pixelWidth;
-(BOOL)isFavorite;
-(NSString *)uuid;
-(id<PXDisplayAsset>)keyAsset;
-(unsigned long long)mediaType;
-(BOOL)isInCloud;
-(BOOL)isApplied;
-(NSDate *)localCreationDate;
-(id<PXDisplaySuggestion>)suggestion;
-(unsigned long long)thumbnailIndex;
-(double)aspectRatio;
-(long long)playbackVariation;
-(PHAsset *)photoKitAsset;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(id)inverseSuggestionAsset;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2 ;
-(BOOL)wantsAdjustments;
-(NSString *)adjustedContentIdentifier;
-(BOOL)representsBurst;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(BOOL)arg3 ;
-(BOOL)isEqualToSuggestionDisplayAsset:(id)arg1 ;
-(BOOL)shouldInvert;
-(id)_computedPortraitEffectSettingsForCompositionController:(id)arg1 ;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1 ;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 ;
-(BOOL)isAnimatedImage;
-(BOOL)needsDeferredProcessing;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)pixelWidth;
@end

