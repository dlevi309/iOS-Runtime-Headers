/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBarsController.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosDetailsActionMenuDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class PXAssetActionManager, PXAssetCollectionActionManager, PXBarAppearance, PXPhotosDetailsViewModel, PXSectionedSelectionManager, PXActionPerformer, PXPhotoDetailsActionMenuController, UIView, PXPhotosDetailsContext, PXPhotosDataSource, PXExtendedTraitCollection, NSMutableDictionary, PXPhotosDetailsBarSpec, PXPhotosDetailsUIViewController, NSString;

@interface PXPhotosDetailsBarsController : PXBarsController <PXPhotosDataSourceChangeObserver, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate> {

	SCD_Struct_PX59 _needsUpdateFlags;
	BOOL _topTrailingSelectCancelButtonVisible;
	BOOL __showTitleView;
	BOOL _shouldAddActionButton;
	PXAssetActionManager* __assetActionManager;
	PXAssetCollectionActionManager* __assetCollectionActionManager;
	PXBarAppearance* __barAppearance;
	PXPhotosDetailsViewModel* __viewModel;
	PXSectionedSelectionManager* __selectionManager;
	PXActionPerformer* __activePerformer;
	PXActionPerformer* __lastActionPerformer;
	PXPhotoDetailsActionMenuController* __activeMenuController;
	UIView* __titleView;
	PXPhotosDetailsContext* __context;
	PXPhotosDataSource* __dataSource;
	PXExtendedTraitCollection* __extendedTraitCollection;
	NSMutableDictionary* __barButtonItemByActionType;
	NSMutableDictionary* __barButtonItemCacheByBarItemIdentifier;

}

@property (setter=_setBarAppearance:,nonatomic,retain) PXBarAppearance * _barAppearance;                                   //@synthesize _barAppearance=__barAppearance - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsViewModel * _viewModel;                                                      //@synthesize _viewModel=__viewModel - In the implementation block
@property (setter=_setSelectionManager:,nonatomic,retain) PXSectionedSelectionManager * _selectionManager;                 //@synthesize _selectionManager=__selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * _assetCollectionActionManager;                             //@synthesize _assetCollectionActionManager=__assetCollectionActionManager - In the implementation block
@property (nonatomic,readonly) PXAssetActionManager * _assetActionManager;                                                 //@synthesize _assetActionManager=__assetActionManager - In the implementation block
@property (setter=_setActivePerformer:,nonatomic,retain) PXActionPerformer * _activePerformer;                             //@synthesize _activePerformer=__activePerformer - In the implementation block
@property (assign,setter=_setLastActionPerformer:,nonatomic,__weak) PXActionPerformer * _lastActionPerformer;              //@synthesize _lastActionPerformer=__lastActionPerformer - In the implementation block
@property (nonatomic,retain) PXPhotoDetailsActionMenuController * _activeMenuController;                                   //@synthesize _activeMenuController=__activeMenuController - In the implementation block
@property (nonatomic,readonly) UIView * _titleView;                                                                        //@synthesize _titleView=__titleView - In the implementation block
@property (assign,setter=_setShowTitleView:,nonatomic) BOOL _showTitleView;                                                //@synthesize _showTitleView=__showTitleView - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsContext * _context;                                                          //@synthesize _context=__context - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * _dataSource;                                                           //@synthesize _dataSource=__dataSource - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * _extendedTraitCollection;                                       //@synthesize _extendedTraitCollection=__extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _barButtonItemByActionType;                                           //@synthesize _barButtonItemByActionType=__barButtonItemByActionType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _barButtonItemCacheByBarItemIdentifier;                               //@synthesize _barButtonItemCacheByBarItemIdentifier=__barButtonItemCacheByBarItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldAddActionButton;                                                                   //@synthesize shouldAddActionButton=_shouldAddActionButton - In the implementation block
@property (nonatomic,retain) PXPhotosDetailsBarSpec * barSpec; 
@property (assign,nonatomic,__weak) PXPhotosDetailsUIViewController * viewController; 
@property (assign,nonatomic) BOOL topTrailingSelectCancelButtonVisible;                                                    //@synthesize topTrailingSelectCancelButtonVisible=_topTrailingSelectCancelButtonVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(PXActionPerformer *)_lastActionPerformer;
-(PXAssetActionManager *)_assetActionManager;
-(PXAssetCollectionActionManager *)_assetCollectionActionManager;
-(PXActionPerformer *)_activePerformer;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)updateBars;
-(UIView *)_titleView;
-(PXPhotosDataSource *)_dataSource;
-(id)initWithContext:(id)arg1 viewModel:(id)arg2 extendedTraitCollection:(id)arg3 ;
-(void)_setSelectionManager:(id)arg1 ;
-(id)_barButtonItemsForBarItems:(id)arg1 placement:(unsigned long long)arg2 ;
-(id)_barButtonItemForBarItem:(id)arg1 placement:(unsigned long long)arg2 ;
-(BOOL)_shouldAddBarItemForBarItemIdentifier:(id)arg1 ;
-(BOOL)_shouldEnableActionWithBarItemIdentifier:(id)arg1 ;
-(id)createTitleView;
-(id)createAssetActionManager;
-(void)_updateTitleViewAlpha;
-(id)createAssetCollectionActionManager;
-(void)shouldShowTitleView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTopTrailingSelectCancelButtonVisible:(BOOL)arg1 ;
-(void)setTopTrailingSelectCancelButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)selectBarButtonItemTapped:(id)arg1 ;
-(void)cancelBarButtonItemTapped:(id)arg1 ;
-(void)doneBarButtonItemTapped:(id)arg1 ;
-(void)faceModeButtonItemTapped:(id)arg1 ;
-(void)actionMenuButtonItemTapped:(id)arg1 ;
-(void)removeActionButton;
-(id)_sourceBarButtonItemForActionType:(id)arg1 ;
-(BOOL)_dismissViewControllerIfSafeAnimated:(BOOL)arg1 ;
-(BOOL)topTrailingSelectCancelButtonVisible;
-(PXBarAppearance *)_barAppearance;
-(void)_setBarAppearance:(id)arg1 ;
-(void)_setLastActionPerformer:(id)arg1 ;
-(PXPhotoDetailsActionMenuController *)_activeMenuController;
-(void)set_activeMenuController:(PXPhotoDetailsActionMenuController *)arg1 ;
-(BOOL)_showTitleView;
-(void)_setShowTitleView:(BOOL)arg1 ;
-(NSMutableDictionary *)_barButtonItemByActionType;
-(NSMutableDictionary *)_barButtonItemCacheByBarItemIdentifier;
-(BOOL)shouldAddActionButton;
-(void)setShouldAddActionButton:(BOOL)arg1 ;
-(void)_invalidateAssetCollectionActionManager;
-(void)_setActivePerformer:(id)arg1 ;
-(void)_invalidateAssetActionManager;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(PXPhotosDetailsViewModel *)_viewModel;
-(id)_flexibleSpaceBarButtonItem;
-(long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1 ;
-(void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3 ;
-(void)actionMenu:(id)arg1 assetCollectionActionPerformer:(id)arg2 playMovieForAssetCollection:(id)arg3 ;
-(BOOL)actionMenu:(id)arg1 actionPerformer:(id)arg2 presentViewController:(id)arg3 ;
-(BOOL)actionMenu:(id)arg1 actionPerformer:(id)arg2 dismissViewController:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PXPhotosDetailsContext *)_context;
-(id)_localizedSelectionTitle;
-(PXSectionedSelectionManager *)_selectionManager;
-(PXExtendedTraitCollection *)_extendedTraitCollection;
-(id)_assetCollection;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

