/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCMMAssetsViewControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMActionControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosDetailsActionMenuDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXToastViewControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMActionPerformerDelegate.h>

@protocol PXCMMViewControllerDelegate, PXCMMActionControllerDelegate;
@class PXMomentShareStatusPresentation, PXCMMSession, PXOneUpPresentation, PXCMMSpecManager, UINavigationBar, NSArray, PXCMMAssetsViewController, PXUpdater, NSProgress, UIActivityIndicatorView, UIBarButtonItem, PXPhotoDetailsActionMenuController, PXMiroMoviePresenter, NSString;

@interface PXCMMViewController : UIViewController <PXChangeObserver, PXCMMAssetsViewControllerDelegate, PXCMMActionControllerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate, PXSectionedDataSourceManagerObserver, PXAssetsDataSourceManagerObserver, PXToastViewControllerDelegate, PXCMMActionPerformerDelegate> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	BOOL _hasStartedPreloadingTasks;
	BOOL _didIncrementNumberOfPresentedSendBacks;
	BOOL _showTitleInNavigationBar;
	BOOL _loadingPeopleSuggestions;
	PXCMMSession* _session;
	id<PXCMMViewControllerDelegate> _delegate;
	id<PXCMMActionControllerDelegate> _actionDelegate;
	PXOneUpPresentation* _oneUpPresentation;
	PXCMMSpecManager* _specManager;
	UINavigationBar* _standaloneNavigationBar;
	NSArray* _layoutConstraints;
	PXCMMAssetsViewController* _assetsViewController;
	PXUpdater* _updater;
	NSProgress* _actionProgress;
	UIActivityIndicatorView* _activityIndicatorView;
	UIBarButtonItem* _progressButton;
	UIBarButtonItem* _actionMenuButtonItem;
	PXPhotoDetailsActionMenuController* _activeActionMenuController;
	PXMiroMoviePresenter* _miroMoviePresenter;

}

@property (nonatomic,readonly) PXOneUpPresentation * oneUpPresentation;                                    //@synthesize oneUpPresentation=_oneUpPresentation - In the implementation block
@property (nonatomic,readonly) PXCMMSpecManager * specManager;                                             //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,retain) UINavigationBar * standaloneNavigationBar;                                    //@synthesize standaloneNavigationBar=_standaloneNavigationBar - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                  //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,readonly) PXCMMAssetsViewController * assetsViewController;                           //@synthesize assetsViewController=_assetsViewController - In the implementation block
@property (assign,nonatomic) BOOL showTitleInNavigationBar;                                                //@synthesize showTitleInNavigationBar=_showTitleInNavigationBar - In the implementation block
@property (nonatomic,readonly) PXUpdater * updater;                                                        //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) NSProgress * actionProgress;                                                  //@synthesize actionProgress=_actionProgress - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * progressButton;                                             //@synthesize progressButton=_progressButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionMenuButtonItem;                                       //@synthesize actionMenuButtonItem=_actionMenuButtonItem - In the implementation block
@property (nonatomic,retain) PXPhotoDetailsActionMenuController * activeActionMenuController;              //@synthesize activeActionMenuController=_activeActionMenuController - In the implementation block
@property (assign,getter=isLoadingPeopleSuggestions,nonatomic) BOOL loadingPeopleSuggestions;              //@synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions - In the implementation block
@property (nonatomic,retain) PXMiroMoviePresenter * miroMoviePresenter;                                    //@synthesize miroMoviePresenter=_miroMoviePresenter - In the implementation block
@property (nonatomic,readonly) PXCMMSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMActionControllerDelegate> actionDelegate;                      //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)px_gridPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateTitle;
-(void)updateViewConstraints;
-(PXCMMSpecManager *)specManager;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateStyle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PXMiroMoviePresenter *)miroMoviePresenter;
-(id)initWithSession:(id)arg1 ;
-(id<PXCMMViewControllerDelegate>)delegate;
-(void)_presentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id<PXCMMActionControllerDelegate>)actionDelegate;
-(long long)positionForBar:(id)arg1 ;
-(PXCMMSession *)session;
-(PXOneUpPresentation *)oneUpPresentation;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setActionProgress:(NSProgress *)arg1 ;
-(NSProgress *)actionProgress;
-(void)setDelegate:(id<PXCMMViewControllerDelegate>)arg1 ;
-(void)setLoadingPeopleSuggestions:(BOOL)arg1 ;
-(PXUpdater *)updater;
-(BOOL)isLoadingPeopleSuggestions;
-(void)setActionDelegate:(id<PXCMMActionControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setNeedsUpdate;
-(void)didDismissToastViewController:(id)arg1 ;
-(void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3 ;
-(void)didTapAddMoreButtonForAssetsViewController:(id)arg1 ;
-(void)actionMenu:(id)arg1 assetCollectionActionPerformer:(id)arg2 playMovieForAssetCollection:(id)arg3 ;
-(BOOL)actionMenu:(id)arg1 actionPerformer:(id)arg2 presentViewController:(id)arg3 ;
-(BOOL)actionMenu:(id)arg1 actionPerformer:(id)arg2 dismissViewController:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setupNavigationItem;
-(id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2 ;
-(id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2 ;
-(BOOL)shouldShowAddMoreButtonForAssetsViewController:(id)arg1 ;
-(id)oneUpPresentationForAssetsViewController:(id)arg1 ;
-(void)didPerformDeletionActionForAssetsViewController:(id)arg1 ;
-(void)assetsViewControllerDidTapActionButton:(id)arg1 ;
-(void)assetsViewControllerDidTapSendBackActionButton:(id)arg1 ;
-(void)_activateNotificationSuppressionIfNecessary;
-(void)_startPreloadingTasksIfNeeded;
-(void)_deactivateNotificationSuppressionIfNecessary;
-(BOOL)_shouldShowActionMenu;
-(void)_performCancel;
-(void)_handleActionMenuButtonItem:(id)arg1 ;
-(void)_updateComponentViewController:(id)arg1 frame:(CGRect)arg2 ;
-(void)_updateComponentsViewControllerLayout;
-(id)_localizedSelectionTitle;
-(void)_updateActionProgress;
-(BOOL)_canPresentComposeRecipientViewController;
-(void)_presentComposeRecipientViewController;
-(void)_completePeopleSuggestionsLoading;
-(void)_handleActionButton;
-(void)_handleComposeRecipientCancelButton:(id)arg1 ;
-(void)ppt_setSelecting:(BOOL)arg1 ;
-(void)_dismissViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(UINavigationBar *)standaloneNavigationBar;
-(void)setStandaloneNavigationBar:(UINavigationBar *)arg1 ;
-(PXCMMAssetsViewController *)assetsViewController;
-(BOOL)showTitleInNavigationBar;
-(void)setShowTitleInNavigationBar:(BOOL)arg1 ;
-(UIBarButtonItem *)progressButton;
-(void)setProgressButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)actionMenuButtonItem;
-(void)setActionMenuButtonItem:(UIBarButtonItem *)arg1 ;
-(PXPhotoDetailsActionMenuController *)activeActionMenuController;
-(void)setActiveActionMenuController:(PXPhotoDetailsActionMenuController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setMiroMoviePresenter:(PXMiroMoviePresenter *)arg1 ;
@end

