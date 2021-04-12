/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImportAsset.h>

@class ICCameraFile, NSArray;

@interface PHImportDeviceAsset : PHImportAsset {

	ICCameraFile* _cameraFile;

}

@property (nonatomic,readonly) NSArray * cameraFiles; 
+(id)assetFileForFile:(id)arg1 source:(id)arg2 ;
+(void)validateCameraFile:(id)arg1 ;
-(BOOL)isSloMo;
-(CGSize)imageSize;
-(id)assetId;
-(BOOL)isRAW;
-(BOOL)isSpatialOverCapture;
-(BOOL)isBase;
-(BOOL)canDelete;
-(BOOL)isLivePhoto;
-(id)initWithSource:(id)arg1 cameraFile:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4 ;
-(BOOL)containsDateKey:(id)arg1 ;
-(BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)arg1 ;
-(id)createMetadataFromProperties:(id)arg1 ;
-(NSArray *)cameraFiles;
-(BOOL)isRender;
-(BOOL)isTagged;
-(id)spatialOverCaptureIdentifier;
-(BOOL)hasAdjustments;
-(BOOL)canReference;
-(void)loadMetadataSync;
-(id)originatingAssetID;
-(id)exifImageDate;
-(BOOL)canPreserveFolderStructure;
-(id)parentFolderPath;
-(BOOL)isViewable;
-(BOOL)hasAudioAttachment;
-(int)burstPickType;
-(id)mediaGroupId;
-(id)duration;
-(void)loadMetadataAsync:(/*^block*/id)arg1 ;
-(void)thumbnailUsingRequest:(id)arg1 atEnd:(/*^block*/id)arg2 ;
-(void)copyToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)burstUUID;
-(id)representedObject;
@end

