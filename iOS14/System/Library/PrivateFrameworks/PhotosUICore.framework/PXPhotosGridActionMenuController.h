/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionMenuController.h>

@class PXPhotoKitAssetCollectionActionManager, NSArray;

@interface PXPhotosGridActionMenuController : PXActionMenuController {

	PXPhotoKitAssetCollectionActionManager* _assetCollectionActionManager;
	NSArray* _additionalActionTypes;
	PXPhotoKitAssetCollectionActionManager* _assetActionManager;

}

@property (nonatomic,readonly) PXPhotoKitAssetCollectionActionManager * assetActionManager;                        //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,copy) NSArray * additionalActionTypes;                                                        //@synthesize additionalActionTypes=_additionalActionTypes - In the implementation block
-(PXPhotoKitAssetCollectionActionManager *)assetCollectionActionManager;
-(PXPhotoKitAssetCollectionActionManager *)assetActionManager;
-(id)initWithActionManagers:(id)arg1 ;
-(id)initWithActionManagers:(id)arg1 selectionManager:(id)arg2 ;
-(id)_defaultActionTypes;
-(id)availableActionTypes;
-(BOOL)shouldAllowPerformanceOfActionType:(id)arg1 ;
-(NSArray *)additionalActionTypes;
-(void)setAdditionalActionTypes:(NSArray *)arg1 ;
@end

