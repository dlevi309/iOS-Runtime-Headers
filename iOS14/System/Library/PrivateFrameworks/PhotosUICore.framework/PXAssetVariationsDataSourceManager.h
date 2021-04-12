/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXAssetEditOperationManagerObserver.h>

@class PHAsset, PXAssetEditOperationManager, PXAssetVariationsDataSource, NSString;

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver> {

	SCD_Struct_PX24 _needsUpdateFlags;
	BOOL _didCreateInitialDataSource;
	PHAsset* _asset;
	PXAssetEditOperationManager* _editOperationManager;
	PHAsset* _currentAsset;
	long long _pendingVariationType;
	long long _currentVariationType;

}

@property (nonatomic,retain) PHAsset * currentAsset;                                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (assign,nonatomic) long long pendingVariationType;                                    //@synthesize pendingVariationType=_pendingVariationType - In the implementation block
@property (assign,nonatomic) long long currentVariationType;                                    //@synthesize currentVariationType=_currentVariationType - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PXAssetEditOperationManager * editOperationManager;              //@synthesize editOperationManager=_editOperationManager - In the implementation block
@property (nonatomic,readonly) PXAssetVariationsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHAsset *)currentAsset;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)init;
-(PHAsset *)asset;
-(void)setCurrentAsset:(PHAsset *)arg1 ;
-(void)didPerformChanges;
-(void)_invalidateDataSource;
-(PXAssetVariationsDataSource *)dataSource;
-(void)_updateDataSourceIfNeeded;
-(void)_updateIfNeeded;
-(void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3 ;
-(PXAssetEditOperationManager *)editOperationManager;
-(id)initWithAsset:(id)arg1 editOperationManager:(id)arg2 ;
-(void)setPendingVariationType:(long long)arg1 ;
-(void)setCurrentVariationType:(long long)arg1 ;
-(id)_variationOptionWithType:(long long)arg1 asset:(id)arg2 ;
-(void)_invalidatePendingVariationType;
-(void)_updatePendingVariationTypeIfNeeded;
-(void)_invalidateCurrentVariationType;
-(void)_updateCurrentVariationTypeIfNeeded;
-(void)_assetEditOperationsDidChange;
-(long long)pendingVariationType;
-(long long)currentVariationType;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
@end

