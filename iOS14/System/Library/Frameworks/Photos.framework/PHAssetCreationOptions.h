/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _copyAsAlternateAsset;
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
@property (assign,nonatomic) BOOL copyAsAlternateAsset;                                                   //@synthesize copyAsAlternateAsset=_copyAsAlternateAsset - In the implementation block
-(PHAssetCreationMetadataCopyOptions *)metadataCopyOptions;
-(id)init;
-(BOOL)copyOriginal;
-(BOOL)shouldDownloadOrCloudReReferenceMissingResources;
-(void)setAdjustmentBakeInOptions:(PHAssetCreationAdjustmentBakeInOptions *)arg1 ;
-(void)setShouldDownloadOrCloudReReferenceMissingResources:(BOOL)arg1 ;
-(void)setDestinationAssetAvailabilityHandler:(id)arg1 ;
-(void)setMetadataCopyOptions:(PHAssetCreationMetadataCopyOptions *)arg1 ;
-(SCD_Struct_PH9)stillSourceTime;
-(void)setStillSourceTime:(SCD_Struct_PH9)arg1 ;
-(BOOL)resetUserSpecificMetadata;
-(void)setResetUserSpecificMetadata:(BOOL)arg1 ;
-(BOOL)copyStillPhotoFromLivePhoto;
-(void)setCopyStillPhotoFromLivePhoto:(BOOL)arg1 ;
-(void)setCopyOriginal:(BOOL)arg1 ;
-(BOOL)copySinglePhotoFromBurst;
-(void)setCopySinglePhotoFromBurst:(BOOL)arg1 ;
-(BOOL)copyAsAlternateAsset;
-(void)setCopyAsAlternateAsset:(BOOL)arg1 ;
-(PHAssetCreationAdjustmentBakeInOptions *)adjustmentBakeInOptions;
-(id)destinationAssetAvailabilityHandler;
@end

