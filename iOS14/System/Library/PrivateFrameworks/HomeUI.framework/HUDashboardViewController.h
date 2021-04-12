/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HUDashboardItemManagerDelegate.h>
#import <libobjc.A.dylib/HUDashboardScrollingAnimationControllerDelegate.h>
#import <libobjc.A.dylib/HUGridEmptyHomeViewDelegate.h>
#import <libobjc.A.dylib/HUPrototypeLayoutOptionsEditorViewControllerDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HUBannerCellDelegate.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFUserObserver.h>
#import <libobjc.A.dylib/HFMediaServiceManagerObserver.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUHomeKitObjectPresenting.h>
#import <libobjc.A.dylib/HUDashboardMenuNavigationActionDelegate.h>
#import <libobjc.A.dylib/HUDashboardMenuAddActionDelegate.h>

@protocol HUDashboardViewControllerDelegate, HUDashboardNavigator;
@class HUGridStatusListViewController, HUHomeStatusViewController, HUGridActionSetListViewController, HUGridCameraListViewController, HUDashboardItemManager, HUGridEmptyHomeView, HUDashboardLargeTitleButton, HUDynamicScrollingOptions, HUDashboardNavigationButton, HUDashboardScrollingAnimationController, NSMutableArray, UIDropInteraction, NSMutableDictionary, HUWallpaperView, NAFuture, NSUserDefaults, AMSUIUpdateMultiUserTokenTask, HUDashboardContext, HUGridLayoutOptions, NSString;

@interface HUDashboardViewController : HUControllableItemCollectionViewController <HFAccessoryObserver, HUDashboardItemManagerDelegate, HUDashboardScrollingAnimationControllerDelegate, HUGridEmptyHomeViewDelegate, HUPrototypeLayoutOptionsEditorViewControllerDelegate, UIDropInteractionDelegate, UIViewControllerTransitioningDelegate, HFHomeObserver, HUBannerCellDelegate, HFHomeManagerObserver, HFUserObserver, HFMediaServiceManagerObserver, HUPresentationDelegate, HUHomeKitObjectPresenting, HUDashboardMenuNavigationActionDelegate, HUDashboardMenuAddActionDelegate> {

	BOOL _useCustomDragAndDrop;
	BOOL _isHomeViewShown;
	BOOL _shouldShowFullMenu;
	BOOL _hasFinishedInitialDashboardLoad;
	BOOL _isTransitioningSizes;
	BOOL _isDisplayingEmptyHomeDashboard;
	BOOL _viewIsFullyVisible;
	BOOL _wallpapersWerePreloaded;
	BOOL _shouldTrackProgrammableSwitchActivations;
	HUGridStatusListViewController* _statusListViewController;
	HUHomeStatusViewController* _homeStatusViewController;
	HUGridActionSetListViewController* _actionSetListViewController;
	HUGridCameraListViewController* _cameraListViewController;
	id<HUDashboardViewControllerDelegate> _delegate;
	id<HUDashboardNavigator> _dashboardNavigator;
	HUDashboardItemManager* _dashboardItemManager;
	HUGridEmptyHomeView* _emptyHomeView;
	HUDashboardLargeTitleButton* _largeTitleButton;
	HUDynamicScrollingOptions* _dynamicScrollingOptions;
	HUDashboardNavigationButton* _navigationAddButton;
	HUDashboardNavigationButton* _navigationAnnounceButton;
	HUDashboardNavigationButton* _navigationHomesAndRoomsButton;
	HUDashboardNavigationButton* _navigationEditDoneButton;
	HUDashboardScrollingAnimationController* _statusAnimationController;
	HUDashboardScrollingAnimationController* _headlineAnimationController;
	HUDashboardScrollingAnimationController* _finishSetupAnimationController;
	NSMutableArray* _viewFullyVisibleFutures;
	UIDropInteraction* _dropInteraction;
	NSMutableDictionary* _cachedLayoutOptionsKeyedBySectionIdentifier;
	HUWallpaperView* _wallpaperView;
	long long __debug_nontrivialUpdateRequestCount;
	NAFuture* _accountFuture;
	NSUserDefaults* _defaults;
	AMSUIUpdateMultiUserTokenTask* _multiUserTokenFixTask;
	UIEdgeInsets _displayedSystemContentInset;

}

@property (assign,nonatomic,__weak) HUDashboardItemManager * dashboardItemManager;                                  //@synthesize dashboardItemManager=_dashboardItemManager - In the implementation block
@property (nonatomic,readonly) HUGridEmptyHomeView * emptyHomeView;                                                 //@synthesize emptyHomeView=_emptyHomeView - In the implementation block
@property (nonatomic,retain) HUDashboardLargeTitleButton * largeTitleButton;                                        //@synthesize largeTitleButton=_largeTitleButton - In the implementation block
@property (nonatomic,retain) HUDynamicScrollingOptions * dynamicScrollingOptions;                                   //@synthesize dynamicScrollingOptions=_dynamicScrollingOptions - In the implementation block
@property (nonatomic,retain) HUDashboardNavigationButton * navigationAddButton;                                     //@synthesize navigationAddButton=_navigationAddButton - In the implementation block
@property (nonatomic,retain) HUDashboardNavigationButton * navigationAnnounceButton;                                //@synthesize navigationAnnounceButton=_navigationAnnounceButton - In the implementation block
@property (nonatomic,retain) HUDashboardNavigationButton * navigationHomesAndRoomsButton;                           //@synthesize navigationHomesAndRoomsButton=_navigationHomesAndRoomsButton - In the implementation block
@property (nonatomic,retain) HUDashboardNavigationButton * navigationEditDoneButton;                                //@synthesize navigationEditDoneButton=_navigationEditDoneButton - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedInitialDashboardLoad;                                                  //@synthesize hasFinishedInitialDashboardLoad=_hasFinishedInitialDashboardLoad - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningSizes;                                                             //@synthesize isTransitioningSizes=_isTransitioningSizes - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingEmptyHomeDashboard;                                                   //@synthesize isDisplayingEmptyHomeDashboard=_isDisplayingEmptyHomeDashboard - In the implementation block
@property (nonatomic,retain) HUDashboardScrollingAnimationController * statusAnimationController;                   //@synthesize statusAnimationController=_statusAnimationController - In the implementation block
@property (nonatomic,retain) HUDashboardScrollingAnimationController * headlineAnimationController;                 //@synthesize headlineAnimationController=_headlineAnimationController - In the implementation block
@property (nonatomic,retain) HUDashboardScrollingAnimationController * finishSetupAnimationController;              //@synthesize finishSetupAnimationController=_finishSetupAnimationController - In the implementation block
@property (assign,nonatomic) BOOL viewIsFullyVisible;                                                               //@synthesize viewIsFullyVisible=_viewIsFullyVisible - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewFullyVisibleFutures;                                              //@synthesize viewFullyVisibleFutures=_viewFullyVisibleFutures - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                   //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLayoutOptionsKeyedBySectionIdentifier;                     //@synthesize cachedLayoutOptionsKeyedBySectionIdentifier=_cachedLayoutOptionsKeyedBySectionIdentifier - In the implementation block
@property (nonatomic,retain) HUWallpaperView * wallpaperView;                                                       //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (assign,nonatomic) BOOL wallpapersWerePreloaded;                                                          //@synthesize wallpapersWerePreloaded=_wallpapersWerePreloaded - In the implementation block
@property (assign,nonatomic) BOOL shouldTrackProgrammableSwitchActivations;                                         //@synthesize shouldTrackProgrammableSwitchActivations=_shouldTrackProgrammableSwitchActivations - In the implementation block
@property (assign,nonatomic) UIEdgeInsets displayedSystemContentInset;                                              //@synthesize displayedSystemContentInset=_displayedSystemContentInset - In the implementation block
@property (assign,nonatomic) long long _debug_nontrivialUpdateRequestCount;                                         //@synthesize _debug_nontrivialUpdateRequestCount=__debug_nontrivialUpdateRequestCount - In the implementation block
@property (nonatomic,retain) NAFuture * accountFuture;                                                              //@synthesize accountFuture=_accountFuture - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFullMenu;                                                               //@synthesize shouldShowFullMenu=_shouldShowFullMenu - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                                             //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) AMSUIUpdateMultiUserTokenTask * multiUserTokenFixTask;                                 //@synthesize multiUserTokenFixTask=_multiUserTokenFixTask - In the implementation block
@property (assign,nonatomic,__weak) id<HUDashboardViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HUDashboardContext * context; 
@property (nonatomic,readonly) HUGridActionSetListViewController * actionSetListViewController;                     //@synthesize actionSetListViewController=_actionSetListViewController - In the implementation block
@property (nonatomic,readonly) HUGridCameraListViewController * cameraListViewController;                           //@synthesize cameraListViewController=_cameraListViewController - In the implementation block
@property (nonatomic,readonly) HUGridStatusListViewController * statusListViewController;                           //@synthesize statusListViewController=_statusListViewController - In the implementation block
@property (nonatomic,readonly) HUHomeStatusViewController * homeStatusViewController;                               //@synthesize homeStatusViewController=_homeStatusViewController - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions; 
@property (assign,nonatomic) BOOL isHomeViewShown;                                                                  //@synthesize isHomeViewShown=_isHomeViewShown - In the implementation block
@property (assign,nonatomic,__weak) id<HUDashboardNavigator> dashboardNavigator;                                    //@synthesize dashboardNavigator=_dashboardNavigator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)viewWillLayoutSubviews;
-(NSUserDefaults *)defaults;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)mediaServicesDidUpdate:(id)arg1 ;
-(void)mediaServiceRemoved:(id)arg1 ;
-(void)defaultMediaServiceDidUpdate:(id)arg1 ;
-(void)mediaServiceDidUpdate:(id)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<HUDashboardViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_markAccessoriesAsUserNotified:(id)arg1 ;
-(void)setUseCustomDragAndDrop:(BOOL)arg1 ;
-(BOOL)isHomeViewShown;
-(void)setIsHomeViewShown:(BOOL)arg1 ;
-(void)setDashboardNavigator:(id<HUDashboardNavigator>)arg1 ;
-(void)setDashboardItemManager:(HUDashboardItemManager *)arg1 ;
-(HUDynamicScrollingOptions *)dynamicScrollingOptions;
-(void)setNavigationHomesAndRoomsButton:(HUDashboardNavigationButton *)arg1 ;
-(void)setStatusAnimationController:(HUDashboardScrollingAnimationController *)arg1 ;
-(void)setHeadlineAnimationController:(HUDashboardScrollingAnimationController *)arg1 ;
-(void)setFinishSetupAnimationController:(HUDashboardScrollingAnimationController *)arg1 ;
-(void)setViewFullyVisibleFutures:(NSMutableArray *)arg1 ;
-(void)setCachedLayoutOptionsKeyedBySectionIdentifier:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldTrackProgrammableSwitchActivations;
-(void)setAccountFuture:(NAFuture *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(HUDashboardNavigationButton *)navigationAnnounceButton;
-(void)showDashboardEditor;
-(void)showRoom:(id)arg1 ;
-(id)presentDetailsForItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)hu_preloadContent;
-(id)childViewControllersToPreload;
-(id)presentHomeKitObject:(id)arg1 destination:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)presentCameraProfile:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(BOOL)arg4 ;
-(id)presentCameraProfile:(id)arg1 forCameraClip:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentCameraProfile:(id)arg1 withPresentationHandler:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
-(HUGridStatusListViewController *)statusListViewController;
-(id)presentStatusDetailsForStatusItemClass:(Class)arg1 animated:(BOOL)arg2 ;
-(id)_presentQuickControlsForHomeKitItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)dismissPresentedViewControllersAnimated:(BOOL)arg1 ;
-(BOOL)_isWallpaperEnabled;
-(void)_updateEmptyHomeDashboardStateIfNeededAnimated:(BOOL)arg1 ;
-(HUDashboardItemManager *)dashboardItemManager;
-(NAFuture *)accountFuture;
-(void)_updateShowLargeTitleEditButtonAnimated:(BOOL)arg1 ;
-(void)_updateEditButtonAnimated:(BOOL)arg1 ;
-(void)_updateBarButtons;
-(NSMutableArray *)viewFullyVisibleFutures;
-(HUDashboardNavigationButton *)navigationHomesAndRoomsButton;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(HUDashboardContext *)context;
-(void)home:(id)arg1 didAddRoom:(id)arg2 ;
-(void)user:(id)arg1 didUpdateNeedsiTunesMultiUserRepair:(BOOL)arg2 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 ;
-(void)setIsDisplayingEmptyHomeDashboard:(BOOL)arg1 ;
-(HUGridEmptyHomeView *)emptyHomeView;
-(void)_setupLargeTitleButtonIfNecessary;
-(void)setLargeTitleButton:(HUDashboardLargeTitleButton *)arg1 ;
-(void)_didTapLargeTitleButton:(id)arg1 ;
-(void)dashboardItemManagerDidUpdateWallpaper:(id)arg1 ;
-(void)dashboardDidUpdateDashboardContext:(id)arg1 ;
-(void)emptyHomeCellAddAccessoryButtonPressed:(id)arg1 ;
-(void)emptyHomeCellLearnMoreButtonPressed:(id)arg1 ;
-(void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2 ;
-(void)layoutOptionsEditorDidFinish:(id)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)showAllHomesSettings;
-(void)showHomeSettings:(id)arg1 ;
-(void)showRoomSettings:(id)arg1 ;
-(void)addAccessoryToHome:(id)arg1 ;
-(void)addSceneToHome:(id)arg1 ;
-(id)_dashboardItemManager;
-(id)presentFeedbackFlowForCameraClip:(id)arg1 fromProfile:(id)arg2 ;
-(void)setDelegate:(id<HUDashboardViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)viewIsFullyVisible;
-(void)setHasFinishedInitialDashboardLoad:(BOOL)arg1 ;
-(void)invalidateDynamicBarButtonsForSenderSelector:(SEL)arg1 ;
-(void)_refreshStateForMediaProfile:(id)arg1 ;
-(id)_layoutOptionsForSectionIndex:(unsigned long long)arg1 ;
-(BOOL)hasFinishedInitialDashboardLoad;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)presentItemWithUUID:(id)arg1 destination:(unsigned long long)arg2 secondaryDestination:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg1 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 gridLayout:(id)arg2 wantsScrollingAdjustmentsForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 gridLayout:(id)arg2 alphaForItemAtIndexPath:(id)arg3 scrollDistance:(CGSize)arg4 ;
-(CGSize)collectionView:(id)arg1 gridLayout:(id)arg2 positionOffsetForItemAtIndexPath:(id)arg3 scrollDistance:(CGSize)arg4 ;
-(double)_scaleFactorWithCurrentScrollDistance:(CGSize)arg1 dynamicScrollingSetting:(SCD_Struct_HU2)arg2 timingFunction:(id)arg3 iterationCount:(long long)arg4 ;
-(id)actionSetListViewController:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)addSceneTileAction:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2 ;
-(BOOL)useCustomDragAndDrop;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForRoom:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(HUWallpaperView *)wallpaperView;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2 ;
-(void)startEditing;
-(id)setWallpaper:(id)arg1 withImage:(id)arg2 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(NSMutableDictionary *)cachedLayoutOptionsKeyedBySectionIdentifier;
-(void)setDynamicScrollingOptions:(HUDynamicScrollingOptions *)arg1 ;
-(id)_navigationHost;
-(void)_updateNavigationBarLayoutMargins;
-(id)_loadWallpaperWithVariant:(long long)arg1 ;
-(HUDashboardNavigationButton *)navigationAddButton;
-(void)_updateLeftBarButtons;
-(void)_updateRightBarButtons;
-(void)setNavigationButtons:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)setNavigationAddButton:(HUDashboardNavigationButton *)arg1 ;
-(HUDashboardNavigationButton *)navigationEditDoneButton;
-(void)setNavigationEditDoneButton:(HUDashboardNavigationButton *)arg1 ;
-(void)setNavigationAnnounceButton:(HUDashboardNavigationButton *)arg1 ;
-(void)bounceItem:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)_setUpHomesAndRoomsMenuForButton:(id)arg1 ;
-(void)showAddMenu:(id)arg1 ;
-(void)_launchAnnounceRecordingServiceForCurrentRoom:(id)arg1 ;
-(void)_launchAnnounceRecordingServiceForCurrentHome:(id)arg1 ;
-(void)_didTapHomesAndRoomsButton:(id)arg1 ;
-(unsigned long long)_incomingInvitationsCount;
-(BOOL)shouldShowFullMenu;
-(BOOL)canEditScreen;
-(void)_finishEditing:(id)arg1 ;
-(id<HUDashboardNavigator>)dashboardNavigator;
-(void)showAddSceneMenu;
-(BOOL)homeHasAccessories;
-(void)showAddSceneNoAccessoriesAlert;
-(void)_enableAnnounceButtons:(BOOL)arg1 delay:(unsigned long long)arg2 ;
-(void)showHome:(id)arg1 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)contentSizeCategoryDidChange;
-(HUHomeStatusViewController *)homeStatusViewController;
-(HUGridCameraListViewController *)cameraListViewController;
-(BOOL)_hasDetailViewControllerForItem:(id)arg1 ;
-(id)_quickControlDetailViewControllerForItem:(id)arg1 ;
-(void)setMultiUserTokenFixTask:(AMSUIUpdateMultiUserTokenTask *)arg1 ;
-(AMSUIUpdateMultiUserTokenTask *)multiUserTokenFixTask;
-(void)welcomeUISelected:(id)arg1 ;
-(void)_startEditing:(id)arg1 ;
-(HUDashboardScrollingAnimationController *)headlineAnimationController;
-(HUDashboardScrollingAnimationController *)finishSetupAnimationController;
-(HUDashboardScrollingAnimationController *)statusAnimationController;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)dealloc;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)isDisplayingEmptyHomeDashboard;
-(id)_defaultLayoutOptionsForViewSize:(CGSize)arg1 ;
-(BOOL)wallpapersWerePreloaded;
-(id)_loadWallpaperSlices;
-(void)setShouldTrackProgrammableSwitchActivations:(BOOL)arg1 ;
-(void)_updateScrollingAnimationControllersAnimated:(BOOL)arg1 ;
-(void)_updateAllowedNavigationOverlap;
-(void)setShouldShowFullMenu:(BOOL)arg1 ;
-(void)setViewIsFullyVisible:(BOOL)arg1 ;
-(HUGridActionSetListViewController *)actionSetListViewController;
-(long long)_debug_nontrivialUpdateRequestCount;
-(void)_updateAnnounceNotificationSettingsIfNeeded;
-(void)setWallpapersWerePreloaded:(BOOL)arg1 ;
-(void)set_debug_nontrivialUpdateRequestCount:(long long)arg1 ;
-(void)setIsTransitioningSizes:(BOOL)arg1 ;
-(UIEdgeInsets)displayedSystemContentInset;
-(void)setDisplayedSystemContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)isTransitioningSizes;
-(HUDashboardLargeTitleButton *)largeTitleButton;
@end
