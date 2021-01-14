/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/PUTransientDisplayAsset.h>

@class NSURL, NSString, UIImage, NSDate, CLLocation;

@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset> {

	BOOL _canPlayPhotoIris;
	BOOL _canPlayLoopingVideo;
	BOOL _isPhotoIrisPlaceholder;
	BOOL _HDR;
	BOOL _representsBurst;
	NSDate* _localCreationDate;
	NSString* _uuid;
	unsigned long long _mediaType;
	unsigned long long _mediaSubtypes;
	long long _playbackStyle;
	long long _playbackVariation;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	double _duration;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSURL* _persistenceURL;
	UIImage* _placeholderImage;
	NSString* _burstIdentifier;
	unsigned long long _numberOfRepresentedAssets;
	SCD_Struct_CA7 _photoIrisStillDisplayTime;
	SCD_Struct_CA7 _photoIrisVideoDuration;

}

@property (nonatomic,readonly) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;                          //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) long long playbackStyle;                                   //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) long long playbackVariation;                               //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                             //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                            //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris;                                     //@synthesize canPlayPhotoIris=_canPlayPhotoIris - In the implementation block
@property (nonatomic,readonly) BOOL canPlayLoopingVideo;                                  //@synthesize canPlayLoopingVideo=_canPlayLoopingVideo - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder;                               //@synthesize isPhotoIrisPlaceholder=_isPhotoIrisPlaceholder - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 photoIrisStillDisplayTime;                  //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 photoIrisVideoDuration;                     //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL;                               //@synthesize persistenceURL=_persistenceURL - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                                //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (getter=isHDR,nonatomic,readonly) BOOL HDR;                                     //@synthesize HDR=_HDR - In the implementation block
@property (nonatomic,readonly) BOOL representsBurst;                                      //@synthesize representsBurst=_representsBurst - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                           //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets;              //@synthesize numberOfRepresentedAssets=_numberOfRepresentedAssets - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDate * localCreationDate;                                //@synthesize localCreationDate=_localCreationDate - In the implementation block
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_CA7 videoKeyFrameSourceTime; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)modificationDate;
-(BOOL)isFavorite;
-(NSString *)uuid;
-(BOOL)isHidden;
-(unsigned long long)mediaType;
-(id)init;
-(CLLocation *)location;
-(unsigned long long)originalFilesize;
-(NSDate *)localCreationDate;
-(SCD_Struct_CA7)photoIrisStillDisplayTime;
-(SCD_Struct_CA7)photoIrisVideoDuration;
-(NSString *)uniformTypeIdentifier;
-(double)aspectRatio;
-(long long)playbackVariation;
-(BOOL)isLivePhoto;
-(BOOL)representsBurst;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(BOOL)hasPhotoColorAdjustments;
-(NSURL *)persistenceURL;
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
-(UIImage *)placeholderImage;
-(BOOL)isAnimatedImage;
-(BOOL)isHDR;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelWidth;
-(id)initWithUUID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 uuid:(id)arg2 ;
-(void)_populateStillImageTransientAssetFromConvertible:(id)arg1 ;
-(void)_populateVideoTransientAssetFromConvertible:(id)arg1 ;
-(id)initWithAsset:(id)arg1 convertible:(id)arg2 ;
@end

