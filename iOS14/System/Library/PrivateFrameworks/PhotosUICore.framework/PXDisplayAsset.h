/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDate, NSString, NSNumber;


@protocol PXDisplayAsset <PXDisplayThumbnailAsset>
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
@optional
-(NSString *)uuid;
-(NSNumber *)hdrGain;
-(double)aspectRatio;
-(long long)playbackVariation;
-(CGRect*)bestCropRectForAspectRatio:(double)arg1;
-(id)localizedDetailedGeoDescriptionForRTL:(BOOL)arg1;
-(unsigned long long)thumbnailVersion;
-(BOOL)isAutoPlaybackEligibilityEstimated;
-(id)destinationAssetCopyProperties;
-(unsigned long long)burstSelectionTypes;
-(long long)playbackStyle;
-(NSString *)localizedGeoDescription;
-(NSDate *)importDate;
-(CGRect*)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
-(CGRect*)suggestedCropForTargetSize:(CGSize)arg1 withFocusRegion:(CGRect)arg2;
-(double)duration;

@required
-(BOOL)isFavorite;
-(long long)mediaType;
-(BOOL)isInCloud;
-(NSDate *)localCreationDate;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(BOOL)representsBurst;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)pixelWidth;

@end

