/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)duration;
-(CGSize)imageSize;
-(id)assetId;
-(id)representedObject;
-(id)burstUUID;
-(id)originatingAssetID;
-(BOOL)isTagged;
-(BOOL)hasAdjustments;
-(BOOL)isRAW;
-(id)spatialOverCaptureIdentifier;
-(BOOL)isSpatialOverCapture;
-(BOOL)canDelete;
-(BOOL)canReference;
-(void)loadMetadataSync;
-(id)exifImageDate;
-(BOOL)isLivePhoto;
-(BOOL)canPreserveFolderStructure;
-(id)parentFolderPath;
-(BOOL)isSloMo;
-(BOOL)hasAudioAttachment;
-(BOOL)isRender;
-(BOOL)isBase;
-(BOOL)isViewable;
-(int)burstPickType;
-(id)mediaGroupId;
-(void)loadMetadataAsync:(/*^block*/id)arg1 ;
-(void)thumbnailUsingRequest:(id)arg1 atEnd:(/*^block*/id)arg2 ;
-(void)downloadToPathAsync:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSource:(id)arg1 cameraFile:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4 ;
-(BOOL)containsDateKey:(id)arg1 ;
-(BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)arg1 ;
-(id)createMetadataFromCameraFile:(id)arg1 ;
-(NSArray *)cameraFiles;
-(void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4 ;
@end

