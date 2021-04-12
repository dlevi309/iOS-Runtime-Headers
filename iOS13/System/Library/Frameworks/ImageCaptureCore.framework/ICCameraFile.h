/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableDictionary, NSString, NSNumber, NSDate, NSMutableArray, NSDictionary, NSData, NSProgress;

@interface ICCameraFile : ICCameraItem {

	CGImageRef _originalThumbnail;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	NSString* _debugType;
	NSString* _debugBadge;
	NSNumber* _fileIsJPEG;
	NSNumber* _fileIsHEIC;
	BOOL _highFramerate;
	BOOL _timeLapse;
	BOOL _firstPicked;
	BOOL _burstFavorite;
	BOOL _burstPicked;
	BOOL _imgHasThumbnail;
	BOOL _imgHasMetadata;
	BOOL _useExtensionIcon;
	BOOL _fetchingThumbnail;
	BOOL _fetchingMetadata;
	BOOL _orientationOverridden;
	BOOL _retrievedMetadata;
	BOOL _retrievedThumbnail;
	unsigned _objectHandle;
	long long _width;
	long long _height;
	NSString* _originalFilename;
	NSString* _createdFilename;
	long long _fileSize;
	double _duration;
	NSString* _originatingAssetID;
	NSString* _groupUUID;
	NSString* _gpsString;
	NSString* _relatedUUID;
	NSString* _burstUUID;
	ICCameraFile* _pairedRawImage;
	NSDate* _fileCreationDate;
	NSDate* _fileModificationDate;
	NSDate* _exifCreationDate;
	NSDate* _exifModificationDate;
	unsigned long long _imgOrientation;
	NSString* _imgSpatialOverCaptureGroupID;
	NSMutableArray* _sidecarFiles;
	unsigned long long _mediaMetadata;
	NSString* _devMediaBase;
	NSDictionary* _mediaData;
	NSMutableDictionary* _subImages;
	unsigned long long _oUUID;
	unsigned long long _uTime;
	NSData* _thumbnailData;
	NSProgress* _progress;

}

@property (assign,nonatomic) BOOL imgHasThumbnail;                                //@synthesize imgHasThumbnail=_imgHasThumbnail - In the implementation block
@property (assign,nonatomic) BOOL imgHasMetadata;                                 //@synthesize imgHasMetadata=_imgHasMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long imgOrientation;                   //@synthesize imgOrientation=_imgOrientation - In the implementation block
@property (nonatomic,copy) NSString * imgSpatialOverCaptureGroupID;               //@synthesize imgSpatialOverCaptureGroupID=_imgSpatialOverCaptureGroupID - In the implementation block
@property (assign) CGImageRef originalThumbnail; 
@property (nonatomic,retain) NSMutableArray * sidecarFiles;                       //@synthesize sidecarFiles=_sidecarFiles - In the implementation block
@property (assign,nonatomic) unsigned long long mediaMetadata;                    //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,copy) NSString * devMediaBase;                               //@synthesize devMediaBase=_devMediaBase - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaData;                            //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subImages;                     //@synthesize subImages=_subImages - In the implementation block
@property (assign,nonatomic) BOOL useExtensionIcon;                               //@synthesize useExtensionIcon=_useExtensionIcon - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                           //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * createdFilename;                            //@synthesize createdFilename=_createdFilename - In the implementation block
@property (nonatomic,retain) ICCameraFile * pairedRawImage;                       //@synthesize pairedRawImage=_pairedRawImage - In the implementation block
@property (assign) BOOL fetchingThumbnail;                                        //@synthesize fetchingThumbnail=_fetchingThumbnail - In the implementation block
@property (assign) BOOL fetchingMetadata;                                         //@synthesize fetchingMetadata=_fetchingMetadata - In the implementation block
@property (nonatomic,copy) NSDate * fileCreationDate;                             //@synthesize fileCreationDate=_fileCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * fileModificationDate;                         //@synthesize fileModificationDate=_fileModificationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifCreationDate;                             //@synthesize exifCreationDate=_exifCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * exifModificationDate;                         //@synthesize exifModificationDate=_exifModificationDate - In the implementation block
@property (assign,nonatomic) long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) long long width;                                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                                    //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL orientationOverridden;                          //@synthesize orientationOverridden=_orientationOverridden - In the implementation block
@property (assign,nonatomic) BOOL burstFavorite;                                  //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (assign,nonatomic) BOOL burstPicked;                                    //@synthesize burstPicked=_burstPicked - In the implementation block
@property (assign,nonatomic) BOOL firstPicked;                                    //@synthesize firstPicked=_firstPicked - In the implementation block
@property (assign,nonatomic) BOOL highFramerate;                                  //@synthesize highFramerate=_highFramerate - In the implementation block
@property (assign,nonatomic) BOOL timeLapse;                                      //@synthesize timeLapse=_timeLapse - In the implementation block
@property (nonatomic,copy) NSString * gpsString;                                  //@synthesize gpsString=_gpsString - In the implementation block
@property (nonatomic,copy) NSString * burstUUID;                                  //@synthesize burstUUID=_burstUUID - In the implementation block
@property (nonatomic,copy) NSString * groupUUID;                                  //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,copy) NSString * relatedUUID;                                //@synthesize relatedUUID=_relatedUUID - In the implementation block
@property (nonatomic,copy) NSString * originatingAssetID;                         //@synthesize originatingAssetID=_originatingAssetID - In the implementation block
@property (assign) unsigned long long oUUID;                                      //@synthesize oUUID=_oUUID - In the implementation block
@property (assign) unsigned long long uTime;                                      //@synthesize uTime=_uTime - In the implementation block
@property (nonatomic,readonly) NSString * spatialOverCaptureGroupID; 
@property (assign,nonatomic) BOOL retrievedMetadata;                              //@synthesize retrievedMetadata=_retrievedMetadata - In the implementation block
@property (assign,nonatomic) BOOL retrievedThumbnail;                             //@synthesize retrievedThumbnail=_retrievedThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned objectHandle;                             //@synthesize objectHandle=_objectHandle - In the implementation block
@property (nonatomic,copy) NSData * thumbnailData;                                //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                               //@synthesize progress=_progress - In the implementation block
@property (readonly) NSString * mediaBase; 
@property (assign,nonatomic) unsigned long long orientation; 
-(void)dealloc;
-(id)description;
-(void)setGroupUUID:(NSString *)arg1 ;
-(long long)fileSize;
-(NSDate *)fileModificationDate;
-(NSDate *)fileCreationDate;
-(NSProgress *)progress;
-(unsigned long long)orientation;
-(double)duration;
-(BOOL)hasThumbnail;
-(id)modificationDate;
-(BOOL)isLegacy;
-(id)creationDate;
-(long long)width;
-(long long)height;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(BOOL)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setDuration:(double)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(BOOL)hasMetadata;
-(id)base;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(CGImageRef)thumbnail;
-(unsigned)objectHandle;
-(NSString *)relatedUUID;
-(BOOL)isImage;
-(BOOL)isMovie;
-(void)addSidecarFile:(id)arg1 ;
-(void)flagAsSidecar;
-(BOOL)isDataUniversal;
-(BOOL)isOriginal;
-(BOOL)isConverted;
-(NSMutableArray *)sidecarFiles;
-(NSString *)mediaBase;
-(BOOL)isJPEG;
-(BOOL)isHEIC;
-(BOOL)isNonRawImage;
-(BOOL)isAudio;
-(void)setPairedRawImage:(ICCameraFile *)arg1 ;
-(BOOL)originalFamily;
-(BOOL)convertedFamily;
-(BOOL)universalFamily;
-(BOOL)isSidecar;
-(id)requestDownloadWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)setFileCreationDate:(NSDate *)arg1 ;
-(void)setExifCreationDate:(NSDate *)arg1 ;
-(void)setExifModificationDate:(NSDate *)arg1 ;
-(void)setBurstUUID:(NSString *)arg1 ;
-(void)setOriginatingAssetID:(NSString *)arg1 ;
-(void)setCreatedFilename:(NSString *)arg1 ;
-(void)setRelatedUUID:(NSString *)arg1 ;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(void)setMediaData:(NSDictionary *)arg1 ;
-(void)setSubImages:(NSMutableDictionary *)arg1 ;
-(void)setGpsString:(NSString *)arg1 ;
-(void)setSidecarFiles:(NSMutableArray *)arg1 ;
-(void)setThumbnailData:(NSData *)arg1 ;
-(void)setDevMediaBase:(NSString *)arg1 ;
-(void)setImgSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(unsigned long long)oUUID;
-(unsigned long long)uTime;
-(NSData *)thumbnailData;
-(void)setImgHasMetadata:(BOOL)arg1 ;
-(void)setImgHasThumbnail:(BOOL)arg1 ;
-(BOOL)imgHasMetadata;
-(BOOL)imgHasThumbnail;
-(void)setOrientationOverridden:(BOOL)arg1 ;
-(BOOL)isEditedOriginal;
-(BOOL)isEditedConverted;
-(id)debugType;
-(id)debugBadge;
-(NSString *)devMediaBase;
-(unsigned long long)mediaMetadata;
-(BOOL)isUntouched:(unsigned long long)arg1 ;
-(BOOL)isEdited:(unsigned long long)arg1 ;
-(BOOL)partOfFamily:(unsigned long long)arg1 ;
-(void)setMediaMetadata:(unsigned long long)arg1 ;
-(BOOL)orientationOverridden;
-(void)setFetchingThumbnail:(BOOL)arg1 ;
-(NSString *)burstUUID;
-(NSString *)originatingAssetID;
-(BOOL)burstPicked;
-(void)setBurstPicked:(BOOL)arg1 ;
-(BOOL)burstFavorite;
-(void)setBurstFavorite:(BOOL)arg1 ;
-(BOOL)highFramerate;
-(void)setHighFramerate:(BOOL)arg1 ;
-(BOOL)timeLapse;
-(void)setTimeLapse:(BOOL)arg1 ;
-(NSString *)originalFilename;
-(NSString *)createdFilename;
-(BOOL)firstPicked;
-(void)setFirstPicked:(BOOL)arg1 ;
-(NSString *)groupUUID;
-(NSString *)spatialOverCaptureGroupID;
-(void)setSpatialOverCaptureGroupID:(NSString *)arg1 ;
-(NSString *)gpsString;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)setHasMetadata:(BOOL)arg1 ;
-(void)setUTI:(id)arg1 ;
-(void)setKeywordPropertiesFromDict:(id)arg1 ;
-(void)setFetchingMetadata:(BOOL)arg1 ;
-(void)requestThumbnailDataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fetchingThumbnail;
-(id)thumbnailDataUsingOrientation:(id)arg1 andSourceThumbnailData:(id)arg2 ;
-(void)cacheThumbnailData:(id)arg1 ;
-(void)requestMetadataDictionaryWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fetchingMetadata;
-(void)requestReadFullDataAtOffset:(long long)arg1 length:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(long long)compareUUID:(id)arg1 ;
-(long long)compareDate:(id)arg1 ;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(id)debugIdentity;
-(BOOL)isUniversal;
-(BOOL)isEditedUniversal;
-(BOOL)isData;
-(CGImageRef)originalThumbnail;
-(void)setOriginalThumbnail:(CGImageRef)arg1 ;
-(void)flagMediaMetadata:(unsigned long long)arg1 ;
-(void)requestThumbnail;
-(void)requestThumbnailWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadata;
-(void)requestMetadataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestReadDataAtOffset:(long long)arg1 length:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(ICCameraFile *)pairedRawImage;
-(NSDate *)exifCreationDate;
-(NSDate *)exifModificationDate;
-(unsigned long long)imgOrientation;
-(void)setImgOrientation:(unsigned long long)arg1 ;
-(NSString *)imgSpatialOverCaptureGroupID;
-(NSDictionary *)mediaData;
-(NSMutableDictionary *)subImages;
-(BOOL)useExtensionIcon;
-(void)setUseExtensionIcon:(BOOL)arg1 ;
-(void)setOUUID:(unsigned long long)arg1 ;
-(void)setUTime:(unsigned long long)arg1 ;
-(BOOL)retrievedMetadata;
-(void)setRetrievedMetadata:(BOOL)arg1 ;
-(BOOL)retrievedThumbnail;
-(void)setRetrievedThumbnail:(BOOL)arg1 ;
@end

