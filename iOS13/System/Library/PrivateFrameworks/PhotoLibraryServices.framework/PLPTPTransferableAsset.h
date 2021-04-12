/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) long long snowplowTrashedState; 
@property (nonatomic,copy,readonly) NSString * pathForPenultimateFullsizeRenderImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForPenultimateFullsizeRenderVideoFile; 
@required
-(id)uuid;
-(double)duration;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(CLLocation *)location;
-(NSManagedObjectID *)objectID;
-(long long)width;
-(long long)height;
-(BOOL)isVideo;
-(NSDate *)dateCreated;
-(BOOL)isAudio;
-(NSString *)originalFilename;
-(BOOL)isPhoto;
-(short)savedAssetType;
-(NSString *)pathForFullsizeRenderVideoFile;
-(NSString *)pathForFullsizeRenderImageFile;
-(NSString *)pathForOriginalFile;
-(NSString *)avalancheUUID;
-(NSURL *)mainFileURL;
-(NSString *)pathForAdjustmentFile;
-(unsigned short)deferredProcessingNeeded;
-(short)originalOrientation;
-(long long)originalWidth;
-(long long)originalHeight;
-(BOOL)isPhotoIris;
-(BOOL)isAvalanchePhoto;
-(unsigned long long)originalFilesize;
-(NSString *)pathForDiagnosticFile;
-(int)avalanchePickType;
-(short)kindSubtype;
-(NSString *)pathForSpatialOverCaptureContentFile;
-(NSString *)mediaGroupUUID;
-(BOOL)isInFlight;
-(NSString *)pathForPenultimateFullsizeRenderImageFile;
-(NSString *)pathForPenultimateFullsizeRenderVideoFile;
-(NSString *)pathForOriginalAdjustmentFile;
-(NSString *)pathForVideoComplementSpatialOverCaptureContentFile;
-(BOOL)cloudPhotoLibraryEnabled;
-(unsigned long long)ptpCloudMasterOriginalFileSize;
-(id<PLPTPTransferableAdditionalAssetAttributes>)ptpAdditionalAttributes;
-(NSSet *)ptpSidecarFiles;
-(id<PLPTPTransferableSidecarFile>)ptpPhotoIrisSidecar;
-(int)embeddedThumbnailOffset;
-(CGSize)spatialOverCaptureSize;
-(CGSize)videoComplementSpatialOverCaptureSize;
-(long long)snowplowTrashedState;

@end

