/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableDictionary, NSDictionary, NSArray, PFTimeZoneLookup, NSDate, NSTimeZone, CLLocation, NSNumber;

@interface IPAMetadata : NSObject <NSCopying> {

	BOOL _xmpLoaded;
	BOOL _hasLoadedContent;
	CGImageSourceRef _imageSource;
	CGImageMetadataRef _cgImageMetadata;
	NSData* _imageData;
	NSString* _filePath;
	NSMutableDictionary* _exifProperties;
	NSMutableDictionary* _iptcProperties;
	NSMutableDictionary* _basicProperties;
	NSMutableDictionary* _fileSystemProperties;
	NSMutableDictionary* _customInfo;
	NSMutableDictionary* _cgImageProperties;
	NSDictionary* _audioVideoProperties;
	NSArray* _focusPoints;
	long long _originalOrientation;
	long long _orientation;
	NSArray* _cgImageMetadataProperties;
	PFTimeZoneLookup* _timeZoneLookup;
	NSDate* _timeZoneAdjustedImageDate;
	NSTimeZone* _imageTimeZone;
	NSString* _fileTypeIdentifier;
	CLLocation* _exifLocation;
	CGSize _originalUnrotatedSize;

}

@property (assign,nonatomic) BOOL hasLoadedContent;                                       //@synthesize hasLoadedContent=_hasLoadedContent - In the implementation block
@property (assign,nonatomic) CGImageSourceRef imageSource;                                //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSDate * timeZoneAdjustedImageDate;                          //@synthesize timeZoneAdjustedImageDate=_timeZoneAdjustedImageDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * imageTimeZone;                                  //@synthesize imageTimeZone=_imageTimeZone - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                         //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exifProperties;                        //@synthesize exifProperties=_exifProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iptcProperties;                        //@synthesize iptcProperties=_iptcProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * basicProperties;                       //@synthesize basicProperties=_basicProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileSystemProperties;                  //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customInfo;                            //@synthesize customInfo=_customInfo - In the implementation block
@property (assign,nonatomic) BOOL xmpLoaded;                                              //@synthesize xmpLoaded=_xmpLoaded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cgImageProperties;                     //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * audioVideoProperties;                         //@synthesize audioVideoProperties=_audioVideoProperties - In the implementation block
@property (nonatomic,retain) NSArray * focusPoints;                                       //@synthesize focusPoints=_focusPoints - In the implementation block
@property (assign,nonatomic) CGSize originalUnrotatedSize;                                //@synthesize originalUnrotatedSize=_originalUnrotatedSize - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                               //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSArray * cgImageMetadataProperties;                         //@synthesize cgImageMetadataProperties=_cgImageMetadataProperties - In the implementation block
@property (nonatomic,retain) NSString * fileTypeIdentifier;                               //@synthesize fileTypeIdentifier=_fileTypeIdentifier - In the implementation block
@property (nonatomic,retain) CLLocation * exifLocation;                                   //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,retain) PFTimeZoneLookup * timeZoneLookup;                           //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,readonly) NSString * timeZoneName; 
@property (nonatomic,readonly) NSNumber * timeZoneOffset; 
@property (nonatomic,readonly) NSString * exifImageDateTimeString; 
@property (nonatomic,readonly) NSString * burstUuid; 
@property (nonatomic,readonly) NSString * groupingUuid; 
@property (nonatomic,readonly) NSString * mediaGroupUUID; 
@property (nonatomic,readonly) NSString * deferredPhotoProcessingIdentifier; 
@property (nonatomic,readonly) CGImageMetadataRef cgImageMetadata;                        //@synthesize cgImageMetadata=_cgImageMetadata - In the implementation block
@property (nonatomic,readonly) NSString * originatingAssetIdentifer; 
@property (nonatomic,readonly) NSString * spatialOverCaptureIdentifier; 
@property (nonatomic,readonly) BOOL isSpatialOverCapture; 
@property (nonatomic,readonly) BOOL isDeferredPhotoProxy; 
@property (nonatomic,readonly) BOOL hasCustomRendered; 
@property (nonatomic,readonly) long long customRendered; 
@property (nonatomic,readonly) unsigned long long playbackVariation; 
@property (nonatomic,readonly) BOOL isAutoloop; 
@property (nonatomic,readonly) BOOL isMirror; 
@property (nonatomic,readonly) BOOL isLongExposure; 
@property (nonatomic,readonly) BOOL isPortrait; 
@property (nonatomic,readonly) BOOL isHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
@property (nonatomic,readonly) BOOL isTimelapse; 
@property (nonatomic,readonly) BOOL isSloMo; 
@property (nonatomic,readonly) NSString * montageString; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double nominalFrameRate; 
@property (nonatomic,readonly) NSString * codecFourCharCode; 
@property (nonatomic,readonly) NSString * cameraMake; 
@property (nonatomic,readonly) NSString * cameraModel; 
@property (nonatomic,readonly) NSString * captionAbstract; 
@property (nonatomic,readonly) NSString * artworkContentDescription; 
+(id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(BOOL)arg2 ;
+(id)metadataIdentifierTypeMapImage;
+(id)defaultOptionsForCGImageSource;
+(CGImageSourceRef)newImageSourceForData:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
+(void)test_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
+(id)metadataIdentifierTypeMapCommon;
+(id)loadMetadataForURL:(id)arg1 cacheImageSource:(BOOL)arg2 cacheImageData:(BOOL)arg3 timeZoneLookup:(id)arg4 ;
+(id)utiFromFastModernizeVideoMediaWithMetadata:(id)arg1 ;
+(CGImageSourceRef)newImageSourceForURL:(id)arg1 options:(id)arg2 ;
+(id)_getPropertiesFromImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
+(id)metadataIdentifierTypeMapVideo;
-(NSString *)filePath;
-(NSDate *)imageDate;
-(BOOL)isSloMo;
-(void)setXmpLoaded:(BOOL)arg1 ;
-(id)customPropertyForKey:(id)arg1 ;
-(void)loadAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(BOOL)arg3 ;
-(CGSize)imageSize;
-(CLLocation *)exifLocation;
-(void)setTimeZoneAdjustedImageDate:(NSDate *)arg1 ;
-(id)descriptionDictionary;
-(NSMutableDictionary *)basicProperties;
-(BOOL)isPortrait;
-(CGSize)originalUnrotatedSize;
-(double)nominalFrameRate;
-(void)_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(NSMutableDictionary *)cgImageProperties;
-(void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1 ;
-(void)setIptcProperties:(NSMutableDictionary *)arg1 ;
-(void)setCgImageMetadataProperties:(NSArray *)arg1 ;
-(BOOL)isSpatialOverCapture;
-(void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ;
-(void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2 ;
-(id)iptcPropertyForKey:(id)arg1 ;
-(NSDictionary *)audioVideoProperties;
-(void)setEncodedAudioVideoData:(id)arg1 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 ;
-(void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1 ;
-(NSString *)fileTypeIdentifier;
-(BOOL)hasCustomRendered;
-(id)initWithPath:(id)arg1 imageSource:(CGImageSourceRef)arg2 options:(id)arg3 loadXmpData:(BOOL)arg4 xmpSidecarPath:(id)arg5 timeZoneLookup:(id)arg6 cacheImageSource:(BOOL)arg7 cacheImageData:(BOOL)arg8 ;
-(void)clearImageAttributes;
-(void)setRawFileSystemAttributes:(id)arg1 ;
-(id)encodedDataReduceIfLargerThan:(unsigned long long)arg1 ;
-(void)setTimeZoneLookup:(PFTimeZoneLookup *)arg1 ;
-(void)digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(BOOL)isAutoloop;
-(void)mergeMetadata:(id)arg1 ;
-(void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(BOOL)arg3 readyHandler:(/*^block*/id)arg4 ;
-(void)setAudioVideoAttributesFromDictionary:(id)arg1 ;
-(BOOL)isTimelapse;
-(BOOL)hasLoadedContent;
-(unsigned long long)playbackVariation;
-(NSString *)codecFourCharCode;
-(BOOL)isDeferredPhotoProxy;
-(void)setIPTCProperty:(id)arg1 forKey:(id)arg2 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 ;
-(void)setFocusPoints:(NSArray *)arg1 ;
-(NSString *)originatingAssetIdentifer;
-(NSString *)cameraMake;
-(id)exifPropertyForKey:(id)arg1 ;
-(NSString *)deferredPhotoProcessingIdentifier;
-(id)initWithPath:(id)arg1 options:(id)arg2 timeZoneLookup:(id)arg3 ;
-(BOOL)xmpLoaded;
-(id)description;
-(id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 timeZoneLookup:(id)arg3 ;
-(void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 readyHandler:(/*^block*/id)arg3 ;
-(void)setOriginalUnrotatedSize:(CGSize)arg1 ;
-(id)exifTimezoneOffsetFromDateString:(id)arg1 offsetInSeconds:(long long*)arg2 ;
-(id)encodedData;
-(NSString *)cameraModel;
-(void)setOriginalOrientation:(long long)arg1 ;
-(BOOL)isLongExposure;
-(void)_setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 updateCreationDate:(BOOL)arg3 fullMetadata:(BOOL)arg4 readyHandler:(/*^block*/id)arg5 ;
-(void)setAudioVideoProperties:(NSDictionary *)arg1 ;
-(NSData *)imageData;
-(BOOL)conformsToUTType:(CFStringRef)arg1 forExtention:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2 ;
-(id)jsonFormattedDescriptionWithError:(id*)arg1 ;
-(void)setExifProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setHasLoadedContent:(BOOL)arg1 ;
-(NSString *)captionAbstract;
-(void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3 ;
-(void)setBasicProperties:(NSMutableDictionary *)arg1 ;
-(void)setImageSource:(CGImageSourceRef)arg1 ;
-(NSArray *)focusPoints;
-(PFTimeZoneLookup *)timeZoneLookup;
-(void)setCustomInfo:(NSMutableDictionary *)arg1 ;
-(void)setImageTimeZone:(NSTimeZone *)arg1 ;
-(long long)orientation;
-(void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1 ;
-(NSTimeZone *)imageTimeZone;
-(NSString *)timeZoneName;
-(long long)customRendered;
-(CGImageSourceRef)imageSource;
-(id)utiForExtension:(id)arg1 ;
-(NSString *)spatialOverCaptureIdentifier;
-(void)setExifLocation:(CLLocation *)arg1 ;
-(BOOL)isHDR;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 options:(id)arg4 loadXmpData:(BOOL)arg5 xmpSidecarPath:(id)arg6 timeZoneLookup:(id)arg7 cacheImageSource:(BOOL)arg8 cacheImageData:(BOOL)arg9 ;
-(void)setExifProperties:(NSMutableDictionary *)arg1 ;
-(BOOL)isMirror;
-(id)_digestedExifAttributesFromRawAttributes:(id)arg1 ;
-(void)setCustomProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setFileTypeIdentifier:(NSString *)arg1 ;
-(void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(BOOL)arg2 atEnd:(/*^block*/id)arg3 ;
-(NSString *)groupingUuid;
-(NSString *)burstUuid;
-(void)setCgImageProperties:(NSMutableDictionary *)arg1 ;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 uti:(id)arg3 imageSource:(CGImageSourceRef)arg4 cgImageProperties:(id)arg5 options:(id)arg6 loadMinMetadata:(BOOL)arg7 loadXmpData:(BOOL)arg8 xmpSidecarPath:(id)arg9 timeZoneLookup:(id)arg10 cacheImageSource:(BOOL)arg11 cacheImageData:(BOOL)arg12 ;
-(NSMutableDictionary *)exifProperties;
-(NSMutableDictionary *)fileSystemProperties;
-(void)_enforceProperFormatting:(id)arg1 ;
-(void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(NSNumber *)timeZoneOffset;
-(id)_digestedIptcAttributesFromRawAttributes:(id)arg1 ;
-(NSString *)exifImageDateTimeString;
-(void)dumpXmpProperties;
-(void)setCGImageProperties:(id)arg1 ;
-(void)setFileSystemProperties:(NSMutableDictionary *)arg1 ;
-(id)initWithTimeZoneLookup:(id)arg1 ;
-(NSString *)montageString;
-(void)_digestedOrientationExifAttributesFromExif:(id)arg1 ;
-(long long)originalOrientation;
-(NSDate *)timeZoneAdjustedImageDate;
-(double)duration;
-(NSString *)mediaGroupUUID;
-(BOOL)isSDOF;
-(void)_digestedGPSExifAttributesFromExif:(id)arg1 ;
-(NSString *)artworkContentDescription;
-(id)initWithPath:(id)arg1 loadMinMetadata:(BOOL)arg2 timeZoneLookup:(id)arg3 ;
-(NSMutableDictionary *)iptcProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)convertGPSString:(id)arg1 toLatitude:(id*)arg2 longitude:(id*)arg3 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSMutableDictionary *)customInfo;
-(void)setImageData:(NSData *)arg1 ;
-(void)setCustomProperties:(id)arg1 ;
-(void)setEncodedImageData:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(NSArray *)cgImageMetadataProperties;
-(void)_digestedAVExifAttributesFromExif:(id)arg1 ;
-(CGImageMetadataRef)cgImageMetadata;
@end

