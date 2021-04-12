/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXBarsController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGridActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGridOptionsControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSArray, PLDateRangeFormatter, PXPhotosViewModel, PXAssetSelectionTypeCounter, PXPhotosBarButtonItemsController, PXActionPerformer, PXPhotosGridActionMenuController, PXMiroMoviePresenter, NSMapTable, NSString, PXPhotosUIViewController;

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver> {

	NSArray* _leftBarButtonItemIdentifiers;
	NSArray* _rightBarButtonItemIdentifiers;
	NSArray* _toolbarItemIdentifiers;
	PLDateRangeFormatter* _dateRangeFormatter;
	PXPhotosViewModel* _viewModel;
	PXAssetSelectionTypeCounter* _assetTypeCounter;
	PXPhotosBarButtonItemsController* _barButtonItemsController;
	PXActionPerformer* _activeActionPerformer;
	PXActionPerformer* _lastActionPerformer;
	PXPhotosGridActionMenuController* _menuController;
	PXMiroMoviePresenter* _miroMoviePresenter;
	NSMapTable* _actionTypeByBarButtonItem;
	NSString* _contentSizeCategory;
	double _interButtonSpacing;
	double _endButtonSpacing;

}

@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXPhotosUIViewController * photosViewController; 
@property (nonatomic,readonly) PXAssetSelectionTypeCounter * assetTypeCounter;                           //@synthesize assetTypeCounter=_assetTypeCounter - In the implementation block
@property (nonatomic,readonly) PXPhotosBarButtonItemsController * barButtonItemsController;              //@synthesize barButtonItemsController=_barButtonItemsController - In the implementation block
@property (nonatomic,retain) NSArray * leftBarButtonItemIdentifiers;                                     //@synthesize leftBarButtonItemIdentifiers=_leftBarButtonItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * rightBarButtonItemIdentifiers;                                    //@synthesize rightBarButtonItemIdentifiers=_rightBarButtonItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * toolbarItemIdentifiers;                                           //@synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers - In the implementation block
@property (nonatomic,retain) PXActionPerformer * activeActionPerformer;                                  //@synthesize activeActionPerformer=_activeActionPerformer - In the implementation block
@property (nonatomic,retain) PXActionPerformer * lastActionPerformer;                                    //@synthesize lastActionPerformer=_lastActionPerformer - In the implementation block
@property (nonatomic,retain) PXPhotosGridActionMenuController * menuController;                          //@synthesize menuController=_menuController - In the implementation block
@property (nonatomic,retain) PXMiroMoviePresenter * miroMoviePresenter;                                  //@synthesize miroMoviePresenter=_miroMoviePresenter - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionTypeByBarButtonItem;                                   //@synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                                             //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) double interButtonSpacing;                                                  //@synthesize interButtonSpacing=_interButtonSpacing - In the implementation block
@property (assign,nonatomic) double endButtonSpacing;                                                    //@synthesize endButtonSpacing=_endButtonSpacing - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * dateRangeFormatter;                                //@synthesize dateRangeFormatter=_dateRangeFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXPhotosUIViewController *)photosViewController;
-(PXMiroMoviePresenter *)miroMoviePresenter;
-(id)init;
-(void)didChangeActionPerformerTypeForOptionsController:(id)arg1 ;
-(void)handleActionMenuBarButtonItem:(id)arg1 ;
-(BOOL)_actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)initWithPhotosViewController:(id)arg1 viewModel:(id)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(void)_handleActionTypeBarButtonItem:(id)arg1 ;
-(void)setMenuController:(PXPhotosGridActionMenuController *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(PLDateRangeFormatter *)dateRangeFormatter;
-(void)setToolbarItemIdentifiers:(NSArray *)arg1 ;
-(void)updateBars;
-(NSString *)contentSizeCategory;
-(void)_reloadOptionsButton;
-(id)_identifierForActionType:(id)arg1 ;
-(void)handleSelectBarButtonItem:(id)arg1 ;
-(id)createAssetActionManagerForAssetReference:(id)arg1 ;
-(id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(PXActionPerformer *)lastActionPerformer;
-(void)handleAddButtonItem:(id)arg1 ;
-(void)setLastActionPerformer:(PXActionPerformer *)arg1 ;
-(void)setEndButtonSpacing:(double)arg1 ;
-(id)hostViewControllerForActionPerformer:(id)arg1 ;
-(void)handleDeselectAllBarButtonItem:(id)arg1 ;
-(void)didChangeSystemItemForOptionsController:(id)arg1 ;
-(NSArray *)rightBarButtonItemIdentifiers;
-(void)setRightBarButtonItemIdentifiers:(NSArray *)arg1 ;
-(PXAssetSelectionTypeCounter *)assetTypeCounter;
-(void)handleCancelBarButtonItem:(id)arg1 ;
-(void)setLeftBarButtonItemIdentifiers:(NSArray *)arg1 ;
-(double)fixedSpaceForEndButtonSpacing;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)barAppearance;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3 ;
-(double)endButtonSpacing;
-(double)fixedSpaceForInterButtonSpacing;
-(void)setActiveActionPerformer:(PXActionPerformer *)arg1 ;
-(void)handleSelectAllBarButtonItem:(id)arg1 ;
-(double)interButtonSpacing;
-(void)setInterButtonSpacing:(double)arg1 ;
-(NSArray *)toolbarItemIdentifiers;
-(void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2 ;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(PXPhotosGridActionMenuController *)menuController;
-(NSArray *)leftBarButtonItemIdentifiers;
-(PXPhotosBarButtonItemsController *)barButtonItemsController;
-(void)photosGridActionPerformer:(id)arg1 filterStateChanged:(id)arg2 ;
-(NSMapTable *)actionTypeByBarButtonItem;
-(PXActionPerformer *)activeActionPerformer;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setMiroMoviePresenter:(PXMiroMoviePresenter *)arg1 ;
@end

