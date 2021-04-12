/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitAssetActionManager.h>

@protocol PUVideoListAssetExpungeActionPerformerDelegate;
@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager {

	id<PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;

}

@property (nonatomic,retain) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
-(id<PUVideoListAssetExpungeActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PUVideoListAssetExpungeActionPerformerDelegate>)arg1 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2 ;
@end

