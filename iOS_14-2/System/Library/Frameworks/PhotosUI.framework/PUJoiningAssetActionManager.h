/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAssetActionManager.h>

@class NSMapTable, PUAssetActionManager;

@interface PUJoiningAssetActionManager : PUAssetActionManager {

	NSMapTable* __actionManagerByClass;
	PUAssetActionManager* __actionManagerForNoAsset;

}

@property (nonatomic,readonly) NSMapTable * _actionManagerByClass;                                                             //@synthesize _actionManagerByClass=__actionManagerByClass - In the implementation block
@property (setter=_setActionManagerForNoAsset:,nonatomic,retain) PUAssetActionManager * _actionManagerForNoAsset;              //@synthesize _actionManagerForNoAsset=__actionManagerForNoAsset - In the implementation block
-(id)init;
-(void)registerActionManager:(id)arg1 forAssetClass:(Class)arg2 ;
-(id)_actionManagerForAsset:(id)arg1 ;
-(id)_actionManagerForAssets:(id)arg1 ;
-(NSMapTable *)_actionManagerByClass;
-(id)_actionManagerForAssetsByAssetCollection:(id)arg1 ;
-(PUAssetActionManager *)_actionManagerForNoAsset;
-(void)_setActionManagerForNoAsset:(id)arg1 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(BOOL)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
@end

