/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PUCAMReviewAsset.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, CLLocation, NSDate, UIImage, NSDictionary, NSURL, PHLivePhoto, AVAsset, AVAudioMix, PFAssetAdjustments, NSObject, NSMutableDictionary, NSMutableSet;

@interface AEAssetPackage : NSObject <PUCAMReviewAsset, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> __packageContentQueue;
	NSMutableDictionary* __contentQueue_finalURLs;
	NSMutableDictionary* __contentQueueSidecar;
	NSMutableSet* __contentQueue_suppressedTypes;

}

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
@property (nonatomic,readonly) NSString * uuid; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_AE0 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_AE0 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_AE0 videoKeyFrameSourceTime; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _packageContentQueue;                    //@synthesize _packageContentQueue=__packageContentQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _contentQueue_finalURLs;                        //@synthesize _contentQueue_finalURLs=__contentQueue_finalURLs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _contentQueueSidecar;                           //@synthesize _contentQueueSidecar=__contentQueueSidecar - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _contentQueue_suppressedTypes;                         //@synthesize _contentQueue_suppressedTypes=__contentQueue_suppressedTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)modificationDate;
-(BOOL)isFavorite;
-(NSURL *)providedVideoURL;
-(NSURL *)providedFullsizeRenderVideoURL;
-(PFAssetAdjustments *)assetAdjustments;
-(NSString *)uuid;
-(BOOL)isHidden;
-(unsigned long long)mediaType;
-(id)init;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)originalFilesize;
-(NSDate *)localCreationDate;
-(SCD_Struct_AE0)photoIrisStillDisplayTime;
-(SCD_Struct_AE0)photoIrisVideoDuration;
-(NSString *)uniformTypeIdentifier;
-(double)aspectRatio;
-(long long)playbackVariation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isLivePhoto;
-(BOOL)representsBurst;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(BOOL)hasPhotoColorAdjustments;
-(NSString *)description;
-(NSString *)burstIdentifier;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(unsigned long long)isContentEqualTo:(id)arg1 ;
-(NSString *)localizedGeoDescription;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(unsigned long long)numberOfRepresentedAssets;
-(BOOL)isAnimatedImage;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHDR;
-(NSString *)identifier;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 sidecar:(id)arg3 ;
-(id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 suppressedTypes:(id)arg3 sidecar:(id)arg4 ;
-(id)durableURLsSnapshot;
-(id)durableURLsSnapshotApplyingSuppression:(BOOL)arg1 ;
-(id)sidecarSnapshot;
-(id)suppressedTypesSnapshot;
-(id)currentURLForType:(id)arg1 ;
-(id)_sidecarObjectForKey:(id)arg1 ;
-(id)sidecarPropertyListForKey:(id)arg1 ;
-(id)sidecarNumberForKey:(id)arg1 ;
-(id)sidecarDateForKey:(id)arg1 ;
-(SCD_Struct_AE0)sidecarTimeForKey:(id)arg1 ;
-(id)sidecarImageForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_packageContentQueue;
-(NSMutableDictionary *)_contentQueue_finalURLs;
-(NSMutableDictionary *)_contentQueueSidecar;
-(NSMutableSet *)_contentQueue_suppressedTypes;
-(BOOL)isURLSuppressedForType:(id)arg1 ;
-(id)reviewAssetFromPackageMetadata;
-(BOOL)containsLivePhotoContent;
-(BOOL)containsSuppressedLivePhoto;
-(long long)mediaOrigin;
-(id)browserItemPayload;
-(long long)_sendSourceFromMediaOrigin:(long long)arg1 ;
@end

