/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, AWDServerConnection;

@interface WBSAnalyticsLogger : NSObject {

	NSObject*<OS_dispatch_queue> _analyticsSynchronizationQueue;
	NSMutableDictionary* _pageLoadStartTimes;
	long long _persona;
	NSString* _safariVersion;
	AWDServerConnection* _awdServer;

}

@property (nonatomic,readonly) AWDServerConnection * awdServer;              //@synthesize awdServer=_awdServer - In the implementation block
+(id)sharedLogger;
-(void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1 ;
-(void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1 ;
-(void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1 ;
-(void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1 ;
-(void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(BOOL)arg2 status:(int)arg3 error:(id)arg4 client:(int)arg5 ;
-(void)_sf_enteredTwoUpUsingMethod:(int)arg1 ;
-(void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1 ;
-(void)_sf_tappedOnSafariToolbarButton:(int)arg1 ;
-(void)_sf_longTappedOnSafariToolbarButton:(int)arg1 ;
-(void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(BOOL)arg1 ;
-(void)_sf_activatedHomeScreenQuickAction:(int)arg1 ;
-(void)_sf_didBeginDownloadWithMIMEType:(id)arg1 uti:(id)arg2 downloadType:(long long)arg3 promptType:(long long)arg4 browserPersona:(unsigned long long)arg5 ;
-(void)_sf_reportAutoFillRequiresAuthenticationPreference:(BOOL)arg1 ;
-(void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(BOOL)arg2 status:(int)arg3 client:(int)arg4 ;
-(void)_sf_didTerminateWebProcessBeforeNavigationForReason:(int)arg1 ;
-(void)_sf_didChooseIntervalFromAutomaticTabClosingFirstTimeExperiencePrompt:(id)arg1 ;
-(void)_sf_reportAutomaticTabClosingInterval:(id)arg1 ;
-(void)_sf_didCloseTabsAutomaticallyWithCount:(unsigned long long)arg1 tabClosingInterval:(id)arg2 ;
-(void)reportNumberOfFlaggedPasswordsUsingSavedPasswordAuditorIfNeeded:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)didOpenRecommendationWithMetadata:(id)arg1 withPosition:(long long)arg2 ;
-(void)didToggleShowLessButtonForSection:(long long)arg1 ;
-(void)didRetrieveNumberOfFavorites:(unsigned long long)arg1 ;
-(void)didRetrieveNumberOfFrequentlyVisitedSites:(unsigned long long)arg1 ;
-(void)didReceiveWebKitAnalyticsEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)reportStatusForExtensions:(id)arg1 extensionType:(id)arg2 ;
-(void)reportNumberOfExtensionsWithFrequencyDictionaryProvider:(/*^block*/id)arg1 ;
-(void)didSwitchToSafari:(id)arg1 entryPoint:(id)arg2 ;
-(void)didDetectLanguageOfWebpage:(id)arg1 primaryLocale:(id)arg2 webpageCanBeTranslatedToPrimaryLocale:(BOOL)arg3 canOfferTranslation:(BOOL)arg4 firstNonPrimaryLocaleThatCanBeTranslatedTo:(id)arg5 numberOfPreferredLocales:(unsigned long long)arg6 notificationLevel:(long long)arg7 ;
-(void)didRequestTranslatingToLocale:(id)arg1 webpageLocale:(id)arg2 requestType:(long long)arg3 isTargetLocalePrimaryLocale:(BOOL)arg4 ;
-(void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2 ;
-(void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(BOOL)arg5 ;
-(id)_nameForStartPageSection:(long long)arg1 ;
-(void)_sendEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)didToggleShowMoreButtonForSection:(long long)arg1 isShowingMore:(BOOL)arg2 ;
-(void)performOnAnalyticsQueueWithDelay:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_sendEventAddingVersionInfo:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)pageLoadCompleted:(unsigned long long)arg1 ;
-(void)pageLoadStarted:(unsigned long long)arg1 ;
-(void)didReceiveInvalidMessageFromWebProcess:(id)arg1 ;
-(void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg1 ;
-(void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg1 showingPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(void)didToggleGloballyUseAutomaticReader:(BOOL)arg1 ;
-(void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1 ;
-(void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1 ;
-(void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(BOOL)arg4 ;
-(void)registerSafariVersion:(id)arg1 persona:(long long)arg2 ;
-(AWDServerConnection *)awdServer;
-(void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(BOOL)arg3 ;
-(void)didToggleDomainSpecificAutomaticReader:(BOOL)arg1 ;
-(void)submitAutomaticReaderActivation:(int)arg1 ;
-(void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1 ;
-(void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 localState:(long long)arg2 remoteState:(long long)arg3 ;
-(void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 ;
-(void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 error:(id)arg2 ;
-(void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2 ;
-(void)userDidSharePasswordWithOutcome:(int)arg1 ;
-(void)userDidReceiveSharedPasswordWithOutcome:(int)arg1 ;
-(void)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)arg1 searchProviderIdentifier:(id)arg2 provenance:(long long)arg3 ;
-(void)reportWeakPasswordWarningEvent:(long long)arg1 ;
-(void)didModifyPerSitePreferenceWithIdentifier:(id)arg1 modificationLevel:(long long)arg2 type:(long long)arg3 method:(long long)arg4 ;
-(void)didRevealDownloadWithMIMEType:(id)arg1 uti:(id)arg2 result:(long long)arg3 ;
-(void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(unsigned long long)arg1 ;
-(void)didSetDownloadFolderToProviderWithIdentifier:(id)arg1 isDefaultFolder:(BOOL)arg2 ;
-(void)didDownvoteDataSourceWithMetadata:(id)arg1 ;
-(void)didBanWebsiteWithMetadata:(id)arg1 ;
-(void)didRetrieveNumberOfRecommendations:(unsigned long long)arg1 numberOfTopics:(unsigned long long)arg2 ;
-(void)didToggleShowMoreButtonForSection:(long long)arg1 ;
@end

