/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions;

@interface PHAssetCreationOptions : NSObject {

	BOOL _shouldDownloadOrCloudReReferenceMissingResources;
	BOOL _resetUserSpecificMetadata;
	BOOL _copyStillPhotoFromLivePhoto;
	BOOL _copyOriginal;
	BOOL _copySinglePhotoFromBurst;
	/*^block*/id _destinationAssetAvailabilityHandler;
	PHAssetCreationAdjustmentBakeInOptions* _adjustmentBakeInOptions;
	PHAssetCreationMetadataCopyOptions* _metadataCopyOptions;
	SCD_Struct_PH9 _stillSourceTime;

}

@property (assign,nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources;                       //@synthesize shouldDownloadOrCloudReReferenceMissingResources=_shouldDownloadOrCloudReReferenceMissingResources - In the implementation block
@property (nonatomic,copy) id destinationAssetAvailabilityHandler;                                        //@synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler - In the implementation block
@property (nonatomic,copy) PHAssetCreationAdjustmentBakeInOptions * adjustmentBakeInOptions;              //@synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions - In the implementation block
@property (nonatomic,copy) PHAssetCreationMetadataCopyOptions * metadataCopyOptions;                      //@synthesize metadataCopyOptions=_metadataCopyOptions - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH9 stillSourceTime;                                              //@synthesize stillSourceTime=_stillSourceTime - In the implementation block
@property (assign,nonatomic) BOOL resetUserSpecificMetadata;                                              //@synthesize resetUserSpecificMetadata=_resetUserSpecificMetadata - In the implementation block
@property (assign,nonatomic) BOOL copyStillPhotoFromLivePhoto;                                            //@synthesize copyStillPhotoFromLivePhoto=_copyStillPhotoFromLivePhoto - In the implementation block
@property (assign,nonatomic) BOOL copyOriginal;                                                           //@synthesize copyOriginal=_copyOriginal - In the implementation block
@property (assign,nonatomic) BOOL copySinglePhotoFromBurst;                                               //@synthesize copySinglePhotoFromBurst=_copySinglePhotoFromBurst - In the implementation block
-(id)init;
-(BOOL)shouldDownloadOrCloudReReferenceMissingResources;
-(void)setShouldDownloadOrCloudReReferenceMissingResources:(BOOL)arg1 ;
-(id)destinationAssetAvailabilityHandler;
-(void)setDestinationAssetAvailabilityHandler:(id)arg1 ;
-(PHAssetCreationAdjustmentBakeInOptions *)adjustmentBakeInOptions;
-(void)setAdjustmentBakeInOptions:(PHAssetCreationAdjustmentBakeInOptions *)arg1 ;
-(PHAssetCreationMetadataCopyOptions *)metadataCopyOptions;
-(void)setMetadataCopyOptions:(PHAssetCreationMetadataCopyOptions *)arg1 ;
-(SCD_Struct_PH9)stillSourceTime;
-(void)setStillSourceTime:(SCD_Struct_PH9)arg1 ;
-(BOOL)resetUserSpecificMetadata;
-(void)setResetUserSpecificMetadata:(BOOL)arg1 ;
-(BOOL)copyStillPhotoFromLivePhoto;
-(void)setCopyStillPhotoFromLivePhoto:(BOOL)arg1 ;
-(BOOL)copyOriginal;
-(void)setCopyOriginal:(BOOL)arg1 ;
-(BOOL)copySinglePhotoFromBurst;
-(void)setCopySinglePhotoFromBurst:(BOOL)arg1 ;
@end

