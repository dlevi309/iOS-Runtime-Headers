/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <libobjc.A.dylib/CPLClientLibraryManagerProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerImplementation.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSCountedSet, NSMutableArray, NSObject, NSString;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation> {

	NSXPCConnection* _connection;
	/*^block*/id _blockToCallOnDaemonDying;
	NSMutableDictionary* _downloadTasks;
	NSMutableDictionary* _inMemoryDownloadTasks;
	NSMutableDictionary* _uploadTasks;
	NSMutableDictionary* _forceSyncTasks;
	NSMutableDictionary* _vouchersPerTaskIdentifier;
	BOOL _diagnosticsEnabled;
	unsigned long long _foregroundCalls;
	NSCountedSet* _disablingReasons;
	unsigned long long _disablingMinglingCount;
	unsigned long long _significantWorkCalls;
	NSMutableDictionary* _outstandingInvocations;
	unsigned long long _outstandingInvocationsCount;
	NSMutableDictionary* _syncOutstandingInvocations;
	unsigned long long _syncOutstandingInvocationsCount;
	NSMutableArray* _pendingBlocksAfterOpening;
	int _openingStatus;
	int _notifyToken;
	BOOL _killed;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProtocolInterface;
+(id)clientProtocolInterface;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)reportMiscInformation:(id)arg1 ;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getChangedStatusesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acknowledgeChangedStatuses:(id)arg1 ;
-(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2 ;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsBeginningSignificantWork;
-(void)enableMainScopeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(void)barrier;
-(void)cancelTask:(id)arg1 ;
-(void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startSyncSession;
-(void)resetStatus;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(BOOL)arg2 ;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)disableMingling;
-(void)enableMingling;
-(void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addInfoToLog:(id)arg1 ;
-(void)blockEngineElement:(id)arg1 ;
-(void)unblockEngineElement:(id)arg1 ;
-(void)unblockEngineElementOnce:(id)arg1 ;
-(void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideCloudResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableMainScopeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadDidStartForResourceTransferTask:(id)arg1 ;
-(void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2 ;
-(void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3 ;
-(void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3 ;
-(void)backgroundDownloadDidFinishForResource:(id)arg1 ;
-(void)backgroundDownloadDidFailForResource:(id)arg1 ;
-(void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2 ;
-(void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManagerHasChangesToPull;
-(void)libraryManagerHasStatusChanges;
-(void)libraryManagerDidUpdateStatusWithProperties:(id)arg1 ;
-(void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5 ;
-(void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2 ;
-(void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)libraryManagerHasBeenReplaced;
-(id)initWithAbstractObject:(id)arg1 ;
-(void)_callBlockOnDaemonDying;
-(BOOL)_setStatusFromDictionary:(id)arg1 ;
-(void)_reallyOpenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchBlockWhenOpen:(/*^block*/id)arg1 ;
-(void)_setCallBlockOnDaemonDying:(/*^block*/id)arg1 ;
-(void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(BOOL)arg2 proposedTaskIdentifier:(id)arg3 withError:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1 ;
-(void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2 ;
-(void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg1 withError:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg1 ;
-(void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(/*^block*/id)arg2 ;
-(void)_dropVoucherForTaskWithIdentifier:(id)arg1 ;
-(id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)noteClientReceivedNotificationOfServerChanges;
-(void)dispatchBlockWhenLibraryIsOpen:(/*^block*/id)arg1 ;
-(void)cancelSyncTask:(id)arg1 ;
@end

