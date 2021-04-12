/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>
#import <libobjc.A.dylib/PXCMMWorkflowCoordinatorDelegate.h>

@class PXCMMWorkflowCoordinator, NSString;

@interface PXCompleteMyMomentSettings : PXSettings <PXCMMWorkflowCoordinatorDelegate> {

	BOOL _cmmFeatureEnabled;
	BOOL _alwaysSortAfterAddMore;
	BOOL _preventNilTitles;
	BOOL _enableLightCuration;
	BOOL _simulateMomentShareCreationError;
	BOOL _showTitle;
	BOOL _showSubtitle;
	BOOL _showOtherTitle;
	BOOL _showMessage;
	BOOL _showSenderField;
	BOOL _showPeopleSuggestions;
	BOOL _showMergeCandidateSuggestionsAfterBootstrapNaming;
	BOOL _allowOneUpGesture;
	BOOL _allowSwipeSelection;
	BOOL _simulateImport;
	BOOL _simulateImportFailure;
	BOOL _simulateShouldPromptUserToIgnoreBudgets;
	BOOL _simulateCPLAlertOnPublish;
	BOOL _emulatesEmptyMomentShare;
	BOOL _disableOneUpDescriptiveAdd;
	BOOL _disableDescriptiveWaiting;
	BOOL _disableClickyOrb;
	BOOL _disableShareAction;
	BOOL _disableShowInAllPhotosAction;
	BOOL _disableCopyAction;
	BOOL _disableDetailView;
	BOOL _allowLayoutTransitionGesture;
	BOOL _shouldShowInlineAddButton;
	BOOL _showAttachedHeaderView;
	BOOL _showFloatingBanner;
	BOOL _showSendBackFooterView;
	BOOL _showFakeSendBackFooterView;
	BOOL _showSectionHeaders;
	BOOL _sectionHeadersShouldFloat;
	BOOL _showStatusFooter;
	BOOL _showProgressInGrid;
	BOOL _showProgressBannerView;
	BOOL _showProgressBannerViewPaused;
	BOOL _directSendMessages;
	BOOL _fakeMomentShareURL;
	BOOL _autoAcceptBubbles;
	BOOL _simulateDelays;
	BOOL _showURLInBubble;
	BOOL _showDebugStatus;
	BOOL _alwaysTapToRetry;
	BOOL _useDebugColors;
	BOOL _simulateMomentShareBubbleError;
	BOOL _showMessageTextEntryGadget;
	BOOL _insertNewRecipientsAtTheEnd;
	BOOL _graphSuggestionEnabled;
	BOOL _showCMMSuggestionGadgets;
	BOOL _showCMMInvitationGadgets;
	BOOL _showSampleGadgets;
	BOOL _shouldBakeInIfLivePhotoPlaybackDisabled;
	BOOL _shouldBakeInIfLivePhotoMuted;
	BOOL _shouldBakeInIfAdjustedByThirdParty;
	BOOL _shouldBakeInIfCropped;
	BOOL _shouldBakeInIfTimelineTrimmed;
	BOOL _shouldBakeInIfPortraitDepthEffectEnabled;
	BOOL _shouldBakeInIfContainsPenultimateResources;
	BOOL _shouldIncludeSpatialOvercaptureResources;
	long long _cmmShareSheetBehavior;
	long long _shareSheetLinkAssetCountThreshold;
	unsigned long long _shareSheetLinkTotalFileSizeThresholdMB;
	long long _invitationsDataSourceType;
	long long _suggestionsDataSourceType;
	unsigned long long _suggestionsMatchingStrategy;
	long long _suggestionsScrollDirection;
	long long _simulatedMomentShareCreationErrorType;
	long long _publishTransport;
	long long _peopleSuggestionsDataSourceType;
	long long _sendBackDataSourceType;
	long long _initialLayoutType;
	long long _reviewFlow;
	long long _reviewFlowDataSourceType;
	long long _overrideNumberOfColumnsInPortrait;
	long long _overrideNumberOfColumnsInLandscape;
	long long _simulatedMomentShareBubbleErrorType;
	long long _sharingLinkType;
	double _peopleSuggestionsTimeout;
	long long _sidebarType;

}

@property (nonatomic,retain) PXCMMWorkflowCoordinator * workflowCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL cmmFeatureEnabled;                                                 //@synthesize cmmFeatureEnabled=_cmmFeatureEnabled - In the implementation block
@property (assign,nonatomic) long long cmmShareSheetBehavior;                                        //@synthesize cmmShareSheetBehavior=_cmmShareSheetBehavior - In the implementation block
@property (assign,nonatomic) long long shareSheetLinkAssetCountThreshold;                            //@synthesize shareSheetLinkAssetCountThreshold=_shareSheetLinkAssetCountThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long shareSheetLinkTotalFileSizeThresholdMB;              //@synthesize shareSheetLinkTotalFileSizeThresholdMB=_shareSheetLinkTotalFileSizeThresholdMB - In the implementation block
@property (assign,nonatomic) BOOL alwaysSortAfterAddMore;                                            //@synthesize alwaysSortAfterAddMore=_alwaysSortAfterAddMore - In the implementation block
@property (assign,nonatomic) long long invitationsDataSourceType;                                    //@synthesize invitationsDataSourceType=_invitationsDataSourceType - In the implementation block
@property (assign,nonatomic) BOOL preventNilTitles;                                                  //@synthesize preventNilTitles=_preventNilTitles - In the implementation block
@property (assign,nonatomic) long long suggestionsDataSourceType;                                    //@synthesize suggestionsDataSourceType=_suggestionsDataSourceType - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionsMatchingStrategy;                         //@synthesize suggestionsMatchingStrategy=_suggestionsMatchingStrategy - In the implementation block
@property (assign,nonatomic) long long suggestionsScrollDirection;                                   //@synthesize suggestionsScrollDirection=_suggestionsScrollDirection - In the implementation block
@property (assign,nonatomic) BOOL enableLightCuration;                                               //@synthesize enableLightCuration=_enableLightCuration - In the implementation block
@property (assign,nonatomic) BOOL simulateMomentShareCreationError;                                  //@synthesize simulateMomentShareCreationError=_simulateMomentShareCreationError - In the implementation block
@property (assign,nonatomic) long long simulatedMomentShareCreationErrorType;                        //@synthesize simulatedMomentShareCreationErrorType=_simulatedMomentShareCreationErrorType - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                                                         //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showSubtitle;                                                      //@synthesize showSubtitle=_showSubtitle - In the implementation block
@property (assign,nonatomic) BOOL showOtherTitle;                                                    //@synthesize showOtherTitle=_showOtherTitle - In the implementation block
@property (assign,nonatomic) BOOL showMessage;                                                       //@synthesize showMessage=_showMessage - In the implementation block
@property (assign,nonatomic) BOOL showSenderField;                                                   //@synthesize showSenderField=_showSenderField - In the implementation block
@property (assign,nonatomic) BOOL showPeopleSuggestions;                                             //@synthesize showPeopleSuggestions=_showPeopleSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showMergeCandidateSuggestionsAfterBootstrapNaming;                 //@synthesize showMergeCandidateSuggestionsAfterBootstrapNaming=_showMergeCandidateSuggestionsAfterBootstrapNaming - In the implementation block
@property (assign,nonatomic) long long publishTransport;                                             //@synthesize publishTransport=_publishTransport - In the implementation block
@property (assign,nonatomic) long long peopleSuggestionsDataSourceType;                              //@synthesize peopleSuggestionsDataSourceType=_peopleSuggestionsDataSourceType - In the implementation block
@property (assign,nonatomic) long long sendBackDataSourceType;                                       //@synthesize sendBackDataSourceType=_sendBackDataSourceType - In the implementation block
@property (assign,nonatomic) long long initialLayoutType;                                            //@synthesize initialLayoutType=_initialLayoutType - In the implementation block
@property (assign,nonatomic) BOOL allowOneUpGesture;                                                 //@synthesize allowOneUpGesture=_allowOneUpGesture - In the implementation block
@property (assign,nonatomic) BOOL allowSwipeSelection;                                               //@synthesize allowSwipeSelection=_allowSwipeSelection - In the implementation block
@property (assign,nonatomic) BOOL simulateImport;                                                    //@synthesize simulateImport=_simulateImport - In the implementation block
@property (assign,nonatomic) BOOL simulateImportFailure;                                             //@synthesize simulateImportFailure=_simulateImportFailure - In the implementation block
@property (assign,nonatomic) BOOL simulateShouldPromptUserToIgnoreBudgets;                           //@synthesize simulateShouldPromptUserToIgnoreBudgets=_simulateShouldPromptUserToIgnoreBudgets - In the implementation block
@property (assign,nonatomic) BOOL simulateCPLAlertOnPublish;                                         //@synthesize simulateCPLAlertOnPublish=_simulateCPLAlertOnPublish - In the implementation block
@property (assign,nonatomic) BOOL emulatesEmptyMomentShare;                                          //@synthesize emulatesEmptyMomentShare=_emulatesEmptyMomentShare - In the implementation block
@property (assign,nonatomic) BOOL disableOneUpDescriptiveAdd;                                        //@synthesize disableOneUpDescriptiveAdd=_disableOneUpDescriptiveAdd - In the implementation block
@property (assign,nonatomic) BOOL disableDescriptiveWaiting;                                         //@synthesize disableDescriptiveWaiting=_disableDescriptiveWaiting - In the implementation block
@property (assign,nonatomic) BOOL disableClickyOrb;                                                  //@synthesize disableClickyOrb=_disableClickyOrb - In the implementation block
@property (assign,nonatomic) BOOL disableShareAction;                                                //@synthesize disableShareAction=_disableShareAction - In the implementation block
@property (assign,nonatomic) BOOL disableShowInAllPhotosAction;                                      //@synthesize disableShowInAllPhotosAction=_disableShowInAllPhotosAction - In the implementation block
@property (assign,nonatomic) BOOL disableCopyAction;                                                 //@synthesize disableCopyAction=_disableCopyAction - In the implementation block
@property (assign,nonatomic) BOOL disableDetailView;                                                 //@synthesize disableDetailView=_disableDetailView - In the implementation block
@property (assign,nonatomic) long long reviewFlow;                                                   //@synthesize reviewFlow=_reviewFlow - In the implementation block
@property (assign,nonatomic) long long reviewFlowDataSourceType;                                     //@synthesize reviewFlowDataSourceType=_reviewFlowDataSourceType - In the implementation block
@property (assign,nonatomic) BOOL allowLayoutTransitionGesture;                                      //@synthesize allowLayoutTransitionGesture=_allowLayoutTransitionGesture - In the implementation block
@property (assign,nonatomic) BOOL shouldShowInlineAddButton;                                         //@synthesize shouldShowInlineAddButton=_shouldShowInlineAddButton - In the implementation block
@property (assign,nonatomic) BOOL showAttachedHeaderView;                                            //@synthesize showAttachedHeaderView=_showAttachedHeaderView - In the implementation block
@property (assign,nonatomic) BOOL showFloatingBanner;                                                //@synthesize showFloatingBanner=_showFloatingBanner - In the implementation block
@property (assign,nonatomic) BOOL showSendBackFooterView;                                            //@synthesize showSendBackFooterView=_showSendBackFooterView - In the implementation block
@property (assign,nonatomic) BOOL showFakeSendBackFooterView;                                        //@synthesize showFakeSendBackFooterView=_showFakeSendBackFooterView - In the implementation block
@property (assign,nonatomic) BOOL showSectionHeaders;                                                //@synthesize showSectionHeaders=_showSectionHeaders - In the implementation block
@property (assign,nonatomic) BOOL sectionHeadersShouldFloat;                                         //@synthesize sectionHeadersShouldFloat=_sectionHeadersShouldFloat - In the implementation block
@property (assign,nonatomic) BOOL showStatusFooter;                                                  //@synthesize showStatusFooter=_showStatusFooter - In the implementation block
@property (assign,nonatomic) BOOL showProgressInGrid;                                                //@synthesize showProgressInGrid=_showProgressInGrid - In the implementation block
@property (assign,nonatomic) BOOL showProgressBannerView;                                            //@synthesize showProgressBannerView=_showProgressBannerView - In the implementation block
@property (assign,nonatomic) BOOL showProgressBannerViewPaused;                                      //@synthesize showProgressBannerViewPaused=_showProgressBannerViewPaused - In the implementation block
@property (assign,nonatomic) BOOL directSendMessages;                                                //@synthesize directSendMessages=_directSendMessages - In the implementation block
@property (assign,nonatomic) BOOL fakeMomentShareURL;                                                //@synthesize fakeMomentShareURL=_fakeMomentShareURL - In the implementation block
@property (assign,nonatomic) BOOL autoAcceptBubbles;                                                 //@synthesize autoAcceptBubbles=_autoAcceptBubbles - In the implementation block
@property (assign,nonatomic) BOOL simulateDelays;                                                    //@synthesize simulateDelays=_simulateDelays - In the implementation block
@property (assign,nonatomic) BOOL showURLInBubble;                                                   //@synthesize showURLInBubble=_showURLInBubble - In the implementation block
@property (assign,nonatomic) BOOL showDebugStatus;                                                   //@synthesize showDebugStatus=_showDebugStatus - In the implementation block
@property (assign,nonatomic) BOOL alwaysTapToRetry;                                                  //@synthesize alwaysTapToRetry=_alwaysTapToRetry - In the implementation block
@property (assign,nonatomic) long long overrideNumberOfColumnsInPortrait;                            //@synthesize overrideNumberOfColumnsInPortrait=_overrideNumberOfColumnsInPortrait - In the implementation block
@property (assign,nonatomic) long long overrideNumberOfColumnsInLandscape;                           //@synthesize overrideNumberOfColumnsInLandscape=_overrideNumberOfColumnsInLandscape - In the implementation block
@property (assign,nonatomic) BOOL useDebugColors;                                                    //@synthesize useDebugColors=_useDebugColors - In the implementation block
@property (assign,nonatomic) BOOL simulateMomentShareBubbleError;                                    //@synthesize simulateMomentShareBubbleError=_simulateMomentShareBubbleError - In the implementation block
@property (assign,nonatomic) long long simulatedMomentShareBubbleErrorType;                          //@synthesize simulatedMomentShareBubbleErrorType=_simulatedMomentShareBubbleErrorType - In the implementation block
@property (assign,nonatomic) BOOL showMessageTextEntryGadget;                                        //@synthesize showMessageTextEntryGadget=_showMessageTextEntryGadget - In the implementation block
@property (assign,nonatomic) BOOL insertNewRecipientsAtTheEnd;                                       //@synthesize insertNewRecipientsAtTheEnd=_insertNewRecipientsAtTheEnd - In the implementation block
@property (assign,nonatomic) long long sharingLinkType;                                              //@synthesize sharingLinkType=_sharingLinkType - In the implementation block
@property (assign,nonatomic) BOOL graphSuggestionEnabled;                                            //@synthesize graphSuggestionEnabled=_graphSuggestionEnabled - In the implementation block
@property (assign,nonatomic) double peopleSuggestionsTimeout;                                        //@synthesize peopleSuggestionsTimeout=_peopleSuggestionsTimeout - In the implementation block
@property (assign,nonatomic) long long sidebarType;                                                  //@synthesize sidebarType=_sidebarType - In the implementation block
@property (assign,nonatomic) BOOL showCMMSuggestionGadgets;                                          //@synthesize showCMMSuggestionGadgets=_showCMMSuggestionGadgets - In the implementation block
@property (assign,nonatomic) BOOL showCMMInvitationGadgets;                                          //@synthesize showCMMInvitationGadgets=_showCMMInvitationGadgets - In the implementation block
@property (assign,nonatomic) BOOL showSampleGadgets;                                                 //@synthesize showSampleGadgets=_showSampleGadgets - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;                           //@synthesize shouldBakeInIfLivePhotoPlaybackDisabled=_shouldBakeInIfLivePhotoPlaybackDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfLivePhotoMuted;                                      //@synthesize shouldBakeInIfLivePhotoMuted=_shouldBakeInIfLivePhotoMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;                                //@synthesize shouldBakeInIfAdjustedByThirdParty=_shouldBakeInIfAdjustedByThirdParty - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfCropped;                                             //@synthesize shouldBakeInIfCropped=_shouldBakeInIfCropped - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfTimelineTrimmed;                                     //@synthesize shouldBakeInIfTimelineTrimmed=_shouldBakeInIfTimelineTrimmed - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;                          //@synthesize shouldBakeInIfPortraitDepthEffectEnabled=_shouldBakeInIfPortraitDepthEffectEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;                        //@synthesize shouldBakeInIfContainsPenultimateResources=_shouldBakeInIfContainsPenultimateResources - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeSpatialOvercaptureResources;                          //@synthesize shouldIncludeSpatialOvercaptureResources=_shouldIncludeSpatialOvercaptureResources - In the implementation block
+(id)sharedInstance;
+(id)_enabledAllCmmImprovementsActionPredicate;
+(id)simulatedMomentShareErrorValues;
+(id)simulatedMomentShareErrorLabels;
+(id)settingsControllerModule;
+(id)transientProperties;
+(id)_enableAllCmmImprovementsAction;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setCmmShareSheetBehavior:(long long)arg1 ;
-(void)setShowStatusFooter:(BOOL)arg1 ;
-(BOOL)showProgressBannerViewPaused;
-(long long)sendBackDataSourceType;
-(BOOL)showSendBackFooterView;
-(void)setDisableOneUpDescriptiveAdd:(BOOL)arg1 ;
-(void)setSimulateImportFailure:(BOOL)arg1 ;
-(BOOL)preventNilTitles;
-(BOOL)fakeMomentShareURL;
-(BOOL)showProgressBannerView;
-(BOOL)showSenderField;
-(void)setInsertNewRecipientsAtTheEnd:(BOOL)arg1 ;
-(BOOL)simulateShouldPromptUserToIgnoreBudgets;
-(PXCMMWorkflowCoordinator *)workflowCoordinator;
-(BOOL)disableDetailView;
-(long long)suggestionsScrollDirection;
-(void)setFakeMomentShareURL:(BOOL)arg1 ;
-(void)setGraphSuggestionEnabled:(BOOL)arg1 ;
-(void)setShowSenderField:(BOOL)arg1 ;
-(BOOL)allowOneUpGesture;
-(BOOL)showDebugStatus;
-(BOOL)sectionHeadersShouldFloat;
-(BOOL)shouldBakeInIfLivePhotoMuted;
-(BOOL)showOtherTitle;
-(void)setEnableLightCuration:(BOOL)arg1 ;
-(void)setShouldBakeInIfLivePhotoMuted:(BOOL)arg1 ;
-(BOOL)disableShowInAllPhotosAction;
-(BOOL)disableOneUpDescriptiveAdd;
-(void)setShareSheetLinkTotalFileSizeThresholdMB:(unsigned long long)arg1 ;
-(BOOL)enableLightCuration;
-(void)setDisableDetailView:(BOOL)arg1 ;
-(void)setShouldBakeInIfPortraitDepthEffectEnabled:(BOOL)arg1 ;
-(void)setAllowSwipeSelection:(BOOL)arg1 ;
-(void)setDisableClickyOrb:(BOOL)arg1 ;
-(BOOL)simulateMomentShareBubbleError;
-(long long)simulatedMomentShareBubbleErrorType;
-(BOOL)disableCopyAction;
-(BOOL)showAttachedHeaderView;
-(void)setDisableShowInAllPhotosAction:(BOOL)arg1 ;
-(BOOL)cmmFeatureEnabled;
-(BOOL)showStatusFooter;
-(long long)publishTransport;
-(void)setAlwaysTapToRetry:(BOOL)arg1 ;
-(void)setShowFloatingBanner:(BOOL)arg1 ;
-(void)setUseDebugColors:(BOOL)arg1 ;
-(void)setShowSectionHeaders:(BOOL)arg1 ;
-(BOOL)showTitle;
-(BOOL)graphSuggestionEnabled;
-(BOOL)simulateImportFailure;
-(void)setDirectSendMessages:(BOOL)arg1 ;
-(void)setPeopleSuggestionsTimeout:(double)arg1 ;
-(long long)sidebarType;
-(BOOL)disableShareAction;
-(unsigned long long)shareSheetLinkTotalFileSizeThresholdMB;
-(void)setShouldBakeInIfAdjustedByThirdParty:(BOOL)arg1 ;
-(void)setEmulatesEmptyMomentShare:(BOOL)arg1 ;
-(void)setPeopleSuggestionsDataSourceType:(long long)arg1 ;
-(void)setSimulateDelays:(BOOL)arg1 ;
-(BOOL)showMessage;
-(BOOL)simulateImport;
-(void)setShouldBakeInIfCropped:(BOOL)arg1 ;
-(void)setSharingLinkType:(long long)arg1 ;
-(BOOL)shouldBakeInIfCropped;
-(BOOL)shouldBakeInIfContainsPenultimateResources;
-(BOOL)useDebugColors;
-(BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
-(BOOL)showURLInBubble;
-(void)setReviewFlowDataSourceType:(long long)arg1 ;
-(void)setDisableShareAction:(BOOL)arg1 ;
-(long long)reviewFlowDataSourceType;
-(void)setShowAttachedHeaderView:(BOOL)arg1 ;
-(BOOL)showSectionHeaders;
-(void)setSectionHeadersShouldFloat:(BOOL)arg1 ;
-(void)setSimulateMomentShareCreationError:(BOOL)arg1 ;
-(BOOL)shouldBakeInIfAdjustedByThirdParty;
-(void)setOverrideNumberOfColumnsInLandscape:(long long)arg1 ;
-(void)setShowCMMSuggestionGadgets:(BOOL)arg1 ;
-(void)setPreventNilTitles:(BOOL)arg1 ;
-(void)setAllowLayoutTransitionGesture:(BOOL)arg1 ;
-(void)setOverrideNumberOfColumnsInPortrait:(long long)arg1 ;
-(void)setAlwaysSortAfterAddMore:(BOOL)arg1 ;
-(void)setShowDebugStatus:(BOOL)arg1 ;
-(BOOL)simulateCPLAlertOnPublish;
-(BOOL)shouldShowInlineAddButton;
-(long long)overrideNumberOfColumnsInPortrait;
-(void)setShowProgressBannerViewPaused:(BOOL)arg1 ;
-(BOOL)showFakeSendBackFooterView;
-(long long)sharingLinkType;
-(long long)initialLayoutType;
-(void)setSuggestionsMatchingStrategy:(unsigned long long)arg1 ;
-(void)setSimulateImport:(BOOL)arg1 ;
-(void)setSimulateMomentShareBubbleError:(BOOL)arg1 ;
-(BOOL)simulateMomentShareCreationError;
-(BOOL)showCMMInvitationGadgets;
-(BOOL)showProgressInGrid;
-(void)setShowMessage:(BOOL)arg1 ;
-(void)setInvitationsDataSourceType:(long long)arg1 ;
-(BOOL)showPeopleSuggestions;
-(BOOL)emulatesEmptyMomentShare;
-(long long)suggestionsDataSourceType;
-(BOOL)showMergeCandidateSuggestionsAfterBootstrapNaming;
-(void)setSuggestionsScrollDirection:(long long)arg1 ;
-(void)setAutoAcceptBubbles:(BOOL)arg1 ;
-(unsigned long long)suggestionsMatchingStrategy;
-(BOOL)disableDescriptiveWaiting;
-(void)setAllowOneUpGesture:(BOOL)arg1 ;
-(void)setShouldBakeInIfTimelineTrimmed:(BOOL)arg1 ;
-(BOOL)alwaysTapToRetry;
-(double)peopleSuggestionsTimeout;
-(void)setShowOtherTitle:(BOOL)arg1 ;
-(long long)reviewFlow;
-(long long)cmmShareSheetBehavior;
-(void)setSidebarType:(long long)arg1 ;
-(long long)peopleSuggestionsDataSourceType;
-(long long)invitationsDataSourceType;
-(void)setPublishTransport:(long long)arg1 ;
-(void)setSendBackDataSourceType:(long long)arg1 ;
-(void)setShowURLInBubble:(BOOL)arg1 ;
-(void)setShowProgressInGrid:(BOOL)arg1 ;
-(BOOL)autoAcceptBubbles;
-(void)setShowSubtitle:(BOOL)arg1 ;
-(void)setShowTitle:(BOOL)arg1 ;
-(BOOL)showFloatingBanner;
-(void)setReviewFlow:(long long)arg1 ;
-(void)setDisableCopyAction:(BOOL)arg1 ;
-(void)setSimulateShouldPromptUserToIgnoreBudgets:(BOOL)arg1 ;
-(BOOL)allowLayoutTransitionGesture;
-(BOOL)shouldBakeInIfTimelineTrimmed;
-(void)setShowSampleGadgets:(BOOL)arg1 ;
-(BOOL)simulateDelays;
-(BOOL)insertNewRecipientsAtTheEnd;
-(BOOL)disableClickyOrb;
-(void)setShowMergeCandidateSuggestionsAfterBootstrapNaming:(BOOL)arg1 ;
-(void)setShouldShowInlineAddButton:(BOOL)arg1 ;
-(void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4 ;
-(void)setShouldIncludeSpatialOvercaptureResources:(BOOL)arg1 ;
-(void)setCmmFeatureEnabled:(BOOL)arg1 ;
-(void)setShowProgressBannerView:(BOOL)arg1 ;
-(void)setShareSheetLinkAssetCountThreshold:(long long)arg1 ;
-(void)setShowFakeSendBackFooterView:(BOOL)arg1 ;
-(BOOL)showSampleGadgets;
-(void)setSimulatedMomentShareCreationErrorType:(long long)arg1 ;
-(long long)simulatedMomentShareCreationErrorType;
-(void)setSimulateCPLAlertOnPublish:(BOOL)arg1 ;
-(void)setWorkflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 ;
-(BOOL)allowSwipeSelection;
-(BOOL)showCMMSuggestionGadgets;
-(void)setShouldBakeInIfLivePhotoPlaybackDisabled:(BOOL)arg1 ;
-(void)setInitialLayoutType:(long long)arg1 ;
-(void)setShowPeopleSuggestions:(BOOL)arg1 ;
-(void)setSimulatedMomentShareBubbleErrorType:(long long)arg1 ;
-(void)setShowMessageTextEntryGadget:(BOOL)arg1 ;
-(long long)shareSheetLinkAssetCountThreshold;
-(void)setDisableDescriptiveWaiting:(BOOL)arg1 ;
-(BOOL)showMessageTextEntryGadget;
-(BOOL)alwaysSortAfterAddMore;
-(long long)overrideNumberOfColumnsInLandscape;
-(void)setSuggestionsDataSourceType:(long long)arg1 ;
-(void)setShowCMMInvitationGadgets:(BOOL)arg1 ;
-(void)setShowSendBackFooterView:(BOOL)arg1 ;
-(void)setShouldBakeInIfContainsPenultimateResources:(BOOL)arg1 ;
-(BOOL)showSubtitle;
-(BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
-(BOOL)shouldIncludeSpatialOvercaptureResources;
-(BOOL)directSendMessages;
@end

