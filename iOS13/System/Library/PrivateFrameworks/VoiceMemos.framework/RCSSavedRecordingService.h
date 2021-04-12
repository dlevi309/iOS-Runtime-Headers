/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCSSavedRecordingServiceClientProtocol.h>
#import <libobjc.A.dylib/RCSSavedRecordingServiceProtocol.h>

@protocol OS_dispatch_queue, RCSSavedRecordingServiceProtocol;
@class NSObject, NSXPCConnection, NSHashTable, NSMutableDictionary, NSSet, NSString;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	int _compositionAVURLsBeingExportedDistributedNotificationToken;
	int _compositionAVURLsBeingModifiedDistributedNotificationToken;
	NSXPCConnection* _xpcConnection;
	id<RCSSavedRecordingServiceProtocol> _serviceProxy;
	id<RCSSavedRecordingServiceProtocol> _synchronousServiceProxy;
	NSHashTable* _interruptionObservers;
	NSMutableDictionary* _pendingServiceCompletionHandlers;
	NSMutableDictionary* _pendingSynchronousServiceCompletionHandlers;
	NSSet* _compositionAVURLsBeingExported;
	NSSet* _compositionAVURLsBeingModified;

}

@property (nonatomic,retain) NSSet * compositionAVURLsBeingExported;                    //@synthesize compositionAVURLsBeingExported=_compositionAVURLsBeingExported - In the implementation block
@property (nonatomic,retain) NSSet * compositionAVURLsBeingModified;                    //@synthesize compositionAVURLsBeingModified=_compositionAVURLsBeingModified - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) BOOL isDatabaseAvailable; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(id)changeToken;
+(void)setChangeToken:(id)arg1 ;
+(BOOL)isRunningInSavedRecordingDaemon;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)serviceProxy;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)closeServiceConnection;
-(BOOL)isDatabaseAvailable;
-(oneway void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 importCompletionBlock:(/*^block*/id)arg4 ;
-(oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg1 recordingURIsToUpdate:(id)arg2 recordingURIsToDelete:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)performDatabaseMigrationWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)enableCloudRecordingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)disableCloudRecordingsSaveLocalCopies:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(oneway void)importRecordingsFromCloud:(/*^block*/id)arg1 ;
-(oneway void)exportRecordingsToCloud:(/*^block*/id)arg1 ;
-(oneway void)expungeRecordingsFromCloud:(/*^block*/id)arg1 ;
-(oneway void)openAudioFile:(id)arg1 settings:(id)arg2 accessRequestHandler:(/*^block*/id)arg3 ;
-(oneway void)closeAudioFile:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)writeAudioFile:(id)arg1 buffer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 accessRequestHandler:(/*^block*/id)arg3 ;
-(oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)removeAllUserDataWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)endAccessSessionWithToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 ;
-(oneway void)disableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)enableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)fetchCompositionAVURLsBeingExported:(/*^block*/id)arg1 ;
-(oneway void)fetchCompositionAVURLsBeingModified:(/*^block*/id)arg1 ;
-(oneway void)_fetchAllAccessTokens:(/*^block*/id)arg1 ;
-(oneway void)reloadExistingSearchMetadataWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)openServiceConnection;
-(void)_handleCompositionAVURLsBeingExportedDidChange;
-(void)_handleCompositionAVURLsBeingModifiedDidChange;
-(void)_sendSynchronousServiceMessage:(SEL)arg1 withBasicReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_onQueueCloseServiceConnection;
-(void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 importRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(/*^block*/id)arg3 messagingBlock:(/*^block*/id)arg4 ;
-(void)_sendSynchronousServiceMessage:(SEL)arg1 accessRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)setCompositionAVURLsBeingExported:(NSSet *)arg1 ;
-(void)setCompositionAVURLsBeingModified:(NSSet *)arg1 ;
-(oneway void)__fetchAllAccessTokens:(/*^block*/id)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1 ;
-(void)_invalidatePendingSynchronousCompletionHandlersWithError:(id)arg1 ;
-(id)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(/*^block*/id)arg1 ;
-(void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(id)arg1 ;
-(void)_sendServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(/*^block*/id)arg3 withServiceProxy:(id)arg4 messagingBlock:(/*^block*/id)arg5 ;
-(id)synchronousServiceProxy;
-(void)_sendSynchronousServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(/*^block*/id)arg3 messagingBlock:(/*^block*/id)arg4 ;
-(void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(/*^block*/id)arg2 withServiceProxy:(id)arg3 messagingBlock:(/*^block*/id)arg4 ;
-(void)addInterruptionObserver:(id)arg1 ;
-(void)removeInterruptionObserver:(id)arg1 ;
-(id)prepareToCaptureToCompositionAVURL:(id)arg1 error:(id*)arg2 ;
-(id)openAudioFile:(id)arg1 settings:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)closeAudioFile:(id)arg1 error:(id*)arg2 ;
-(id)prepareToPreviewCompositionAVURL:(id)arg1 error:(id*)arg2 ;
-(id)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 error:(id*)arg3 ;
-(id)prepareToTrimCompositionAVURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)endAccessSessionWithToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 error:(id*)arg2 ;
-(void)checkRecordingAvailability:(/*^block*/id)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2 ;
-(NSSet *)compositionAVURLsBeingExported;
-(NSSet *)compositionAVURLsBeingModified;
@end

