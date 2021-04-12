/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>
@optional
-(void)reportMiscInformation:(id)arg1;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
-(void)barrier;
-(void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1;
-(void)addInfoToLog:(id)arg1;
-(void)blockEngineElement:(id)arg1;
-(void)unblockEngineElement:(id)arg1;
-(void)unblockEngineElementOnce:(id)arg1;
-(void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideCloudResource:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acceptMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)getChangedStatusesWithCompletionHandler:(/*^block*/id)arg1;
-(void)acknowledgeChangedStatuses:(id)arg1;
-(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsBeginningSignificantWork;
-(void)enableMainScopeWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDiagnosticsEnabled:(BOOL)arg1;
-(BOOL)diagnosticsEnabled;
-(void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)startSyncSession;
-(void)resetStatus;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(BOOL)arg2;
-(void)disableSynchronizationWithReason:(id)arg1;
-(void)enableSynchronizationWithReason:(id)arg1;
-(void)disableMingling;
-(void)enableMingling;
-(void)disableMainScopeWithCompletionHandler:(/*^block*/id)arg1;
-(void)noteClientReceivedNotificationOfServerChanges;

@end

