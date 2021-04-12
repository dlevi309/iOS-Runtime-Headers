/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsEndpointControllerDelegate.h>
#import <MediaControls/MediaControlsActionsDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerThemeDelegate.h>
#import <MediaControls/MediaControlsMasterVolumeSliderDelegate.h>
#import <MediaControls/MediaControlsPanelViewControllerDelegate.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/_MCStateDumpPropertyListTransformable.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MediaControls/MediaControlsCollectionItemViewController.h>

@protocol MRPlatterViewControllerDelegate;
@class UIView, MTVisualStylingProvider, MPAVRoutingViewController, NSString, MRMediaControlsVideoPickerFooterView, MRMediaControlsVideoPickerHeaderView, MediaControlsRoutingCornerView, MediaControlsParentContainerView, MediaControlsVolumeContainerView, NSMutableArray, MPArtworkCatalog, MPVolumeGroupSliderCoordinator, MPAVEndpointRoute, MediaControlsTransitioningDelegate, MediaControlsLanguageOptionsViewController, MPMediaControls, SFShareAudioViewController, FBSDisplayLayoutMonitor, NSArray, MSVTimer, MediaControlsEndpointController, MediaControlsHeaderView;

@interface MRPlatterViewController : UIViewController <MediaControlsEndpointControllerDelegate, MediaControlsActionsDelegate, MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsPanelViewControllerDelegate, MTVisualStylingRequiring, _MCStateDumpPropertyListTransformable, UIGestureRecognizerDelegate, MediaControlsCollectionItemViewController> {

	unsigned long long _stateHandle;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _selected;
	BOOL _allowsNowPlayingAppLaunch;
	BOOL _transitioning;
	BOOL _onScreen;
	BOOL _isListeningForResponse;
	BOOL _failedToLoadArtwork;
	UIView* _contentView;
	UIView* _backgroundView;
	MPAVRoutingViewController* _routingViewController;
	id<MRPlatterViewControllerDelegate> _delegate;
	NSString* _routeUID;
	long long _style;
	double __continuousCornerRadius;
	NSString* _placeholderString;
	NSString* _placeholderDeviceIdentifier;
	MRMediaControlsVideoPickerFooterView* _videoPickerFooterView;
	MRMediaControlsVideoPickerHeaderView* _videoPickerHeaderView;
	MediaControlsRoutingCornerView* _routingCornerView;
	MediaControlsParentContainerView* _parentContainerView;
	MediaControlsVolumeContainerView* _volumeContainerView;
	NSMutableArray* _secondaryStringComponents;
	MPArtworkCatalog* _artworkCatalog;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;
	MPAVEndpointRoute* _route;
	MediaControlsTransitioningDelegate* _transitioningDelegate;
	MediaControlsLanguageOptionsViewController* _languageOptionsViewController;
	MPMediaControls* _mediaControls;
	SFShareAudioViewController* _shareAudioViewController;
	FBSDisplayLayoutMonitor* _displayMonitor;
	NSArray* _displayElements;
	NSString* _explicitString;
	long long _failedArtworkRetryCount;
	id _volumeControlAssertion;
	MSVTimer* _artworkTimer;
	NSString* _label;
	unsigned long long _supportedModes;
	long long _selectedMode;
	MediaControlsEndpointController* _endpointController;
	/*^block*/id _routingCornerViewTappedBlock;
	MediaControlsHeaderView* _nowPlayingHeaderView;
	CGSize _lastKnownSize;

}

@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                      //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) MRMediaControlsVideoPickerFooterView * videoPickerFooterView;                                   //@synthesize videoPickerFooterView=_videoPickerFooterView - In the implementation block
@property (nonatomic,retain) MRMediaControlsVideoPickerHeaderView * videoPickerHeaderView;                                   //@synthesize videoPickerHeaderView=_videoPickerHeaderView - In the implementation block
@property (nonatomic,retain) MediaControlsRoutingCornerView * routingCornerView;                                             //@synthesize routingCornerView=_routingCornerView - In the implementation block
@property (nonatomic,retain) MediaControlsParentContainerView * parentContainerView;                                         //@synthesize parentContainerView=_parentContainerView - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeContainerView * volumeContainerView;                                         //@synthesize volumeContainerView=_volumeContainerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryStringComponents;                                                     //@synthesize secondaryStringComponents=_secondaryStringComponents - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                                                              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                                                //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) BOOL isListeningForResponse;                                                                    //@synthesize isListeningForResponse=_isListeningForResponse - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;                                        //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * route;                                                                      //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) CGSize lastKnownSize;                                                                           //@synthesize lastKnownSize=_lastKnownSize - In the implementation block
@property (nonatomic,retain) MediaControlsTransitioningDelegate * transitioningDelegate;                                     //@synthesize transitioningDelegate=_transitioningDelegate - In the implementation block
@property (assign,nonatomic,__weak) MediaControlsLanguageOptionsViewController * languageOptionsViewController;              //@synthesize languageOptionsViewController=_languageOptionsViewController - In the implementation block
@property (nonatomic,retain) MPMediaControls * mediaControls;                                                                //@synthesize mediaControls=_mediaControls - In the implementation block
@property (nonatomic,retain) SFShareAudioViewController * shareAudioViewController;                                          //@synthesize shareAudioViewController=_shareAudioViewController - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * displayMonitor;                                                       //@synthesize displayMonitor=_displayMonitor - In the implementation block
@property (nonatomic,retain) NSArray * displayElements;                                                                      //@synthesize displayElements=_displayElements - In the implementation block
@property (getter=isDeviceUnlocked,nonatomic,readonly) BOOL deviceUnlocked; 
@property (nonatomic,copy) NSString * explicitString;                                                                        //@synthesize explicitString=_explicitString - In the implementation block
@property (assign,nonatomic) BOOL failedToLoadArtwork;                                                                       //@synthesize failedToLoadArtwork=_failedToLoadArtwork - In the implementation block
@property (nonatomic,readonly) long long failedArtworkRetryCount;                                                            //@synthesize failedArtworkRetryCount=_failedArtworkRetryCount - In the implementation block
@property (nonatomic,retain) id volumeControlAssertion;                                                                      //@synthesize volumeControlAssertion=_volumeControlAssertion - In the implementation block
@property (nonatomic,retain) MSVTimer * artworkTimer;                                                                        //@synthesize artworkTimer=_artworkTimer - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long supportedModes;                                                              //@synthesize supportedModes=_supportedModes - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                                                         //@synthesize selectedMode=_selectedMode - In the implementation block
@property (nonatomic,retain) MediaControlsEndpointController * endpointController;                                           //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,copy) id routingCornerViewTappedBlock;                                                                  //@synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;                                              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) MediaControlsHeaderView * nowPlayingHeaderView;                                                 //@synthesize nowPlayingHeaderView=_nowPlayingHeaderView - In the implementation block
@property (nonatomic,readonly) UIView * effectiveHeaderView; 
@property (nonatomic,readonly) UIView * effectiveFooterView; 
@property (assign,nonatomic,__weak) id<MRPlatterViewControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsNowPlayingAppLaunch;                                                                 //@synthesize allowsNowPlayingAppLaunch=_allowsNowPlayingAppLaunch - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                                                                          //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlatter; 
@property (assign,nonatomic) long long style;                                                                                //@synthesize style=_style - In the implementation block
@property (assign,setter=_setContinuousCornerRadius:,nonatomic) double _continuousCornerRadius;                              //@synthesize _continuousCornerRadius=__continuousCornerRadius - In the implementation block
@property (nonatomic,retain) NSString * placeholderString;                                                                   //@synthesize placeholderString=_placeholderString - In the implementation block
@property (nonatomic,retain) NSString * placeholderDeviceIdentifier;                                                         //@synthesize placeholderDeviceIdentifier=_placeholderDeviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (nonatomic,readonly) UIView * contentView;                                                                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                                //@synthesize selected=_selected - In the implementation block
+(id)coverSheetPlatterViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)routingCornerViewTappedBlock;
-(NSString *)routeName;
-(void)setRoute:(MPAVEndpointRoute *)arg1 ;
-(BOOL)_isExpanded;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(NSString *)placeholderString;
-(NSString *)routeUID;
-(void)_showShareAudioViewController;
-(BOOL)slider:(id)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3 ;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)_updateStyle;
-(void)_updateRoutingCornerView;
-(BOOL)isOnScreen;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVolumeControlAssertion:(id)arg1 ;
-(void)setSelectedMode:(long long)arg1 ;
-(SFShareAudioViewController *)shareAudioViewController;
-(id)initWithRouteUID:(id)arg1 ;
-(BOOL)isDeviceUnlocked;
-(MediaControlsHeaderView *)nowPlayingHeaderView;
-(MRMediaControlsVideoPickerHeaderView *)videoPickerHeaderView;
-(double)_continuousCornerRadius;
-(MPAVEndpointRoute *)route;
-(void)_showPlaceholderArtwork;
-(void)_updateRoutingIndicators;
-(void)_dismissShareAudioViewController;
-(CGSize)lastKnownSize;
-(void)setRoutingCornerViewTappedBlock:(id)arg1 ;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)setSecondaryStringComponents:(NSMutableArray *)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id<MRPlatterViewControllerDelegate>)delegate;
-(void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2 ;
-(void)presentRatingActionSheet:(id)arg1 sourceView:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(MediaControlsParentContainerView *)parentContainerView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)_tvMediaRemoteIdentifier;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(UIEdgeInsets)contentInsetsForRoutingViewController:(id)arg1 ;
-(UIView *)backgroundView;
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2 ;
-(void)routingViewController:(id)arg1 willDisplayHeaderView:(id)arg2 ;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(id)volumeControlAssertion;
-(BOOL)isSelected;
-(void)setOnScreen:(BOOL)arg1 ;
-(BOOL)allowsNowPlayingAppLaunch;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)routingViewController:(id)arg1 willDisplayCell:(id)arg2 ;
-(void)presentTVRemote;
-(void)setShareAudioViewController:(SFShareAudioViewController *)arg1 ;
-(id)initWithActiveRouteType:(long long)arg1 ;
-(void)_presentRoutingViewControllerFromCoverSheet;
-(long long)failedArtworkRetryCount;
-(NSString *)placeholderDeviceIdentifier;
-(UIView *)effectiveHeaderView;
-(NSArray *)displayElements;
-(void)setArtworkTimer:(MSVTimer *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1 ;
-(id)_route;
-(BOOL)slider:(id)arg1 shouldCancelSnapWithTouch:(id)arg2 ;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
-(NSString *)explicitString;
-(void)_updateOnScreenForStyle:(long long)arg1 ;
-(void)setLastKnownSize:(CGSize)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)failedToLoadArtwork;
-(id)_tvAirplayIdentifier;
-(void)setDelegate:(id<MRPlatterViewControllerDelegate>)arg1 ;
-(void)setExplicitString:(NSString *)arg1 ;
-(void)footerViewButtonPressed:(id)arg1 ;
-(NSString *)description;
-(MediaControlsEndpointController *)endpointController;
-(MPMediaControls *)mediaControls;
-(void)setAllowsNowPlayingAppLaunch:(BOOL)arg1 ;
-(void)setRoutingCornerView:(MediaControlsRoutingCornerView *)arg1 ;
-(FBSDisplayLayoutMonitor *)displayMonitor;
-(BOOL)shouldDisplayPlatter;
-(void)setEndpointController:(MediaControlsEndpointController *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setTransitioningDelegate:(MediaControlsTransitioningDelegate *)arg1 ;
-(void)_updateRouteNameLabel;
-(BOOL)isListeningForResponse;
-(void)_updateConfiguration;
-(void)setIsListeningForResponse:(BOOL)arg1 ;
-(void)_updatePlaceholderArtwork;
-(void)setPlaceholderDeviceIdentifier:(NSString *)arg1 ;
-(void)_platterViewControllerReceivedInteraction:(id)arg1 ;
-(void)setLanguageOptionsViewController:(MediaControlsLanguageOptionsViewController *)arg1 ;
-(void)viewDidLoad;
-(MRMediaControlsVideoPickerFooterView *)videoPickerFooterView;
-(MediaControlsLanguageOptionsViewController *)languageOptionsViewController;
-(id)_stateDumpObject;
-(void)_prewarmTVRemoteIfNeeded;
-(long long)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(long long)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_routingCornerViewReceivedTap:(id)arg1 ;
-(void)setFailedToLoadArtwork:(BOOL)arg1 ;
-(void)endpointControllerDidChangeState:(id)arg1 ;
-(void)setDisplayElements:(NSArray *)arg1 ;
-(BOOL)isTransitioning;
-(void)_updateHeaderUI;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canToggleRoutingPicker;
-(void)setNowPlayingHeaderView:(MediaControlsHeaderView *)arg1 ;
-(MediaControlsRoutingCornerView *)routingCornerView;
-(void)presentLanguageOptions;
-(void)setMediaControls:(MPMediaControls *)arg1 ;
-(unsigned long long)supportedModes;
-(MPArtworkCatalog *)artworkCatalog;
-(void)headerViewButtonPressed:(id)arg1 ;
-(void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)_updateHardwareVolumeButtons;
-(NSMutableArray *)secondaryStringComponents;
-(BOOL)shouldEnableSyncingForSlider:(id)arg1 ;
-(void)setDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(void)_setRoutingPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUseViewServiceToPresentTVRemote;
-(void)endpointControllerRouteDidUpdate:(id)arg1 ;
-(MediaControlsVolumeContainerView *)volumeContainerView;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
-(MSVTimer *)artworkTimer;
-(void)setParentContainerView:(MediaControlsParentContainerView *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)loadView;
-(MediaControlsTransitioningDelegate *)transitioningDelegate;
-(MPAVRoutingViewController *)routingViewController;
-(void)setVideoPickerFooterView:(MRMediaControlsVideoPickerFooterView *)arg1 ;
-(UIView *)contentView;
-(long long)selectedMode;
-(void)setVideoPickerHeaderView:(MRMediaControlsVideoPickerHeaderView *)arg1 ;
-(BOOL)lockScreenPresentsOverrideRoutePicker;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSString *)label;
-(long long)style;
-(void)setVolumeContainerView:(MediaControlsVolumeContainerView *)arg1 ;
-(void)_updateControlCenterMetadata:(id)arg1 sectionMetadata:(id)arg2 ;
-(void)_updateSecondaryStringFormat;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldShowTVRemoteButton;
-(void)setSupportedModes:(unsigned long long)arg1 ;
-(UIView *)effectiveFooterView;
@end

