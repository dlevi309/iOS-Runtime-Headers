/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout, PXCuratedLibraryActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {

	PXGLayout* _layout;
	PXCuratedLibraryActionManager* _actionManager;

}

@property (nonatomic,readonly) PXCuratedLibraryActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * layout;                                    //@synthesize layout=_layout - In the implementation block
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3 ;
-(void)performUserInteractionTask;
-(id)buttonSpriteReference;
-(PXCuratedLibraryActionManager *)actionManager;
-(void)_presentToUserOptionsFromActionPerformers:(id)arg1 forAssetCollectionReference:(id)arg2 ;
-(void)setLayout:(PXGLayout *)arg1 ;
-(BOOL)performerResetsAfterCompletion;
-(id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3 ;
-(PXGLayout *)layout;
@end

