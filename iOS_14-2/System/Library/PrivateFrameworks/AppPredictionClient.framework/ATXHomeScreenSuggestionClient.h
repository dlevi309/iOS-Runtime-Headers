/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ATXHomeScreenSuggestionServerXPCInterface.h>
#import <libobjc.A.dylib/ATXWidgetDwellTrackerDelegate.h>

@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;
@class NSObject, NSXPCListener, NSXPCConnection, _PASQueueLock, ATXUICacheManager, ATXHomeScreenConfigCache, ATXEngagementRecordManager, ATXWidgetDwellTracker, ATXBiomeUIStream, ATXActionPredictionClient, NSUserDefaults, NSArray, NSMutableDictionary, NSSet, NSString;

@interface ATXHomeScreenSuggestionClient : NSObject <NSXPCListenerDelegate, ATXHomeScreenSuggestionServerXPCInterface, ATXWidgetDwellTrackerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _xpcListener;
	NSXPCConnection* _xpcConnection;
	_PASQueueLock* _lock;
	double _postInteractionRotationSuppressionInterval;
	double _postInteractionRotationSuppressionLeeway;
	ATXUICacheManager* _uiCacheManager;
	ATXHomeScreenConfigCache* _homeScreenConfigCache;
	ATXEngagementRecordManager* _engagementRecordManager;
	ATXWidgetDwellTracker* _widgetDwellTracker;
	ATXBiomeUIStream* _biomeUIStream;
	ATXActionPredictionClient* _actionPredictionClient;
	NSUserDefaults* _atxDefaults;
	id<ATXPETEventTracker2Protocol> _tracker;
	NSArray* _currentConfigurations;
	NSMutableDictionary* _widgetUniqueIdToCachedWidgetData;
	BOOL _hasAppPanelOnHomeScreen;
	BOOL _hasAppPanelOnLoH;
	BOOL _hasSuggestionWidgetOnHomeScreen;
	BOOL _hasSuggestionWidgetOnLoH;
	NSMutableDictionary* _bundleIdToSBPageNumber;
	NSSet* _dockAppSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_homeScreenPredictionWithBlendingCacheId:(id)arg1 ;
-(id)_stackSuggestionForRegularWidgetFromLayout:(id)arg1 stackIdentifier:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)homeScreenPredictionWithReply:(/*^block*/id)arg1 ;
-(void)setPostInteractionSuggestionSuppressionTimeInterval:(double)arg1 leeway:(double)arg2 ;
-(void)_setCurrentSuggestionWidgetLayouts:(id)arg1 ;
-(id)_eventWithDate:(id)arg1 eventTypeString:(id)arg2 stackIdentifier:(id)arg3 stackKind:(unsigned long long)arg4 stackLocation:(unsigned long long)arg5 reason:(id)arg6 widget:(id)arg7 blendingCacheIdentifier:(id)arg8 ;
-(void)logWidgetDidDisappear:(id)arg1 blendingCacheId:(id)arg2 ;
-(id)init;
-(void)_setBiomeUIStream:(id)arg1 ;
-(unsigned long long)_stackKindGivenWidgetUniqueId:(id)arg1 ;
-(id)layoutForAppPredictionPanelWithIdentifier:(id)arg1 ;
-(void)logUserDidAddPinnedWidget:(id)arg1 defaultsComparator:(id)arg2 ;
-(void)_rotationSuppressionTimerFired;
-(void)writeDockAppList:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_logCaptureRateDiversionIfAppPredictionPanelExistsWithTappedWidgetUniqueId:(id)arg1 guardedData:(id)arg2 ;
-(void)logContextMenuNeverShowAgainForSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 ;
-(id)_stackIdentifierGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2 ;
-(unsigned long long)_stackLocationGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2 ;
-(BOOL)_widgetIdentifierIsSuggestionsWidget:(id)arg1 guardedData:(id)arg2 ;
-(void)_logAppPanelLaunchRatioWithTappedWidget:(id)arg1 ;
-(void)logContextMenuDismissOnceForSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 ;
-(void)logUserDidDeleteWidgetOnStack:(id)arg1 stackIdentifier:(id)arg2 stackKind:(unsigned long long)arg3 stackLocation:(unsigned long long)arg4 ;
-(void)logSpecialPageDidDisappear:(unsigned long long)arg1 ;
-(void)_syncPASQueueLockForTests;
-(void)_setDockAppSet:(id)arg1 ;
-(void)logWidgetDidAppear:(id)arg1 blendingCacheId:(id)arg2 ;
-(id)_pageIndexGivenWidgetUniqueId:(id)arg1 ;
-(void)_populateStackKindAndLocation:(id)arg1 ;
-(void)logSuggestionsDidDisappear:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 ;
-(void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logUserDidCreateStack:(id)arg1 isSuggestion:(BOOL)arg2 ;
-(void)logSupplementaryActionInContextMenu:(unsigned long long)arg1 stackId:(id)arg2 widgetOnTop:(id)arg3 prediction:(id)arg4 ;
-(id)homeScreenPrediction;
-(void)_setHasAppPanelOnHomeScreen:(BOOL)arg1 ;
-(void)_replaceSuggestionForAllProactiveWidgets:(id)arg1 guardedData:(id)arg2 ;
-(unsigned long long)_stackLocationGivenWidgetUniqueId:(id)arg1 ;
-(void)logWidgetUnoccluded:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)_setBundleIdToSBPageNumber:(id)arg1 ;
-(id)_stackIdentifierGivenWidgetUniqueId:(id)arg1 ;
-(void)forceDebugRotationForStack:(id)arg1 extensionBundleId:(id)arg2 kind:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logSpecialPageDidAppear:(unsigned long long)arg1 widgetsByStackId:(id)arg2 prediction:(id)arg3 ;
-(void)_handleStackSuggestionDidUpdate:(id)arg1 ;
-(BOOL)_isWidgetEngaged:(id)arg1 kind:(id)arg2 afterMostRecentProactiveRotationToSuggestionWithIdentifier:(id)arg3 guardedData:(id)arg4 ;
-(void)_cleanupGuardedData:(id)arg1 ;
-(void)_runAsyncOnQueueWhenUnlocked:(/*^block*/id)arg1 ;
-(void)loadHomeScreenPageConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logWidgetOccluded:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)significantDwellDetectedForWidget:(id)arg1 date:(id)arg2 ;
-(void)logSuggestionsDidAppear:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 ;
-(void)_startSuppressingRotationForTimeInterval:(double)arg1 leeway:(double)arg2 guardedData:(id)arg3 ;
-(void)_alertUserIfNeededOfStackChange:(id)arg1 widgetOnTop:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)startSuppressingRotationForTimeInterval:(double)arg1 leeway:(double)arg2 ;
-(void)writeHomeScreenPageConfigurations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_stackSuggestionFromLayout:(id)arg1 withStackIdentifier:(id)arg2 ;
-(void)_logAppLaunchOverallCaptureRateFromAppPredictionPanelWithTappedWidget:(id)arg1 suggestion:(id)arg2 ;
-(void)logStackDidTap:(id)arg1 widgetOnTop:(id)arg2 prediction:(id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_toggleSiriSearchSettingsOffForAppSuggestion:(id)arg1 ;
-(void)logDeviceLock;
-(unsigned long long)_stackKindGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2 ;
-(void)_readCachedSuggestionsFromDiskAndUpdateGuardedData:(id)arg1 ;
-(void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)didFinishExecutingTappedSuggestion:(id)arg1 fromWidget:(id)arg2 ;
-(void)_refreshInferredEngagementStatusForWidgetSuggestions:(id)arg1 ;
-(void)_setStore:(id)arg1 ;
-(void)_logProactiveWidgetEvent:(int)arg1 suggestionIdentifiers:(id)arg2 engagedSuggestion:(id)arg3 widget:(id)arg4 blendingCacheId:(id)arg5 date:(id)arg6 ;
-(void)_performCoalescedHomeScreenAndTodayConfigurationDiff;
-(void)logHomeScreenDidDisappearWithReason:(id)arg1 ;
-(void)_notifyObserversAboutSuggestionRefreshToSuggestionsWidgetOnlyWithGuardedData:(id)arg1 ;
-(id)_stackSuggestionForSuggestionWidgetWithLayout:(id)arg1 stackIdentifier:(id)arg2 ;
-(void)_setHasAppPanelOnLoH:(BOOL)arg1 ;
-(void)logHomeScreenPageDidAppear:(unsigned long long)arg1 topWidgetsByStackIdentifier:(id)arg2 prediction:(id)arg3 ;
-(void)_updateCurrentConfigurationsAndLogDiff;
-(id)loadHomeScreenPageConfigurationsWithError:(id*)arg1 ;
-(id)_proactiveSuggestionWithId:(id)arg1 fromLayoutOfWidgetWithId:(id)arg2 guardedData:(id)arg3 ;
-(void)logUserDidAddWidgetToStack:(id)arg1 stackIdentifier:(id)arg2 isSuggestion:(BOOL)arg3 ;
-(id)layoutForSuggestionWidgetWithIdentifier:(id)arg1 ;
-(void)_populateCachedIconState:(id)arg1 dockAppSet:(id)arg2 ;
-(void)logDidTapSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 ;
-(void)logDeviceUnlock;
-(void)_setUpInformationStoreIfNecessaryWithGuardedData:(id)arg1 ;
-(void)logUserDidDeleteStack:(id)arg1 stackKind:(unsigned long long)arg2 stackLocation:(unsigned long long)arg3 ;
-(void)logStackDidDisappear:(id)arg1 topWidget:(id)arg2 prediction:(id)arg3 ;
-(void)logStackDidAppear:(id)arg1 topWidget:(id)arg2 prediction:(id)arg3 ;
-(void)logUserDidChangeStackConfiguration:(id)arg1 ;
-(void)_logCaptureRateForAppPredictionPanelWithEngagedSuggestion:(id)arg1 isSuggestionsWidget:(BOOL)arg2 widgetIdentifier:(id)arg3 ;
-(id)initWithHomeScreenConfigCache:(id)arg1 engagementRecordManager:(id)arg2 widgetDwellTracker:(id)arg3 uiCacheManager:(id)arg4 actionPredictionClient:(id)arg5 tracker:(id)arg6 ;
-(id)_pageIndexGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2 ;
-(void)_handleProactiveWidgetEvent:(int)arg1 suggestionIdentifier:(id)arg2 widgetIdentifier:(id)arg3 ;
-(void)_refreshBlendingLayer;
-(void)_notifyObserversAboutSuggestionRefreshWithGuardedData:(id)arg1 ;
-(void)logUserDidDeletePinnedWidget:(id)arg1 stackLocation:(unsigned long long)arg2 ;
-(void)_setCurrentAppPredictionPanelLayouts:(id)arg1 ;
-(BOOL)isSuggestionReplacementAvailableForSuggestion:(id)arg1 inLayout:(id)arg2 ;
-(long long)_layoutTypeOfSuggestion:(id)arg1 inLayout:(id)arg2 ;
-(void)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newSuggestionLayoutForOldLayout:(id)arg1 replacedSuggestionId:(id)arg2 shouldSuggestionsBeDisjoint:(BOOL)arg3 usedFallbackIndexSet:(id)arg4 guardedData:(id)arg5 ;
-(void)_updateGuardedData:(id)arg1 withCachedSuggestions:(id)arg2 ;
-(void)logStackStatusDidChange:(id)arg1 widgetOnTop:(id)arg2 reason:(unsigned long long)arg3 prediction:(id)arg4 ;
-(void)dealloc;
-(void)_replaceSuggestionWithId:(id)arg1 shouldSuggestionsBeDisjoint:(BOOL)arg2 guardedData:(id)arg3 ;
-(id)_replaceSuggestionWithId:(id)arg1 fromSuggestionsArray:(id)arg2 suggestionLayoutType:(long long)arg3 usedFallbackIndexSet:(id)arg4 shouldSuggestionsBeDisjoint:(BOOL)arg5 guardedData:(id)arg6 ;
@end

