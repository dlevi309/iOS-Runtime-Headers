/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@class PUBrowsingViewModel, PUAssetReference, PUAssetActionManager, PXUIAssetBadgeView, NSString;

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate> {

	BOOL __performingChanges;
	BOOL __needsUpdateBadgeView;
	BOOL __isOverContent;
	PUBrowsingViewModel* _browsingViewModel;
	PUAssetReference* _assetReference;
	PUAssetActionManager* _actionManager;
	PXUIAssetBadgeView* __badgeView;

}

@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                                              //@synthesize _badgeView=__badgeView - In the implementation block
@property (assign,setter=_setPerformingChanges:,getter=_isPerformingChanges,nonatomic) BOOL _performingChanges;              //@synthesize _performingChanges=__performingChanges - In the implementation block
@property (assign,setter=_setNeedsUpdateBadgeView:,nonatomic) BOOL _needsUpdateBadgeView;                                    //@synthesize _needsUpdateBadgeView=__needsUpdateBadgeView - In the implementation block
@property (assign,setter=_setOverContent:,nonatomic) BOOL _isOverContent;                                                    //@synthesize _isOverContent=__isOverContent - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                                        //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,retain) PUAssetActionManager * actionManager;                                                           //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)badgeTileSize;
+(void)_configureBadgeView:(id)arg1 isOverContent:(BOOL)arg2 isLivePhotoDisabled:(BOOL)arg3 ;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(void)becomeReusable;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_isPerformingChanges;
-(PXUIAssetBadgeView *)_badgeView;
-(void)_updateIfNeeded;
-(void)setActionManager:(PUAssetActionManager *)arg1 ;
-(void)prepareForReuse;
-(PUAssetActionManager *)actionManager;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)viewDidLoad;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_invalidateBadgeView;
-(BOOL)_needsUpdate;
-(PUAssetReference *)assetReference;
-(id)loadView;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)_disableLivePhotosSelectionManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
-(id)_reviewActionManager;
-(void)_setOverContent:(BOOL)arg1 ;
-(void)_updateBadgeViewIfNeeded;
-(BOOL)_needsUpdateBadgeView;
-(void)_setNeedsUpdateBadgeView:(BOOL)arg1 ;
-(BOOL)_isOverContent;
@end

