/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKLayoutCardViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerDelegate.h>
#import <libobjc.A.dylib/MKActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/MKPlaceVenueBrowseViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceParentInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceRelatedViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceQuickLinksViewControllerDelegate.h>
#import <libobjc.A.dylib/MKCollectionViewProvider.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/MKOfficialAppViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardPhotosControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardReviewsControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardEncyclopedicControllerDelegate.h>
#import <libobjc.A.dylib/MKTransitDepaturesViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardHeaderViewControllerDelegate.h>
#import <libobjc.A.dylib/MKTransitAttributionViewControllerDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <libobjc.A.dylib/MKWebContentViewControllerDelegate.h>
#import <libobjc.A.dylib/MKETAProviderDelegate.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>
#import <libobjc.A.dylib/MKPlaceHeaderButtonsViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceServiceHoursViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardController.h>
#import <libobjc.A.dylib/_MKInfoCardAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardActionControllerDelegate.h>
#import <libobjc.A.dylib/MKMuninViewProvider.h>

@protocol _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, CNContactViewControllerPrivateDelegate, UIScrollViewDelegate;
@class GEOAutomobileOptions, GEOTransitOptions, MKMuninView, MKPlaceActionManager, MKPlaceCardHeaderViewController, MKPlaceHeaderButtonsViewController, MKPlaceInfoViewController, MKPlaceEncyclopedicViewController, MKPlaceInlineMapViewController, MKPlacePoisInlineMapViewController, MKPlaceCardFooterActionsViewController, MKPlaceCardActionsRowViewController, MKETAProvider, MKOfficialAppViewController, MKPlaceCollectionViewController, MKInfoCardLoadingView, CNContact, CNContactViewController, CNContactStore, MKMuninContainerView, NSMapTable, NSUserActivity, NSTimer, NSString, CNContactNavigationController, RadiosPreferences, _MKPlaceActionButtonController, NSMutableArray, CLLocation, MKMapItem;

@interface _MKPlaceViewController : MKLayoutCardViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, RadiosPreferencesDelegate, MKPlaceVenueBrowseViewControllerDelegate, MKPlaceParentInfoViewControllerDelegate, MKPlaceRelatedViewControllerDelegate, MKPlaceQuickLinksViewControllerDelegate, MKCollectionViewProvider, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MKOfficialAppViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, MKWebContentViewControllerDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceServiceHoursViewControllerProtocol, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate, MKMuninViewProvider> {

	MKPlaceActionManager* _actionManager;
	MKPlaceCardHeaderViewController* _headerViewController;
	MKPlaceHeaderButtonsViewController* _buttonsHeaderController;
	MKPlaceInfoViewController* _infoViewController;
	MKPlaceEncyclopedicViewController* _encyclopedicViewController;
	MKPlaceInlineMapViewController* _inlineMapViewController;
	MKPlacePoisInlineMapViewController* _poisInlineMapViewController;
	MKPlaceCardFooterActionsViewController* _placeActionViewController;
	MKPlaceCardActionsRowViewController* _placeActionRowViewController;
	MKETAProvider* _etaProvider;
	BOOL _attemptedToCreateAddressBook;
	MKOfficialAppViewController* _officialAppViewController;
	MKPlaceCollectionViewController* _collectionViewController;
	MKInfoCardLoadingView* _loadingView;
	CNContact* _originalContactCopy;
	CNContactViewController* _updatingContactController;
	CNContactViewController* _creatingContactController;
	CNContactViewController* _editingContactController;
	CNContactStore* _contactStore;
	MKMuninContainerView* _muninContainerView;
	unsigned long long _muninMissCounter;
	NSMapTable* _additionalViewControllers;
	BOOL _overrideDefaultShowRAP;
	BOOL _hasContactOnlyMapItem;
	BOOL _isUpdatingViewControllers;
	CGPoint _beginAnalyticsScrollingPoint;
	NSUserActivity* _donationUserActivity;
	NSTimer* _webContentLoadingTimer;
	BOOL _hasCheckedDistanceAvailability;
	BOOL _placeInBookmarks;
	BOOL _showContactActions;
	BOOL _inAirplaneModeAndNetworkUnreachable;
	BOOL _placeInShortcuts;
	NSString* _headerTitle;
	id<_MKPlaceItem> _placeItem;
	CNContact* _contact;
	CNContact* _originalContact;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
	id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
	/*^block*/id _placeViewFeedbackAppLaunchHandler;
	unsigned long long _options;
	double headerHeight;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	CNContactNavigationController*<CNContactViewControllerPrivateDelegate> _contactsNavigationController;
	RadiosPreferences* _radioPreferences;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	_MKPlaceActionButtonController* _headerSecondaryButtonController;
	NSMutableArray* _viewDidAppearBlocks;
	CLLocation* _location;

}

@property (nonatomic,retain) CNContact * originalContact;                                                                                             //@synthesize originalContact=_originalContact - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedDistanceAvailability;                                                                                     //@synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability - In the implementation block
@property (assign,nonatomic) BOOL inAirplaneModeAndNetworkUnreachable;                                                                                //@synthesize inAirplaneModeAndNetworkUnreachable=_inAirplaneModeAndNetworkUnreachable - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                                                                    //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                                                                                    //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id placeViewFeedbackAppLaunchHandler;                                                                                      //@synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate;                                             //@synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;                                                   //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                                                                   //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL showContactActions;                                                                                                 //@synthesize showContactActions=_showContactActions - In the implementation block
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                                                                            //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic) BOOL placeInBookmarks;                                                                                                   //@synthesize placeInBookmarks=_placeInBookmarks - In the implementation block
@property (assign,nonatomic) BOOL placeInShortcuts;                                                                                                   //@synthesize placeInShortcuts=_placeInShortcuts - In the implementation block
@property (assign,nonatomic,__weak) CNContactNavigationController*<CNContactViewControllerPrivateDelegate> contactsNavigationController;              //@synthesize contactsNavigationController=_contactsNavigationController - In the implementation block
@property (assign,nonatomic) double headerHeight; 
@property (nonatomic,retain) _MKPlaceActionButtonController * headerSecondaryButtonController;                                                        //@synthesize headerSecondaryButtonController=_headerSecondaryButtonController - In the implementation block
@property (assign,nonatomic) BOOL showTitleBar; 
@property (assign,nonatomic) BOOL hideDirectionsButtons; 
@property (assign,nonatomic) BOOL showEditButton; 
@property (assign,nonatomic) BOOL hideInlineMap; 
@property (assign,nonatomic) BOOL showInlineMapInHeader; 
@property (assign,nonatomic) BOOL showNearbyApps; 
@property (assign,nonatomic) BOOL showReportAProblem; 
@property (assign,nonatomic) BOOL disableReportAProblem; 
@property (nonatomic,retain) CLLocation * location;                                                                                                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL showSimulateLocation; 
@property (assign,nonatomic) BOOL showOpenInSkyline; 
@property (assign,nonatomic) BOOL showOpenInPinpoint; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,copy) NSString * headerTitle;                                                                                                    //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) double headerSecondaryNameLabelPadding; 
@property (assign,nonatomic) BOOL showShareActionsButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                                                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                                                                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                                                                      //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) double contentAlpha; 
@property (nonatomic,readonly) MKMuninView * muninView; 
+(void)initialize;
+(double)headerHeightInMinimalMode;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(CLLocation *)location;
-(CNContact *)contact;
-(id)_contactStore;
-(void)airplaneModeChanged;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)_commonInit;
-(id)_traits;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(long long)preferredStatusBarStyle;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(BOOL)isLoading;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)hasWebContent;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setContactsNavigationController:(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)arg1 ;
-(void)setShowEditButton:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8 ;
-(MKMuninView *)muninView;
-(int)currentMapViewTargetForAnalytics;
-(int)currentUITargetForAnalytics;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(double)contentAlpha;
-(void)setContentVisibility:(long long)arg1 ;
-(id)collectionViews;
-(void)collectionIdentifierSelected:(id)arg1 ;
-(void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3 ;
-(id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)_showEditSheet:(id)arg1 ;
-(void)networkReachableChanged:(id)arg1 ;
-(void)updateAirplaneModeNetworkUnreachable;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)_updateThemeView:(id)arg1 ;
-(void)_updateThemeViewController:(id)arg1 ;
-(void)_updateTheme;
-(id<_MKPlaceItem>)placeItem;
-(id)draggableContent;
-(id)additionalViewControllersAtPosition:(long long)arg1 ;
-(BOOL)isLayoutDynamic;
-(BOOL)isWebContentLoading;
-(void)showContentIfLoaded;
-(void)addLoadingView;
-(void)removeLoadingViewAnimated:(BOOL)arg1 ;
-(CNContact *)originalContact;
-(BOOL)isGuardianRestrictedCNContainer;
-(BOOL)_hasContactAccess;
-(BOOL)_contactStoredMatchingMapItem:(id)arg1 ;
-(_MKPlaceActionButtonController *)headerSecondaryButtonController;
-(void)_createViewControllersForBrand:(id)arg1 ;
-(void)_createViewControllersForShortPlacecard:(id)arg1 ;
-(void)_createViewControllers:(id)arg1 ;
-(void)_logClientAndServerLayouts:(id)arg1 ;
-(void)_setDefaultViewControllers:(id)arg1 ;
-(void)hideContentIfLoading;
-(void)resetWebContentTimer;
-(void)removeAdditionalViewController:(id)arg1 ;
-(int)_moduleTypeForViewController:(id)arg1 ;
-(id)createRowActions;
-(id)createMessageViewController;
-(id)infosVC;
-(id)messagesHoursVC;
-(id)poisInlineMapVC;
-(id)createFooterActions;
-(id)parentVenueVC;
-(id)parentVC;
-(id)inlineMapVC;
-(id)reservationVC;
-(id)venueBrowseVC;
-(id)venueInfoContentsVC;
-(unsigned long long)annotatedItemListDisplayStyle;
-(id)annotatedItemListViewControllerWithDisplayStyle:(unsigned long long)arg1 ;
-(id)photoVC;
-(id)collectionViewController;
-(id)hoursVC;
-(id)transitVC;
-(id)transitAttributionVC;
-(id)quickLinksVC;
-(id)encyclopedicVC;
-(id)businessInfosVC;
-(id)serviceHoursVC;
-(id)reviewsVC;
-(id)attributionsVC;
-(id)relatedPlaceListVC;
-(id)officialAppsVC;
-(id)webContentVCWithURL:(id)arg1 ;
-(BOOL)allowTransitLineSelection;
-(BOOL)_shouldShowSiriReservationController;
-(BOOL)shouldDisplayVenueBrowseVC;
-(BOOL)showNearbyApps;
-(void)_updateViewControllers;
-(void)setPlaceItem:(id)arg1 updateOriginalContact:(BOOL)arg2 ;
-(void)setOriginalContact:(CNContact *)arg1 ;
-(void)setPlaceInShortcuts:(BOOL)arg1 ;
-(BOOL)_shouldShowContactActions;
-(void)setShowContactActions:(BOOL)arg1 ;
-(void)_didResolveAttribution:(id)arg1 ;
-(unsigned long long)getPlaceCardAGGDType;
-(void)setPlaceInBookmarks:(BOOL)arg1 ;
-(BOOL)_canShowExtensionReservationButton;
-(id)_createTableBookingButtonController;
-(BOOL)showContactActions;
-(id)_mapTableKeyForSectionPosition:(long long)arg1 ;
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldPresentStoreProductViewControllerWithAttribution:(id)arg1 ;
-(void)presentStoreProductViewControllerWithAppAdamID:(id)arg1 bundleIdentifier:(id)arg2 presentingViewController:(id)arg3 ;
-(id)placeViewFeedbackAppLaunchHandler;
-(void)_launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_showShareSheet:(id)arg1 ;
-(id)_contactForEditOperations;
-(void)_presentViewControllerWithInterfaceStyleCheck:(id)arg1 ;
-(BOOL)deviceIsLockedAndNeedsPasscode;
-(void)_showShareSheetNoDeviceLockCheck:(id)arg1 ;
-(void)_checkDeviceLockStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)updateHeaderTitle;
-(id)_removeMapsDataFromContact:(id)arg1 ;
-(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)contactsNavigationController;
-(id)_refetchedContactForCCTV:(id)arg1 error:(id*)arg2 ;
-(void)hideTitle:(BOOL)arg1 ;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)_dismissModalViewController;
-(void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3 ;
-(void)setInAirplaneModeAndNetworkUnreachable:(BOOL)arg1 ;
-(void)_updateViewControllerStatesForOffline;
-(BOOL)inAirplaneModeAndNetworkUnreachable;
-(id)overriddenIfNecessaryAppAdamID:(id)arg1 ;
-(id<_MKPlaceViewControllerFeedbackDelegate>)placeViewFeedbackDelegate;
-(int)getPlaceCardTypeForAnalytics;
-(id)generateAvailableActionForAnalytics;
-(id)generateUnactionableUIElementsForAnalytics;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3 ;
-(double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2 ;
-(void)stackingViewControllerDidLayoutViewControllers:(id)arg1 ;
-(void)placeVenueBrowseViewController:(id)arg1 didTapOnSearchCategory:(id)arg2 ;
-(void)placeParentInfoViewController:(id)arg1 didSelectParent:(id)arg2 ;
-(void)placeRelatedViewController:(id)arg1 itemSelected:(id)arg2 ;
-(void)placeRelatedViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5 ;
-(id)placeRelatedViewController:(id)arg1 viewsForMapItems:(id)arg2 prefersAddressOverCategory:(BOOL)arg3 ;
-(void)placeQuickLinksViewController:(id)arg1 urlStringSelected:(id)arg2 ;
-(void)officialAppViewControllerDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 presentingViewController:(id)arg3 ;
-(void)placeCardPhotosControllerDidOpenFullscreenPhotos:(id)arg1 ;
-(void)placeCardPhotosControllerDidCloseFullscreenPhotos:(id)arg1 ;
-(void)placeCardPhotosController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3 ;
-(id)muninContainerForPlaceCardPhotosController:(id)arg1 ;
-(void)cleanMuninContainerForPlaceCardPhotosController:(id)arg1 ;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1 ;
-(void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1 ;
-(void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg1 didSelectDepartureSequence:(id)arg2 transitMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(BOOL)transitDeparturesViewController:(id)arg1 canSelectDepartureSequence:(id)arg2 transitMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(id)transitDeparturesViewControllerTraits:(id)arg1 ;
-(double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1 ;
-(BOOL)isWebContentViewControllerParentPlacecardLoading:(id)arg1 ;
-(void)webContentViewControllerDidStopLoading:(id)arg1 ;
-(void)webContentViewController:(id)arg1 performHeightChangeWithBlock:(/*^block*/id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeWebContentViewController:(id)arg1 ;
-(int)mapTypeForETAProvider:(id)arg1 ;
-(void)ETAProviderLocationUpdated:(id)arg1 ;
-(void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3 ;
-(void)placeServiceViewControllerDidTapHeaderButton:(id)arg1 ;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg1 presentingViewController:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg1 ;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg1 ;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg1 ;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1 ;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg1 ;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1 ;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1 ;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1 ;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1 ;
-(BOOL)showTitleBar;
-(void)setShowTitleBar:(BOOL)arg1 ;
-(BOOL)hideDirectionsButtons;
-(void)setHideDirectionsButtons:(BOOL)arg1 ;
-(BOOL)showEditButton;
-(BOOL)hideInlineMap;
-(void)setHideInlineMap:(BOOL)arg1 ;
-(BOOL)showInlineMapInHeader;
-(void)setShowInlineMapInHeader:(BOOL)arg1 ;
-(void)setShowNearbyApps:(BOOL)arg1 ;
-(BOOL)showReportAProblem;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(BOOL)disableReportAProblem;
-(void)setDisableReportAProblem:(BOOL)arg1 ;
-(BOOL)showSimulateLocation;
-(void)setShowSimulateLocation:(BOOL)arg1 ;
-(BOOL)showOpenInSkyline;
-(void)setShowOpenInSkyline:(BOOL)arg1 ;
-(BOOL)showOpenInPinpoint;
-(void)setShowOpenInPinpoint:(BOOL)arg1 ;
-(BOOL)showShareActionsButton;
-(void)setShowShareActionsButton:(BOOL)arg1 ;
-(void)setAllowTransitLineSelection:(BOOL)arg1 ;
-(BOOL)showFavoriteButtons;
-(void)setShowFavoriteButtons:(BOOL)arg1 ;
-(BOOL)useCompactPhotosView;
-(void)setUseCompactPhotosView:(BOOL)arg1 ;
-(id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_performWhenViewHasAppeared:(/*^block*/id)arg1 ;
-(BOOL)_showReportAProblem;
-(id)draggableHeaderView;
-(id)_createViewControllerForModule:(id)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)setHeaderSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(long long)_sectionPositionForMapTableKey:(id)arg1 ;
-(void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2 ;
-(id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2 ;
-(BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2 ;
-(double)headerSecondaryNameLabelPadding;
-(void)placeCardWillCloseFromClientType:(unsigned long long)arg1 ;
-(BOOL)hasCheckedDistanceAvailability;
-(void)setHasCheckedDistanceAvailability:(BOOL)arg1 ;
-(void)setPlaceViewFeedbackDelegate:(id<_MKPlaceViewControllerFeedbackDelegate>)arg1 ;
-(void)setPlaceViewFeedbackAppLaunchHandler:(id)arg1 ;
-(BOOL)placeInBookmarks;
-(BOOL)placeInShortcuts;
@end

