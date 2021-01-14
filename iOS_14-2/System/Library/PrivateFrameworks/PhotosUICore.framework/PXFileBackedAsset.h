/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PUDisplayAsset.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>
#import <libobjc.A.dylib/PXMetadataAsset.h>

@class NSString, CLLocation, NSDate, _PXFileBackedAssetMetadata, PXFileBackedAssetDescription, NSURL, NSNumber;

@interface PXFileBackedAsset : NSObject <PUDisplayAsset, PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {

	_PXFileBackedAssetMetadata* _metadata;
	PXFileBackedAssetDescription* _description;
	NSString* _fileBackedUUID;
	NSURL* _url;
	NSString* _uniformTypeIdentifier;

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
@property (nonatomic,copy,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;                      //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
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
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
@property (nonatomic,readonly) BOOL cloudIsDeletable; 
+(id)_globalCache;
+(id)_locationFromImageProperties:(id)arg1 ;
+(id)_creationDateFromImageProperties:(id)arg1 ;
+(id)_exifDateFormatter;
-(NSDate *)modificationDate;
-(BOOL)isHidden;
-(unsigned long long)originalFilesize;
-(SCD_Struct_PX8)photoIrisStillDisplayTime;
-(SCD_Struct_PX8)photoIrisVideoDuration;
-(BOOL)isLivePhoto;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)hasPhotoColorAdjustments;
-(NSString *)localizedGeoDescription;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;
-(unsigned long long)pixelHeight;
-(double)duration;
-(unsigned long long)pixelWidth;
-(BOOL)isFavorite;
-(NSString *)uuid;
-(double)weightUsingCriterion:(long long)arg1 ;
-(CGPoint)positionOffset;
-(CGRect)preferredCropRect;
-(unsigned long long)mediaType;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isInCloud;
-(BOOL)isEqualToFileBackedAsset:(id)arg1 ;
-(void)_loadFileMetadataIfNeeded;
-(CGSize)size;
-(CLLocation *)location;
-(NSDate *)localCreationDate;
-(unsigned long long)thumbnailIndex;
-(NSString *)uniformTypeIdentifier;
-(double)aspectRatio;
-(double)weight;
-(long long)playbackVariation;
-(NSURL *)url;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(BOOL)representsBurst;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(CGAffineTransform)transform;
-(NSString *)description;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1 ;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(BOOL)isAnimatedImage;
-(CGRect)acceptableCropRect;
-(id)initWithDescription:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)pixelWidth;
@end

