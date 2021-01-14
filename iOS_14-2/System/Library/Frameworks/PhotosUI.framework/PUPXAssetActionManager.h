/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionManager.h>

@class PXAssetActionManager;

@interface PUPXAssetActionManager : PUAssetActionManager {

	PXAssetActionManager* _underlyingActionManager;

}
-(id)init;
-(id)initWithUnderlyingActionManager:(id)arg1 ;
-(id)_selectionSnapshotForAssetReferences:(id)arg1 ;
-(id)px_selectionManager;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2 ;
@end

