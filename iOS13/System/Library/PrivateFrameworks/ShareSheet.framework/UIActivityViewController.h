/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/_UIActivityHelperDelegate.h>
#import <libobjc.A.dylib/SFAirDropViewControllerDelegate.h>
#import <libobjc.A.dylib/SFShareSheetSlotManagerDelegate.h>
#import <libobjc.A.dylib/_UIActivityUserDefaultsViewControllerDelegate.h>
#import <libobjc.A.dylib/ObjectManipulationDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIActivityContentDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/LPLinkViewDelegate.h>

@protocol UIActivityViewControllerAirDropDelegate, UIActivityViewControllerObjectManipulationDelegate, UIActivityViewControllerPhotosDelegate;
@class SFShareSheetSlotManager, NSArray, UISUIActivityViewControllerConfiguration, SFAirDropViewController, NSMutableDictionary, _UIActivityHelper, UIAlertController, UIAlertAction, NSOperationQueue, NSString, UIViewController, UIView, UINavigationController, ObjectManipulationViewController, NSLayoutConstraint, _UIActivityNavigationController, UIActivityContentViewController, _UICollectionViewDiffableDataSource, NSUserDefaults, UIActivity, LPLinkMetadata, NSDictionary, NSSet;

@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, _UIActivityHelperDelegate, SFAirDropViewControllerDelegate, SFShareSheetSlotManagerDelegate, _UIActivityUserDefaultsViewControllerDelegate, ObjectManipulationDelegate, UICollectionViewDelegate, UIActivityContentDelegate, UIViewControllerTransitioningDelegate, LPLinkViewDelegate> {

	SFShareSheetSlotManager* _slotManager;
	BOOL _airDropOnly;
	BOOL _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
	BOOL _willDismissActivityViewController;
	BOOL _performActivityForStateRestoration;
	BOOL _shouldMatchOnlyUserElectedExtensions;
	BOOL _shouldSkipPeopleSuggestions;
	BOOL _hasPerformedInitialPresentation;
	BOOL _isPerformingPresentation;
	BOOL _receivedInitialConfiguration;
	BOOL _startedConnectingToDaemon;
	BOOL _connectedToDaemon;
	BOOL _waitingForInitialLayoutPass;
	BOOL _allowsCustomPresentationStyle;
	BOOL _allowsEmbedding;
	BOOL _showKeyboardAutomatically;
	BOOL _whitelistActionActivitiesOnly;
	BOOL _isContentManaged;
	BOOL _enableNewDesignInPhotos;
	BOOL _configureForPhotosEdit;
	BOOL _configureForCloudSharing;
	/*^block*/id _completionHandler;
	/*^block*/id _completionWithItemsHandler;
	NSArray* _excludedActivityTypes;
	UISUIActivityViewControllerConfiguration* _activityViewControllerConfiguration;
	SFAirDropViewController* _airDropViewController;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	NSMutableDictionary* _activitiesByUUID;
	_UIActivityHelper* _activityHelper;
	/*^block*/id __popoverDismissalAction;
	/*^block*/id _activityPresentationCompletionHandler;
	UIAlertController* _activityAlertController;
	UIAlertAction* _activityAlertCancelAction;
	NSArray* _activityItemProviderOperations;
	NSOperationQueue* _activityItemProviderOperationQueue;
	long long _totalProviderCount;
	long long _completedProviderCount;
	unsigned long long _backgroundTaskIdentifier;
	NSString* _subject;
	NSString* _initialSocialText;
	unsigned long long _clientAttemptedInitialPresentationOrEmbeddingTimestamp;
	unsigned long long _beginPerformingActivityTimestamp;
	unsigned long long _viewWillAppearTimestamp;
	unsigned long long _readyToInteractTimestamp;
	unsigned long long _creationTimestamp;
	NSArray* _activityTypesToCreateInShareService;
	NSArray* _resolvedActivityItemsForCurrentActivity;
	UIViewController* _linkViewController;
	UIViewController* _carouselViewController;
	UIView* _shadowView;
	NSString* _sessionID;
	UINavigationController* _userDefaultsNavigationController;
	ObjectManipulationViewController* _customizationViewController;
	NSLayoutConstraint* _blurViewHeightConstraint;
	UINavigationController* _contentNavigationController;
	_UIActivityNavigationController* _secondaryContentNavigationController;
	UIActivityContentViewController* _contentViewController;
	UIActivityContentViewController* _secondaryContentViewController;
	_UICollectionViewDiffableDataSource* _dataSource;
	NSMutableDictionary* _identifierToProgress;
	NSMutableDictionary* _identifierToPulse;
	NSMutableDictionary* _identifierToSubtitle;
	NSUserDefaults* _userDefaults;
	NSString* _userDefaultsIdentifier;
	/*^block*/id _shareSheetReadyToInteractHandler;
	/*^block*/id _preCompletionHandler;
	NSArray* _includedActivityTypes;
	long long _excludedActivityCategories;
	NSArray* _activityTypeOrder;
	long long _sharingStyle;
	UIActivity* _activity;
	UIViewController* _activityViewController;
	id<UIActivityViewControllerAirDropDelegate> _airDropDelegate;
	id<UIActivityViewControllerObjectManipulationDelegate> _objectManipulationDelegate;
	UIViewController* _photosCarouselViewController;
	LPLinkMetadata* _photosHeaderMetadata;
	UIViewController* _photosStackViewController;
	id<UIActivityViewControllerPhotosDelegate> _photosDelegate;
	NSDictionary* _initialPhotosAssetDetails;
	NSArray* _selectedAssetIdentifiers;
	NSSet* _photosAssetIdentifiers;

}

@property (nonatomic,copy) id dismissCompletionHandler; 
@property (nonatomic,retain) UISUIActivityViewControllerConfiguration * activityViewControllerConfiguration;                                                                                                                                           //@synthesize activityViewControllerConfiguration=_activityViewControllerConfiguration - In the implementation block
@property (assign,nonatomic) BOOL airDropOnly;                                                                                                                                                                                                         //@synthesize airDropOnly=_airDropOnly - In the implementation block
@property (nonatomic,retain) SFAirDropViewController * airDropViewController;                                                                                                                                                                          //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (nonatomic,copy) NSArray * activityItems;                                                                                                                                                                                                    //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,copy) NSArray * applicationActivities;                                                                                                                                                                                            //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activitiesByUUID;                                                                                                                                                                                   //@synthesize activitiesByUUID=_activitiesByUUID - In the implementation block
@property (nonatomic,retain) _UIActivityHelper * activityHelper;                                                                                                                                                                                       //@synthesize activityHelper=_activityHelper - In the implementation block
@property (nonatomic,copy) id _popoverDismissalAction;                                                                                                                                                                                                 //@synthesize _popoverDismissalAction=__popoverDismissalAction - In the implementation block
@property (assign,nonatomic) BOOL dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;                                                                                                                                               //@synthesize dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel=_dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel - In the implementation block
@property (assign,nonatomic) BOOL willDismissActivityViewController;                                                                                                                                                                                   //@synthesize willDismissActivityViewController=_willDismissActivityViewController - In the implementation block
@property (setter=_setActivityPresentationCompletionHandler:,getter=_activityPresentationCompletionHandler,nonatomic,copy) id activityPresentationCompletionHandler;                                                                                   //@synthesize activityPresentationCompletionHandler=_activityPresentationCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertController * activityAlertController;                                                                                                                                                                              //@synthesize activityAlertController=_activityAlertController - In the implementation block
@property (nonatomic,retain) UIAlertAction * activityAlertCancelAction;                                                                                                                                                                                //@synthesize activityAlertCancelAction=_activityAlertCancelAction - In the implementation block
@property (nonatomic,retain) NSArray * activityItemProviderOperations;                                                                                                                                                                                 //@synthesize activityItemProviderOperations=_activityItemProviderOperations - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityItemProviderOperationQueue;                                                                                                                                                                    //@synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue - In the implementation block
@property (assign,nonatomic) long long totalProviderCount;                                                                                                                                                                                             //@synthesize totalProviderCount=_totalProviderCount - In the implementation block
@property (assign,nonatomic) long long completedProviderCount;                                                                                                                                                                                         //@synthesize completedProviderCount=_completedProviderCount - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                                                                                                                                                                              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                                                                                                                                                                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * initialSocialText;                                                                                                                                                                                               //@synthesize initialSocialText=_initialSocialText - In the implementation block
@property (assign,nonatomic) BOOL performActivityForStateRestoration;                                                                                                                                                                                  //@synthesize performActivityForStateRestoration=_performActivityForStateRestoration - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;                                                                                                                                                                                //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPeopleSuggestions;                                                                                                                                                                                         //@synthesize shouldSkipPeopleSuggestions=_shouldSkipPeopleSuggestions - In the implementation block
@property (assign,setter=_setHasPerformedInitialPresentation:,getter=_hasPerformedInitialPresentation,nonatomic) BOOL hasPerformedInitialPresentation;                                                                                                 //@synthesize hasPerformedInitialPresentation=_hasPerformedInitialPresentation - In the implementation block
@property (assign,setter=_setIsPerformingPresentation:,getter=_isPerformingPresentation,nonatomic) BOOL isPerformingPresentation;                                                                                                                      //@synthesize isPerformingPresentation=_isPerformingPresentation - In the implementation block
@property (assign,setter=_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:,getter=_clientAttemptedInitialPresentationOrEmbeddingTimestamp,nonatomic) unsigned long long clientAttemptedInitialPresentationOrEmbeddingTimestamp;              //@synthesize clientAttemptedInitialPresentationOrEmbeddingTimestamp=_clientAttemptedInitialPresentationOrEmbeddingTimestamp - In the implementation block
@property (assign,setter=_setBeginPerformingActivityTimestamp:,getter=_beginPerformingActivityTimestamp,nonatomic) unsigned long long beginPerformingActivityTimestamp;                                                                                //@synthesize beginPerformingActivityTimestamp=_beginPerformingActivityTimestamp - In the implementation block
@property (assign,setter=_setViewWillAppearTimestamp:,getter=_viewWillAppearTimestamp,nonatomic) unsigned long long viewWillAppearTimestamp;                                                                                                           //@synthesize viewWillAppearTimestamp=_viewWillAppearTimestamp - In the implementation block
@property (assign,setter=_setReadyToInteractTimestamp:,getter=_readyToInteractTimestamp,nonatomic) unsigned long long readyToInteractTimestamp;                                                                                                        //@synthesize readyToInteractTimestamp=_readyToInteractTimestamp - In the implementation block
@property (assign,setter=_setCreationTimestamp:,getter=_creationTimestamp,nonatomic) unsigned long long creationTimestamp;                                                                                                                             //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (nonatomic,retain) NSArray * activityTypesToCreateInShareService;                                                                                                                                                                            //@synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedActivityItemsForCurrentActivity;                                                                                                                                                                      //@synthesize resolvedActivityItemsForCurrentActivity=_resolvedActivityItemsForCurrentActivity - In the implementation block
@property (nonatomic,retain) UIViewController * linkViewController;                                                                                                                                                                                    //@synthesize linkViewController=_linkViewController - In the implementation block
@property (nonatomic,retain) UIViewController * carouselViewController;                                                                                                                                                                                //@synthesize carouselViewController=_carouselViewController - In the implementation block
@property (assign,nonatomic) BOOL receivedInitialConfiguration;                                                                                                                                                                                        //@synthesize receivedInitialConfiguration=_receivedInitialConfiguration - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                                                                                                                                                                                      //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                                                                                                                                                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL startedConnectingToDaemon;                                                                                                                                                                                           //@synthesize startedConnectingToDaemon=_startedConnectingToDaemon - In the implementation block
@property (assign,nonatomic) BOOL connectedToDaemon;                                                                                                                                                                                                   //@synthesize connectedToDaemon=_connectedToDaemon - In the implementation block
@property (assign,nonatomic) BOOL waitingForInitialLayoutPass;                                                                                                                                                                                         //@synthesize waitingForInitialLayoutPass=_waitingForInitialLayoutPass - In the implementation block
@property (nonatomic,retain) UINavigationController * userDefaultsNavigationController;                                                                                                                                                                //@synthesize userDefaultsNavigationController=_userDefaultsNavigationController - In the implementation block
@property (nonatomic,retain) ObjectManipulationViewController * customizationViewController;                                                                                                                                                           //@synthesize customizationViewController=_customizationViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * blurViewHeightConstraint;                                                                                                                                                                            //@synthesize blurViewHeightConstraint=_blurViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UINavigationController * contentNavigationController;                                                                                                                                                                     //@synthesize contentNavigationController=_contentNavigationController - In the implementation block
@property (nonatomic,retain) _UIActivityNavigationController * secondaryContentNavigationController;                                                                                                                                                   //@synthesize secondaryContentNavigationController=_secondaryContentNavigationController - In the implementation block
@property (nonatomic,retain) UIActivityContentViewController * contentViewController;                                                                                                                                                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIActivityContentViewController * secondaryContentViewController;                                                                                                                                                         //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (nonatomic,retain) _UICollectionViewDiffableDataSource * dataSource;                                                                                                                                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToProgress;                                                                                                                                                                               //@synthesize identifierToProgress=_identifierToProgress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToPulse;                                                                                                                                                                                  //@synthesize identifierToPulse=_identifierToPulse - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSubtitle;                                                                                                                                                                               //@synthesize identifierToSubtitle=_identifierToSubtitle - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                                                                                                                                                                            //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSString * userDefaultsIdentifier;                                                                                                                                                                                        //@synthesize userDefaultsIdentifier=_userDefaultsIdentifier - In the implementation block
@property (setter=_setShareSheetReadyToInteractHandler:,getter=_shareSheetReadyToInteractHandler,nonatomic,copy) id shareSheetReadyToInteractHandler;                                                                                                  //@synthesize shareSheetReadyToInteractHandler=_shareSheetReadyToInteractHandler - In the implementation block
@property (nonatomic,copy) id preCompletionHandler;                                                                                                                                                                                                    //@synthesize preCompletionHandler=_preCompletionHandler - In the implementation block
@property (nonatomic,copy) NSArray * includedActivityTypes;                                                                                                                                                                                            //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                                                                                                                                                                     //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,copy) NSArray * activityTypeOrder;                                                                                                                                                                                                //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomPresentationStyle;                                                                                                                                                                                       //@synthesize allowsCustomPresentationStyle=_allowsCustomPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsEmbedding;                                                                                                                                                                                                     //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (assign,nonatomic) BOOL showKeyboardAutomatically;                                                                                                                                                                                           //@synthesize showKeyboardAutomatically=_showKeyboardAutomatically - In the implementation block
@property (assign,nonatomic) BOOL whitelistActionActivitiesOnly;                                                                                                                                                                                       //@synthesize whitelistActionActivitiesOnly=_whitelistActionActivitiesOnly - In the implementation block
@property (assign,nonatomic) long long sharingStyle;                                                                                                                                                                                                   //@synthesize sharingStyle=_sharingStyle - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                                                                                                                                                                    //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,retain) UIActivity * activity;                                                                                                                                                                                                    //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) UIViewController * activityViewController;                                                                                                                                                                                //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityViewControllerAirDropDelegate> airDropDelegate;                                                                                                                                                       //@synthesize airDropDelegate=_airDropDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityViewControllerObjectManipulationDelegate> objectManipulationDelegate;                                                                                                                                 //@synthesize objectManipulationDelegate=_objectManipulationDelegate - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (nonatomic,retain) UIViewController * photosCarouselViewController;                                                                                                                                                                          //@synthesize photosCarouselViewController=_photosCarouselViewController - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * photosHeaderMetadata;                                                                                                                                                                                    //@synthesize photosHeaderMetadata=_photosHeaderMetadata - In the implementation block
@property (nonatomic,retain) UIViewController * photosStackViewController;                                                                                                                                                                             //@synthesize photosStackViewController=_photosStackViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityViewControllerPhotosDelegate> photosDelegate;                                                                                                                                                         //@synthesize photosDelegate=_photosDelegate - In the implementation block
@property (assign,nonatomic) BOOL enableNewDesignInPhotos;                                                                                                                                                                                             //@synthesize enableNewDesignInPhotos=_enableNewDesignInPhotos - In the implementation block
@property (setter=_setInitialPhotosAssetDetails:,getter=_initialPhotosAssetDetails,nonatomic,copy) NSDictionary * initialPhotosAssetDetails;                                                                                                           //@synthesize initialPhotosAssetDetails=_initialPhotosAssetDetails - In the implementation block
@property (setter=_setSelectedAssetIdentifiers:,getter=_selectedAssetIdentifiers,nonatomic,copy) NSArray * selectedAssetIdentifiers;                                                                                                                   //@synthesize selectedAssetIdentifiers=_selectedAssetIdentifiers - In the implementation block
@property (setter=_setPhotosAssetIdentifiers:,getter=_photosAssetIdentifiers,nonatomic,copy) NSSet * photosAssetIdentifiers;                                                                                                                           //@synthesize photosAssetIdentifiers=_photosAssetIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL configureForPhotosEdit;                                                                                                                                                                                              //@synthesize configureForPhotosEdit=_configureForPhotosEdit - In the implementation block
@property (assign,nonatomic) BOOL configureForCloudSharing;                                                                                                                                                                                            //@synthesize configureForCloudSharing=_configureForCloudSharing - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                                                                                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id completionWithItemsHandler;                                                                                                                                                                                              //@synthesize completionWithItemsHandler=_completionWithItemsHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                                                                                                                                                            //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(double)_asyncPresentationTimeout;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIActivity *)activity;
-(void)setActivity:(UIActivity *)arg1 ;
-(BOOL)isContentManaged;
-(BOOL)sourceIsManaged;
-(NSUserDefaults *)userDefaults;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(_UICollectionViewDiffableDataSource *)dataSource;
-(void)setDataSource:(_UICollectionViewDiffableDataSource *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setContentViewController:(UIActivityContentViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(UIActivityContentViewController *)contentViewController;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(UIView *)shadowView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2 ;
-(void)_presentationControllerDidDismiss:(id)arg1 ;
-(BOOL)_allowsStylingSheetsAsCards;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)__viewControllerWillBePresented:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)_cancel;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)setCompletionWithItemsHandler:(id)arg1 ;
-(unsigned long long)_creationTimestamp;
-(void)optionsButtonTapped;
-(void)setPreCompletionHandler:(id)arg1 ;
-(void)setShowKeyboardAutomatically:(BOOL)arg1 ;
-(void)setActivitiesByUUID:(NSMutableDictionary *)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(NSMutableDictionary *)activitiesByUUID;
-(NSArray *)applicationActivities;
-(void)userDefaultsViewController:(id)arg1 didSelectActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(void)userDefaultsViewController:(id)arg1 didUpdateFavoritesProxies:(id)arg2 activityCategory:(long long)arg3 ;
-(void)userDefaultsViewController:(id)arg1 didFavoriteActivity:(BOOL)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4 ;
-(void)userDefaultsViewController:(id)arg1 didToggleActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(id)requestRefreshedCustomizationGroups;
-(UIViewController *)activityViewController;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(UIViewController *)photosCarouselViewController;
-(BOOL)configureForCloudSharing;
-(id)requestMetadataValues;
-(id)fallbackURLsForLinkPresentation;
-(void)closeButtonTapped;
-(NSMutableDictionary *)identifierToSubtitle;
-(NSMutableDictionary *)identifierToProgress;
-(id)_activityWithActivityUUID:(id)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)_editActionsTapped;
-(BOOL)configureForPhotosEdit;
-(void)showScreenTimeRestrictedAlert;
-(void)selectedPersonWithIdentifier:(id)arg1 ;
-(void)selectedAppWithIdentifier:(id)arg1 ;
-(void)selectedActionWithIdentifier:(id)arg1 ;
-(void)nextButtonTappedWithPeopleProxies:(id)arg1 shareProxies:(id)arg2 actionProxies:(id)arg3 nearbyCountSlotID:(id)arg4 ;
-(void)setPhotosCarouselViewController:(UIViewController *)arg1 ;
-(void)setConfigureForCloudSharing:(BOOL)arg1 ;
-(void)setConfigureForPhotosEdit:(BOOL)arg1 ;
-(void)setIdentifierToProgress:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToPulse;
-(void)setIdentifierToPulse:(NSMutableDictionary *)arg1 ;
-(void)setIdentifierToSubtitle:(NSMutableDictionary *)arg1 ;
-(void)_setSelectedAssetIdentifiers:(id)arg1 ;
-(void)configureActivityViewControllerWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setUserDefaultsIdentifier:(NSString *)arg1 ;
-(void)_setCreationTimestamp:(unsigned long long)arg1 ;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)setShouldMatchOnlyUserElectedExtensions:(BOOL)arg1 ;
-(void)connectToDaemonOnceWithPriming:(BOOL)arg1 ;
-(BOOL)airDropOnly;
-(SFAirDropViewController *)airDropViewController;
-(void)connectAirDropWithNoContentView:(BOOL)arg1 ;
-(UINavigationController *)contentNavigationController;
-(long long)sharingStyle;
-(id<UIActivityViewControllerObjectManipulationDelegate>)objectManipulationDelegate;
-(id)_customizationValues;
-(void)setContentNavigationController:(UINavigationController *)arg1 ;
-(void)_installViewController:(id)arg1 belowView:(id)arg2 ;
-(id)_activityItemLinkPresentationMetadataValues;
-(id)_activityItemURLValuesForLinkPresentation;
-(void)configureContentViewIfNeeded;
-(void)setUserDefaultsNavigationController:(UINavigationController *)arg1 ;
-(_UIActivityNavigationController *)secondaryContentNavigationController;
-(void)_cleanupActivityWithSuccess:(BOOL)arg1 ;
-(void)setSecondaryContentViewController:(UIActivityContentViewController *)arg1 ;
-(UIActivityContentViewController *)secondaryContentViewController;
-(void)setSecondaryContentNavigationController:(_UIActivityNavigationController *)arg1 ;
-(void)setCustomizationViewController:(ObjectManipulationViewController *)arg1 ;
-(ObjectManipulationViewController *)customizationViewController;
-(UIViewController *)photosStackViewController;
-(UINavigationController *)userDefaultsNavigationController;
-(void)_performShareServiceSelectedActivity:(id)arg1 ;
-(void)presentAirDrop;
-(id)_selectedAssetIdentifiers;
-(void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2 ;
-(void)_insertIntoActivitiesByUUID:(id)arg1 ;
-(id)_activityItemValues;
-(void)_performActivity:(id)arg1 ;
-(void)invalidateSlotManagerIfNeeded;
-(void)setStartedConnectingToDaemon:(BOOL)arg1 ;
-(void)setConnectedToDaemon:(BOOL)arg1 ;
-(void)_primeExtensionDiscovery;
-(void)sendConfigurationToDaemonSynchronously:(BOOL)arg1 ;
-(BOOL)connectedToDaemon;
-(void)_preheatActivityViewControllerConfiguration;
-(BOOL)startedConnectingToDaemon;
-(id)_placeholderActivityItemValues;
-(void)setWaitingForInitialLayoutPass:(BOOL)arg1 ;
-(void)_preloadInitialConfigurationLocallyIfNeeded;
-(void)_shareSheetReadyToInteractAfterCACommit;
-(BOOL)_hasPerformedInitialPresentation;
-(void)_preheatActivitiesIfNeeded;
-(void)updateSheetPresentationController:(id)arg1 ;
-(void)setShouldSkipPeopleSuggestions:(BOOL)arg1 ;
-(LPLinkMetadata *)photosHeaderMetadata;
-(NSArray *)activityItems;
-(id)_activityItemURLValuesForMatching;
-(void)setInitialSocialText:(NSString *)arg1 ;
-(BOOL)shouldMatchOnlyUserElectedExtensions;
-(BOOL)whitelistActionActivitiesOnly;
-(void)setWhitelistActionActivitiesOnly:(BOOL)arg1 ;
-(NSArray *)activityTypeOrder;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(NSArray *)includedActivityTypes;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(long long)excludedActivityCategories;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(void)setSharingStyle:(long long)arg1 ;
-(void)_updateActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)updateContentViewControllerHeader;
-(void)_updateActivityViewControllerConfigurationSynchronously:(BOOL)arg1 ;
-(UISUIActivityViewControllerConfiguration *)activityViewControllerConfiguration;
-(BOOL)allowsEmbedding;
-(/*^block*/id)_shareSheetReadyToInteractHandler;
-(void)_setShareSheetReadyToInteractHandler:(/*^block*/id)arg1 ;
-(void)_setReadyToInteractTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)_clientAttemptedInitialPresentationOrEmbeddingTimestamp;
-(void)_setHasPerformedInitialPresentation:(BOOL)arg1 ;
-(BOOL)waitingForInitialLayoutPass;
-(void)_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:(unsigned long long)arg1 ;
-(BOOL)_isPerformingPresentation;
-(void)_presentationOrEmbeddingDidBegin:(BOOL)arg1 ;
-(unsigned long long)_viewWillAppearTimestamp;
-(void)_setViewWillAppearTimestamp:(unsigned long long)arg1 ;
-(void)_setIsPerformingPresentation:(BOOL)arg1 ;
-(void)setAirDropOnly:(BOOL)arg1 ;
-(void)setWillDismissActivityViewController:(BOOL)arg1 ;
-(BOOL)allowsCustomPresentationStyle;
-(void)_updateIsContentManagedForURLs;
-(BOOL)willDismissActivityViewController;
-(void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(void)_endInProgressActivityExecutionForcedStrongReferenceForActivity:(id)arg1 ;
-(unsigned long long)_readyToInteractTimestamp;
-(void)_performDismissWithSuccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_emitInteractionTelemetry:(BOOL)arg1 error:(id)arg2 ;
-(void)_clearActivity;
-(void)setActivityItemProviderOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_cleanupActivityWithSuccess:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(BOOL)performActivityForStateRestoration;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(UIAlertController *)activityAlertController;
-(void)setPerformActivityForStateRestoration:(BOOL)arg1 ;
-(unsigned long long)_beginPerformingActivityTimestamp;
-(/*^block*/id)_activityPresentationCompletionHandler;
-(void)_setActivityPresentationCompletionHandler:(/*^block*/id)arg1 ;
-(void)set_popoverDismissalAction:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(void)_setBeginPerformingActivityTimestamp:(unsigned long long)arg1 ;
-(void)_beginInProgressActivityExecutionForcedStrongReferenceForActivity:(id)arg1 ;
-(BOOL)_queueBackgroundOperationsForActivityItems:(id)arg1 activityBeingPerformed:(id)arg2 ;
-(void)_executeActivity;
-(BOOL)_shouldExecuteItemOperation:(id)arg1 forActivity:(id)arg2 ;
-(void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1 ;
-(id)_popoverDismissalAction;
-(NSOperationQueue *)activityItemProviderOperationQueue;
-(void)_removeFromActivitiesByUUID:(id)arg1 ;
-(_UIActivityHelper *)activityHelper;
-(id)_newActivityMatchingContext;
-(id)_newShareUIConfigurationWithMatchingResults:(id)arg1 ;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg1 ;
-(void)completedInitialLayoutPass;
-(id)_activityConfigurationsForActivities:(id)arg1 ;
-(NSArray *)activityTypesToCreateInShareService;
-(void)setActivityTypesToCreateInShareService:(NSArray *)arg1 ;
-(id)_securityScopedURLsForMatching;
-(void)setAllowsEmbedding:(BOOL)arg1 ;
-(BOOL)shouldSkipPeopleSuggestions;
-(id)_configurationForActivity:(id)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(void)setAirDropViewController:(SFAirDropViewController *)arg1 ;
-(id<UIActivityViewControllerAirDropDelegate>)airDropDelegate;
-(BOOL)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3 sessionID:(id)arg4 ;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connectionInterrupted;
-(void)performActivityInHostWithUUID:(id)arg1 ;
-(void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2 ;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4 ;
-(void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6 ;
-(id)initWithAssetIdentifiers:(id)arg1 activityItems:(id)arg2 applicationActivities:(id)arg3 ;
-(id)initWithUserDefaults:(id)arg1 userDefaultsIdentifier:(id)arg2 applicationActivities:(id)arg3 ;
-(id)_availableActivities;
-(void)_updateActivityItems:(id)arg1 ;
-(double)_displayHeight;
-(void)_resetAfterActivity:(BOOL)arg1 ;
-(id)_newShareUIConfigurationForCurrentState;
-(id)completionWithItemsHandler;
-(void)setActivityViewControllerConfiguration:(UISUIActivityViewControllerConfiguration *)arg1 ;
-(void)setActivityHelper:(_UIActivityHelper *)arg1 ;
-(BOOL)dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(void)setDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel:(BOOL)arg1 ;
-(void)setActivityAlertController:(UIAlertController *)arg1 ;
-(UIAlertAction *)activityAlertCancelAction;
-(void)setActivityAlertCancelAction:(UIAlertAction *)arg1 ;
-(NSArray *)activityItemProviderOperations;
-(void)setActivityItemProviderOperations:(NSArray *)arg1 ;
-(long long)totalProviderCount;
-(void)setTotalProviderCount:(long long)arg1 ;
-(long long)completedProviderCount;
-(void)setCompletedProviderCount:(long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(NSString *)initialSocialText;
-(NSArray *)resolvedActivityItemsForCurrentActivity;
-(UIViewController *)linkViewController;
-(void)setLinkViewController:(UIViewController *)arg1 ;
-(UIViewController *)carouselViewController;
-(void)setCarouselViewController:(UIViewController *)arg1 ;
-(BOOL)receivedInitialConfiguration;
-(void)setReceivedInitialConfiguration:(BOOL)arg1 ;
-(NSLayoutConstraint *)blurViewHeightConstraint;
-(void)setBlurViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)userDefaultsIdentifier;
-(id)preCompletionHandler;
-(void)setAllowsCustomPresentationStyle:(BOOL)arg1 ;
-(BOOL)showKeyboardAutomatically;
-(void)setAirDropDelegate:(id<UIActivityViewControllerAirDropDelegate>)arg1 ;
-(void)setObjectManipulationDelegate:(id<UIActivityViewControllerObjectManipulationDelegate>)arg1 ;
-(void)setPhotosHeaderMetadata:(LPLinkMetadata *)arg1 ;
-(void)setPhotosStackViewController:(UIViewController *)arg1 ;
-(id<UIActivityViewControllerPhotosDelegate>)photosDelegate;
-(void)setPhotosDelegate:(id<UIActivityViewControllerPhotosDelegate>)arg1 ;
-(BOOL)enableNewDesignInPhotos;
-(void)setEnableNewDesignInPhotos:(BOOL)arg1 ;
-(id)_initialPhotosAssetDetails;
-(void)_setInitialPhotosAssetDetails:(id)arg1 ;
-(id)_photosAssetIdentifiers;
-(void)_setPhotosAssetIdentifiers:(id)arg1 ;
@end

