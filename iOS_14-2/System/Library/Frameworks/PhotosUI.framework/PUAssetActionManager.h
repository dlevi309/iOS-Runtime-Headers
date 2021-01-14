/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAssetActionManagerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class PXSectionedSelectionManager;

@interface PUAssetActionManager : NSObject {

	id<PUAssetActionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUAssetActionManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * px_selectionManager; 
+(void)setUnlockDeviceHandler:(/*^block*/id)arg1 ;
+(id)actionManagerLog;
+(/*^block*/id)_unlockDeviceHandler;
-(id<PUAssetActionManagerDelegate>)delegate;
-(void)setDelegate:(id<PUAssetActionManagerDelegate>)arg1 ;
-(PXSectionedSelectionManager *)px_selectionManager;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)canPerformAction:(unsigned long long)arg1 onAllAssetReferences:(id)arg2 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)_assetsByAssetCollectionForAssetReferences:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(BOOL)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
@end

