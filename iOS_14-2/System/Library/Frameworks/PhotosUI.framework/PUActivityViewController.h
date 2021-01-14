/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <ShareSheet/UIActivityViewController.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUActivityItemSourceControllerDelegate.h>
#import <UIKit/UIActivityViewControllerObjectManipulationDelegate.h>
#import <libobjc.A.dylib/PUSharingHeaderDataProvider.h>
#import <libobjc.A.dylib/PXActivityViewController.h>

@protocol UIActivityItemLinkPresentationSource, PUActivityViewControllerDelegate;
@class NSString, NSOrderedSet, PLProgressView, UIView, PUActivityItemSourceController, PUSharingHeaderController, PUActivitySharingViewModel, NSArray, PUActivitySharingController, PUActivityProgressController, PXCPLStatusProvider;

@interface PUActivityViewController : UIActivityViewController <PXForcedDismissableViewController, PXChangeObserver, PUActivityItemSourceControllerDelegate, UIActivityViewControllerObjectManipulationDelegate, PUSharingHeaderDataProvider, PXActivityViewController> {

	CFStringRef _aggregateKey;
	PLProgressView* _remakerProgressView;
	UIView* _topBorderView;
	PUActivityItemSourceController* _itemSourceController;
	id<UIActivityItemLinkPresentationSource> _linkPresentation;
	long long _numberOfAssetsToPrepare;
	long long _numberOfAssetPreparationsCompleted;
	double _currentAssetPreparationProgress;
	BOOL _isDismissed;
	BOOL _shouldUpdateVisibleItemsWhenReady;
	BOOL _isPreparingAssets;
	BOOL _didSuccessfullyPrepareAssets;
	BOOL _preparedAsCloudLink;
	PUSharingHeaderController* _sharingHeaderController;
	CGRect _lastSelectedActivityFrame;
	BOOL _readyForInteraction;
	BOOL _shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
	BOOL _shareAsCMM;
	BOOL _excludeLiveness;
	BOOL _excludeLocation;
	BOOL _excludeCaption;
	BOOL _excludeAccessibilityDescription;
	BOOL _sendAsOriginals;
	PUActivitySharingViewModel* _sharingViewModel;
	NSArray* _photosActivities;
	id<PUActivityViewControllerDelegate> _delegate;
	/*^block*/id _readyToInteractHandler;
	/*^block*/id _ppt_readyToInteractHandler;
	PUActivitySharingController* _activitySharingController;
	PUActivityProgressController* _progressController;
	PXCPLStatusProvider* _cplStatusProvider;

}

@property (nonatomic,retain) PUActivitySharingController * activitySharingController;              //@synthesize activitySharingController=_activitySharingController - In the implementation block
@property (nonatomic,retain) PUActivityProgressController * progressController;                    //@synthesize progressController=_progressController - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyUseCMMInMessagesIfThresholdMet;               //@synthesize shouldAutomaticallyUseCMMInMessagesIfThresholdMet=_shouldAutomaticallyUseCMMInMessagesIfThresholdMet - In the implementation block
@property (assign,nonatomic) BOOL shareAsCMM;                                                      //@synthesize shareAsCMM=_shareAsCMM - In the implementation block
@property (assign,nonatomic) BOOL excludeLiveness;                                                 //@synthesize excludeLiveness=_excludeLiveness - In the implementation block
@property (assign,nonatomic) BOOL excludeLocation;                                                 //@synthesize excludeLocation=_excludeLocation - In the implementation block
@property (assign,nonatomic) BOOL excludeCaption;                                                  //@synthesize excludeCaption=_excludeCaption - In the implementation block
@property (assign,nonatomic) BOOL excludeAccessibilityDescription;                                 //@synthesize excludeAccessibilityDescription=_excludeAccessibilityDescription - In the implementation block
@property (assign,nonatomic) BOOL sendAsOriginals;                                                 //@synthesize sendAsOriginals=_sendAsOriginals - In the implementation block
@property (nonatomic,retain) PXCPLStatusProvider * cplStatusProvider;                              //@synthesize cplStatusProvider=_cplStatusProvider - In the implementation block
@property (nonatomic,readonly) PUActivitySharingViewModel * sharingViewModel;                      //@synthesize sharingViewModel=_sharingViewModel - In the implementation block
@property (nonatomic,readonly) NSArray * photosActivities;                                         //@synthesize photosActivities=_photosActivities - In the implementation block
@property (assign,nonatomic,__weak) id<PUActivityViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isReadyForInteraction,nonatomic) BOOL readyForInteraction;                //@synthesize readyForInteraction=_readyForInteraction - In the implementation block
@property (assign,nonatomic) const CFStringRef aggregateKey;                                       //@synthesize aggregateKey=_aggregateKey - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * assets; 
@property (nonatomic,copy) id readyToInteractHandler;                                              //@synthesize readyToInteractHandler=_readyToInteractHandler - In the implementation block
@property (nonatomic,copy) id ppt_readyToInteractHandler;                                          //@synthesize ppt_readyToInteractHandler=_ppt_readyToInteractHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) long long sourceOrigin; 
@property (nonatomic,copy,readonly) id<PXDisplayAsset> keyAsset; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedSelectedAssets; 
@property (nonatomic,readonly) PXAssetMediaTypeCount assetTypeCount; 
@property (nonatomic,readonly) BOOL isActionSheet; 
+(id)new;
+(BOOL)needsConfidentialityCheckForActivityType:(id)arg1 ;
+(id)defaultActivityTypeOrder;
+(id)photosApplicationActivities;
+(BOOL)cmmAssetCountThresholdIsMetForAssetItems:(id)arg1 ;
+(BOOL)cmmFileSizeThresholdIsMetForAssetItems:(id)arg1 ;
+(BOOL)isOutboundShareActivity:(id)arg1 ;
+(id)actionSheetPhotosApplicationActivities;
+(BOOL)cmmThresholdIsMetForAssetItems:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSOrderedSet *)assets;
-(NSString *)localizedTitle;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(id<PXDisplayAsset>)keyAsset;
-(id)init;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(id<PUActivityViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(NSString *)localizedSubtitle;
-(void)setDelegate:(id<PUActivityViewControllerDelegate>)arg1 ;
-(void)_cancel;
-(const CFStringRef)aggregateKey;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)updateVisibleShareActionsIfNeeded;
-(BOOL)excludeLiveness;
-(void)setExcludeLiveness:(BOOL)arg1 ;
-(BOOL)excludeLocation;
-(void)setExcludeLocation:(BOOL)arg1 ;
-(BOOL)excludeCaption;
-(void)setExcludeCaption:(BOOL)arg1 ;
-(BOOL)excludeAccessibilityDescription;
-(void)setExcludeAccessibilityDescription:(BOOL)arg1 ;
-(BOOL)shareAsCMM;
-(void)setCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(void)setPhotosCarouselViewController:(id)arg1 ;
-(void)setAggregateKey:(const CFStringRef)arg1 ;
-(void)removeAssetItem:(id)arg1 ;
-(void)setAssetItems:(id)arg1 ;
-(void)addAssetItem:(id)arg1 ;
-(BOOL)_customizationAvailableForActivityViewController:(id)arg1 ;
-(void)activityItemSourceController:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(BOOL)arg5 errors:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)activityItemSourceController:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_customizationGroupsForActivityViewController:(id)arg1 ;
-(void)replaceAssetItem:(id)arg1 withAssetItem:(id)arg2 ;
-(BOOL)isActionSheet;
-(void)setReadyForInteraction:(BOOL)arg1 ;
-(void)setActivitySharingController:(PUActivitySharingController *)arg1 ;
-(id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3 assetIdentifiers:(id)arg4 sharingViewModel:(id)arg5 ;
-(void)viewDidLayoutSubviews;
-(long long)sourceOrigin;
-(NSOrderedSet *)orderedSelectedAssets;
-(PXAssetMediaTypeCount)assetTypeCount;
-(BOOL)sendAsOriginals;
-(void)_handleShareSheetReadyToInteractCompletion;
-(void)_updateTopBorderView;
-(void)_prepareActivity:(id)arg1 ;
-(id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2 linkPresentation:(id)arg3 ;
-(void)_activity:(id)arg1 category:(long long)arg2 didComplete:(BOOL)arg3 ;
-(id)_generateAnalyticsPayloadForSharingEventsToActivityType:(id)arg1 ;
-(void)_handleUserCancelWithCompletion:(/*^block*/id)arg1 ;
-(void)setShareAsCMM:(BOOL)arg1 ;
-(void)_sendCPAnalyticsShareEventWithActivityType:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_sendCPAnalyticsAssetExportPreparationEventWithActivityType:(id)arg1 didComplete:(BOOL)arg2 error:(id)arg3 ;
-(void)_showRemakerProgressView:(id)arg1 forMail:(BOOL)arg2 withCancelationHandler:(/*^block*/id)arg3 ;
-(void)_removeRemakerProgressView;
-(void)removeProgressUIAnimated:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(void)showProgressUIAnimated:(BOOL)arg1 withDelay:(BOOL)arg2 cancellationHandler:(/*^block*/id)arg3 ;
-(void)updateProgressUITitle;
-(void)_prepareAssetsForActivity:(id)arg1 forcePreparationAsMomentShareLink:(BOOL)arg2 ;
-(void)dealloc;
-(void)_showSharingWasInterruptedForErrors:(id)arg1 withIndividualAssets:(id)arg2 itemSourcesByAssetUUID:(id)arg3 toActivityType:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentConfidentialityWarningIfNeededForActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_cleanUpActivityState;
-(void)mailActivity:(id)arg1 displayVideoRemakerProgressView:(id)arg2 ;
-(void)_sharingManagerDidBeginPublishing:(id)arg1 ;
-(void)_handlePostReadyToInteractUpdatesIfNeeded;
-(void)_updateSourceControllerPreferredPreparationBehavior;
-(void)setSendAsOriginals:(BOOL)arg1 ;
-(void)_updateSourceControllerSharingPreferencesInAllItems;
-(void)setShouldAutomaticallyUseCMMInMessagesIfThresholdMet:(BOOL)arg1 ;
-(BOOL)_canShowSendAsOriginalsSwitchInObjectManipulationHeader;
-(void)_updateSharingHeaderIfNeeded;
-(void)_sharingStyleDidChangeToExpanded:(id)arg1 ;
-(BOOL)_shouldPresentAirplayAlertForActivity:(id)arg1 ;
-(void)_presentAlertIfNeededForActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_adjustPreparationOptionsIfNeededForActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentCMMSuggestionAlertForActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_canCreateCMMWithCurrentItems;
-(BOOL)_shouldSuggestSharingAsCMMForActivity:(id)arg1 ;
-(BOOL)_shouldAutomaticallySendAsCMMForActivity:(id)arg1 ;
-(void)ppt_performActivityOfType:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)ppt_cancelActivity;
-(PUActivitySharingViewModel *)sharingViewModel;
-(NSArray *)photosActivities;
-(BOOL)isReadyForInteraction;
-(id)readyToInteractHandler;
-(void)setReadyToInteractHandler:(id)arg1 ;
-(id)ppt_readyToInteractHandler;
-(void)setPpt_readyToInteractHandler:(id)arg1 ;
-(PUActivityProgressController *)progressController;
-(PUActivitySharingController *)activitySharingController;
-(void)setProgressController:(PUActivityProgressController *)arg1 ;
-(BOOL)shouldAutomaticallyUseCMMInMessagesIfThresholdMet;
-(PXCPLStatusProvider *)cplStatusProvider;
-(void)setCplStatusProvider:(PXCPLStatusProvider *)arg1 ;
@end
