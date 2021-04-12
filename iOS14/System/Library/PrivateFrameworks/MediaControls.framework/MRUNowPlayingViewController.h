/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MRUNowPlayingTransportControlsViewDelegate.h>
#import <libobjc.A.dylib/MRUEndpointMetadataControllerObserver.h>
#import <libobjc.A.dylib/MRURoutingViewControllerDelegate.h>
#import <libobjc.A.dylib/MRUNowPlayingVolumeSliderDelegate.h>
#import <libobjc.A.dylib/MRUMediaSuggestionsViewControllerDelegate.h>

@protocol MRUNowPlayingViewControllerDelegate, MediaControlsInvalidatable, MPAVOutputDevicePlaybackDataSource;
@class MRUEndpointMetadataController, MRUVisualStylingProvider, MRUMediaSuggestionsViewController, MPVolumeGroupSliderCoordinator, MPMediaControls, MediaControlsEndpointController, MRURoutingViewController, MTVisualStylingProvider, MRUNowPlayingView, NSString;

@interface MRUNowPlayingViewController : UIViewController <MRUNowPlayingTransportControlsViewDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, MRUNowPlayingVolumeSliderDelegate, MRUMediaSuggestionsViewControllerDelegate> {

	BOOL _supportsHorizontalLayout;
	BOOL _onScreen;
	BOOL _deviceLocked;
	MRUEndpointMetadataController* _metadataController;
	id<MRUNowPlayingViewControllerDelegate> _delegate;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	long long _context;
	MRUMediaSuggestionsViewController* _suggestionsViewController;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;
	id<MediaControlsInvalidatable> _hardwareVolumeControlAssertion;
	MPMediaControls* _mediaControls;
	long long _routeControlsPresentation;
	MediaControlsEndpointController* _endpointController;
	MRURoutingViewController* _routingViewController;
	MTVisualStylingProvider* _visualStylingProvider;
	id<MPAVOutputDevicePlaybackDataSource> _playbackDataSource;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) MRUNowPlayingView * view; 
@property (nonatomic,retain) MRUNowPlayingView * viewIfLoaded; 
@property (nonatomic,retain) MRUMediaSuggestionsViewController * suggestionsViewController;                 //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                               //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;                       //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (nonatomic,retain) id<MediaControlsInvalidatable> hardwareVolumeControlAssertion;                 //@synthesize hardwareVolumeControlAssertion=_hardwareVolumeControlAssertion - In the implementation block
@property (nonatomic,retain) MPMediaControls * mediaControls;                                               //@synthesize mediaControls=_mediaControls - In the implementation block
@property (nonatomic,readonly) long long routeControlsPresentation;                                         //@synthesize routeControlsPresentation=_routeControlsPresentation - In the implementation block
@property (nonatomic,readonly) MediaControlsEndpointController * endpointController;                        //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,readonly) MRUEndpointMetadataController * metadataController;                          //@synthesize metadataController=_metadataController - In the implementation block
@property (nonatomic,readonly) MRURoutingViewController * routingViewController;                            //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                               //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVOutputDevicePlaybackDataSource> playbackDataSource;              //@synthesize playbackDataSource=_playbackDataSource - In the implementation block
@property (assign,getter=isDeviceLocked,nonatomic) BOOL deviceLocked;                                       //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (assign,nonatomic,__weak) id<MRUNowPlayingViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * undiscoveredPlaceholderText; 
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                    //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                                              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                                                 //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                                //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)coversheetViewController;
-(void)updateLayout;
-(MTVisualStylingProvider *)visualStylingProvider;
-(BOOL)slider:(id)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(BOOL)isOnScreen;
-(id)initWithRouteUID:(id)arg1 ;
-(id<MRUNowPlayingViewControllerDelegate>)delegate;
-(void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)updateVolume;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)context;
-(BOOL)isDeviceLocked;
-(BOOL)slider:(id)arg1 shouldCancelSnapWithTouch:(id)arg2 ;
-(void)updateContentAnimated:(/*^block*/id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id<MPAVOutputDevicePlaybackDataSource>)playbackDataSource;
-(void)setDelegate:(id<MRUNowPlayingViewControllerDelegate>)arg1 ;
-(NSString *)description;
-(MediaControlsEndpointController *)endpointController;
-(MPMediaControls *)mediaControls;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMediaControls:(MPMediaControls *)arg1 ;
-(void)updateSuggestions;
-(BOOL)shouldEnableSyncingForSlider:(id)arg1 ;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
-(UIEdgeInsets)contentEdgeInsets;
-(MRUMediaSuggestionsViewController *)suggestionsViewController;
-(void)loadView;
-(void)updateVisibility;
-(MRURoutingViewController *)routingViewController;
-(void)setSuggestionsViewController:(MRUMediaSuggestionsViewController *)arg1 ;
-(void)setPlaybackDataSource:(id<MPAVOutputDevicePlaybackDataSource>)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(BOOL)lockScreenPresentsOverrideRoutePicker;
-(id)destination;
-(void)dealloc;
-(long long)layout;
-(void)setContext:(long long)arg1 ;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)updateDiscoveryMode;
-(MRUEndpointMetadataController *)metadataController;
-(id)initWithEndpointController:(id)arg1 routeControlsPresentation:(long long)arg2 ;
-(void)didSelectQuickActionButton:(id)arg1 ;
-(void)setDeviceLocked:(BOOL)arg1 ;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1 ;
-(void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)metadataController:(id)arg1 didUpdateShowMediaSuggestions:(BOOL)arg2 ;
-(void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2 ;
-(void)metadataControllerDidChangeState:(id)arg1 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(void)metadataControllerRouteDidUpdate:(id)arg1 ;
-(void)updateRoutingViewControllerContentEdgeInsets;
-(void)routingViewControllerDidUpdateItems:(id)arg1 ;
-(BOOL)supportsHorizontalLayout;
-(void)mediaSuggestionsViewController:(id)arg1 didSelectSuggestion:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)suggestionContext;
-(void)mediaSuggestionsViewController:(id)arg1 didChangeSuggestions:(id)arg2 ;
-(void)setUndiscoveredPlaceholderText:(NSString *)arg1 ;
-(NSString *)undiscoveredPlaceholderText;
-(void)updateResponse;
-(void)transportControlsView:(id)arg1 presentTVRemoteFromSourceView:(id)arg2 ;
-(void)transportControlsView:(id)arg1 presentActionSheetForItem:(id)arg2 sourceView:(id)arg3 ;
-(void)transportControlsView:(id)arg1 presentLanguageOptionsFromSourceView:(id)arg2 ;
-(id)contextString;
-(void)trackSuggestionsDisplayed:(id)arg1 ;
-(void)trackSuggestionSelected:(id)arg1 atIndex:(unsigned long long)arg2 error:(id)arg3 ;
-(void)didSelectHeaderView:(id)arg1 ;
-(void)didSelectRoutingButton:(id)arg1 ;
-(void)createGroupSliderCoordinator;
-(void)createRoutingViewController;
-(void)createSuggestionsViewController;
-(void)updateSuggestionContext;
-(void)updateRoutingButton;
-(BOOL)shouldShowMediaSuggestions;
-(void)trackStartedShowingMediaSuggestions;
-(void)updateRouteLabel;
-(void)updateHardwareVolumeButtons;
-(void)presentExternalRoutingControlsFromSourceView:(id)arg1 ;
-(BOOL)canShowRoutingControls;
-(id<MediaControlsInvalidatable>)hardwareVolumeControlAssertion;
-(void)setHardwareVolumeControlAssertion:(id<MediaControlsInvalidatable>)arg1 ;
-(long long)routeControlsPresentation;
@end

