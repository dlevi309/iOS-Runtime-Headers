/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSString, CLLocation, NSDate;


@protocol PUDisplayAsset <NSObject,NSCopying>
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
@property (nonatomic,readonly) SCD_Struct_PH4 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PH4 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_PH4 videoKeyFrameSourceTime; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@optional
-(unsigned long long)contentChangeFromDisplayAsset:(id)arg1;
-(SCD_Struct_PH4)videoKeyFrameSourceTime;
-(unsigned short)deferredProcessingNeeded;
-(BOOL)needsDeferredProcessing;

@required
-(NSDate *)modificationDate;
-(BOOL)isFavorite;
-(NSString *)uuid;
-(BOOL)isHidden;
-(unsigned long long)mediaType;
-(CLLocation *)location;
-(unsigned long long)originalFilesize;
-(NSDate *)localCreationDate;
-(SCD_Struct_PH4)photoIrisStillDisplayTime;
-(SCD_Struct_PH4)photoIrisVideoDuration;
-(NSString *)uniformTypeIdentifier;
-(double)aspectRatio;
-(long long)playbackVariation;
-(BOOL)isLivePhoto;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(BOOL)hasPhotoColorAdjustments;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(unsigned long long)isContentEqualTo:(id)arg1;
-(NSString *)localizedGeoDescription;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(BOOL)isAnimatedImage;
-(double)duration;
-(unsigned long long)pixelWidth;

@end

