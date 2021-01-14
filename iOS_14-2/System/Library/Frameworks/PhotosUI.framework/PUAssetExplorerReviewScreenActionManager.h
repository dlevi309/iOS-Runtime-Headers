/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionManager.h>

@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider;
@class PUUUIDSelectionManager;

@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager {

	id<PUAssetExplorerReviewScreenActionManagerDelegate> _reviewScreenActionManagerDelegate;
	id<PUReviewAssetProvider> _reviewAssetProvider;
	PUUUIDSelectionManager* _selectionManager;
	PUUUIDSelectionManager* _disableLivePhotosSelectionManager;
	unsigned long long __sourceType;

}

@property (nonatomic,readonly) unsigned long long _sourceType;                                                                           //@synthesize _sourceType=__sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PUAssetExplorerReviewScreenActionManagerDelegate> reviewScreenActionManagerDelegate;              //@synthesize reviewScreenActionManagerDelegate=_reviewScreenActionManagerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUReviewAssetProvider> reviewAssetProvider;                                                       //@synthesize reviewAssetProvider=_reviewAssetProvider - In the implementation block
@property (nonatomic,readonly) PUUUIDSelectionManager * selectionManager;                                                                //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PUUUIDSelectionManager * disableLivePhotosSelectionManager;                                               //@synthesize disableLivePhotosSelectionManager=_disableLivePhotosSelectionManager - In the implementation block
-(PUUUIDSelectionManager *)selectionManager;
-(unsigned long long)_sourceType;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(Class)_actionPerformerClassForActionType:(unsigned long long)arg1 ;
-(BOOL)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)arg1 ;
-(unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)arg1 ;
-(id<PUAssetExplorerReviewScreenActionManagerDelegate>)reviewScreenActionManagerDelegate;
-(id<PUReviewAssetProvider>)reviewAssetProvider;
-(void)setReviewScreenActionManagerDelegate:(id<PUAssetExplorerReviewScreenActionManagerDelegate>)arg1 ;
-(void)setReviewAssetProvider:(id<PUReviewAssetProvider>)arg1 ;
-(PUUUIDSelectionManager *)disableLivePhotosSelectionManager;
@end

