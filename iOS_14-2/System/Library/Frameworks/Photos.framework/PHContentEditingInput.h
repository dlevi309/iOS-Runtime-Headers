/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AVAsset, NSDate, CLLocation, NSString, PHAdjustmentData, UIImage, NSURL, PHLivePhoto, NSNumber;

@interface PHContentEditingInput : NSObject {

	NSObject*<OS_dispatch_queue> _avAssetIsolationQueue;
	NSMutableArray* _sandboxExtensionHandles;
	int _fullSizeImageOrientation;
	AVAsset* _avAsset;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	NSDate* _creationDate;
	CLLocation* _location;
	NSString* _uniformTypeIdentifier;
	long long _playbackStyle;
	PHAdjustmentData* _adjustmentData;
	UIImage* _displaySizeImage;
	NSURL* _fullSizeImageURL;
	PHLivePhoto* _livePhoto;
	long long _baseVersion;
	NSNumber* _originalResourceChoice;
	NSURL* _videoURL;
	NSURL* _overCapturePhotoURL;
	NSURL* _overCaptureVideoURL;
	NSURL* _frontSwappingImageRenderURL;
	NSURL* _backSwappingImageRenderURL;
	NSURL* _frontSwappingVideoRenderURL;
	NSURL* _backSwappingVideoRenderURL;
	PHAdjustmentData* _originalAdjustmentData;

}

@property (assign,nonatomic) long long mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaSubtypes;                       //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) CLLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * adjustmentData;                      //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (assign,nonatomic) long long baseVersion;                                  //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,retain) NSNumber * originalResourceChoice;                      //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (nonatomic,retain) UIImage * displaySizeImage;                             //@synthesize displaySizeImage=_displaySizeImage - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                         //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fullSizeImageURL;                                 //@synthesize fullSizeImageURL=_fullSizeImageURL - In the implementation block
@property (assign,nonatomic) int fullSizeImageOrientation;                           //@synthesize fullSizeImageOrientation=_fullSizeImageOrientation - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                //@synthesize livePhoto=_livePhoto - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSURL * overCapturePhotoURL;                              //@synthesize overCapturePhotoURL=_overCapturePhotoURL - In the implementation block
@property (nonatomic,copy) NSURL * overCaptureVideoURL;                              //@synthesize overCaptureVideoURL=_overCaptureVideoURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingImageRenderURL;                      //@synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingImageRenderURL;                       //@synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingVideoRenderURL;                      //@synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingVideoRenderURL;                       //@synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * originalAdjustmentData;              //@synthesize originalAdjustmentData=_originalAdjustmentData - In the implementation block
@property (readonly) AVAsset * avAsset; 
@property (readonly) AVAsset * audiovisualAsset;                                     //@synthesize avAsset=_avAsset - In the implementation block
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(PHLivePhoto *)livePhoto;
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id)init;
-(NSNumber *)originalResourceChoice;
-(NSURL *)fullSizeImageURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(CLLocation *)location;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(id)audioMix;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setOriginalResourceChoice:(NSNumber *)arg1 ;
-(void)setPlaybackStyle:(long long)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(id)description;
-(id)imagePreview;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(void)loadFullSizeImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)consumeSandboxExtensionToken:(id)arg1 ;
-(void)requestFullSizeImageURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVAsset *)audiovisualAsset;
-(void)_invalidateAVAsset;
-(void)setMediaSubtypes:(unsigned long long)arg1 ;
-(UIImage *)displaySizeImage;
-(void)setDisplaySizeImage:(UIImage *)arg1 ;
-(int)fullSizeImageOrientation;
-(NSURL *)overCapturePhotoURL;
-(void)setFullSizeImageOrientation:(int)arg1 ;
-(void)setOverCapturePhotoURL:(NSURL *)arg1 ;
-(NSURL *)overCaptureVideoURL;
-(void)setOverCaptureVideoURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingImageRenderURL;
-(void)setFrontSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingImageRenderURL;
-(void)setBackSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingVideoRenderURL;
-(void)setFrontSwappingVideoRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingVideoRenderURL;
-(void)setBackSwappingVideoRenderURL:(NSURL *)arg1 ;
-(PHAdjustmentData *)originalAdjustmentData;
-(void)setOriginalAdjustmentData:(PHAdjustmentData *)arg1 ;
-(unsigned long long)mediaSubtypes;
-(void)setBaseVersion:(long long)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(id)videoComposition;
-(NSURL *)videoURL;
-(AVAsset *)avAsset;
-(long long)baseVersion;
-(void)dealloc;
@end

