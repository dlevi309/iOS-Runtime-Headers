/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSManagedObjectID, NSString, NSDate, NSSet, NSURL, CLLocation;


@protocol PLPTPTransferableAsset <NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) id uuid; 
@property (nonatomic,readonly) short savedAssetType; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * originalFilename; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalFile; 
@property (nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) unsigned long long ptpCloudMasterOriginalFileSize; 
@property (nonatomic,retain,readonly) id<PLPTPTransferableAdditionalAssetAttributes> ptpAdditionalAttributes; 
@property (nonatomic,retain,readonly) NSSet * ptpSidecarFiles; 
@property (nonatomic,readonly) BOOL isInFlight; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isAudio; 
@property (nonatomic,readonly) BOOL isAvalanchePhoto; 
@property (nonatomic,readonly) BOOL isPhotoIris; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) short kindSubtype; 
@property (nonatomic,copy,readonly) NSString * avalancheUUID; 
@property (nonatomic,readonly) int avalanchePickType; 
@property (nonatomic,copy,readonly) NSString * mediaGroupUUID; 
@property (nonatomic,readonly) id<PLPTPTransferableSidecarFile> ptpPhotoIrisSidecar; 
@property (nonatomic,copy,readonly) NSURL * mainFileURL; 
@property (nonatomic,readonly) int embeddedThumbnailOffset; 
@property (nonatomic,readonly) long long originalWidth; 
@property (nonatomic,readonly) long long originalHeight; 
@property (nonatomic,readonly) short originalOrientation; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,retain,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * pathForDiagnosticFile; 
@property (nonatomic,copy,readonly) NSString * pathForAdjustmentFile; 
@property (nonatomic,copy,readonly) NSString * pathForFullsizeRenderImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForFullsizeRenderVideoFile; 
@property (nonatomic,copy,readonly) NSString * pathForSpatialOverCaptureContentFile; 
@property (nonatomic,copy,readonly) NSString * pathForVideoComplementSpatialOverCaptureContentFile; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalAdjustmentFile; 
@property (nonatomic,readonly) CGSize spatialOverCaptureSize; 
@property (nonatomic,readonly) CGSize videoComplementSpatialOverCaptureSize; 
@property (nonatomic,readonly) long long cameraProcessingAdjustmentTrashedState; 
@property (nonatomic,copy,readonly) NSString * pathForPenultimateFullsizeRenderImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForPenultimateFullsizeRenderVideoFile; 
@required
-(NSDate *)modificationDate;
-(id)uuid;
-(long long)width;
-(NSDate *)dateCreated;
-(CGSize)spatialOverCaptureSize;
-(BOOL)isPhoto;
-(id<PLPTPTransferableSidecarFile>)ptpPhotoIrisSidecar;
-(CLLocation *)location;
-(NSSet *)ptpSidecarFiles;
-(NSString *)filename;
-(long long)originalHeight;
-(BOOL)cloudPhotoLibraryEnabled;
-(unsigned long long)ptpCloudMasterOriginalFileSize;
-(id<PLPTPTransferableAdditionalAssetAttributes>)ptpAdditionalAttributes;
-(int)embeddedThumbnailOffset;
-(CGSize)videoComplementSpatialOverCaptureSize;
-(long long)cameraProcessingAdjustmentTrashedState;
-(unsigned long long)originalFilesize;
-(short)kindSubtype;
-(long long)height;
-(short)savedAssetType;
-(NSString *)pathForOriginalFile;
-(NSString *)pathForAdjustmentFile;
-(BOOL)isInFlight;
-(NSManagedObjectID *)objectID;
-(NSURL *)mainFileURL;
-(int)avalanchePickType;
-(BOOL)isAudio;
-(BOOL)isPhotoIris;
-(NSString *)pathForFullsizeRenderVideoFile;
-(NSString *)pathForFullsizeRenderImageFile;
-(NSString *)pathForSpatialOverCaptureContentFile;
-(BOOL)isVideo;
-(NSString *)pathForVideoComplementSpatialOverCaptureContentFile;
-(NSString *)pathForOriginalAdjustmentFile;
-(unsigned short)deferredProcessingNeeded;
-(NSString *)originalFilename;
-(BOOL)isAvalanchePhoto;
-(NSString *)pathForDiagnosticFile;
-(NSString *)avalancheUUID;
-(long long)originalWidth;
-(short)originalOrientation;
-(double)duration;
-(NSString *)mediaGroupUUID;
-(NSString *)pathForPenultimateFullsizeRenderImageFile;
-(NSString *)pathForPenultimateFullsizeRenderVideoFile;

@end
