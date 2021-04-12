/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NPKPassSyncEngineDelegate.h>
#import <libobjc.A.dylib/NPKPassSyncEngineDataSource.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NPKPassSyncEngine, IDSService, NSObject, NPKPassSyncServiceSyncStatus, NSString;

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource> {

	BOOL _dropAllMessages;
	NPKPassSyncEngine* _passSyncEngine;
	IDSService* _passSyncService;
	NSObject*<OS_dispatch_queue> _passSyncQueue;
	NSObject*<OS_dispatch_source> _passSyncEngineArchiveTimer;
	NSObject*<OS_dispatch_source> _passSyncEngineSyncTimer;
	NPKPassSyncServiceSyncStatus* _passSyncStatus;

}

@property (nonatomic,retain) NPKPassSyncEngine * passSyncEngine;                                    //@synthesize passSyncEngine=_passSyncEngine - In the implementation block
@property (nonatomic,retain) IDSService * passSyncService;                                          //@synthesize passSyncService=_passSyncService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> passSyncQueue;                            //@synthesize passSyncQueue=_passSyncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> passSyncEngineArchiveTimer;              //@synthesize passSyncEngineArchiveTimer=_passSyncEngineArchiveTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> passSyncEngineSyncTimer;                 //@synthesize passSyncEngineSyncTimer=_passSyncEngineSyncTimer - In the implementation block
@property (nonatomic,retain) NPKPassSyncServiceSyncStatus * passSyncStatus;                         //@synthesize passSyncStatus=_passSyncStatus - In the implementation block
@property (assign,nonatomic) BOOL dropAllMessages;                                                  //@synthesize dropAllMessages=_dropAllMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)syncStateChanged:(id)arg1 ;
-(void)syncStateChangeProcessed:(id)arg1 ;
-(void)reconciledStateUnrecognized:(id)arg1 ;
-(void)proposedReconciledState:(id)arg1 ;
-(void)reconciledStateAccepted:(id)arg1 ;
-(void)passSettingsChanged:(id)arg1 ;
-(void)catalogChanged:(id)arg1 ;
-(void)_archiveTimerFired;
-(id)_archivedPassSyncEngine;
-(void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(BOOL)arg1 ;
-(void)_syncWhenAppropriate;
-(void)handleIncomingCatalog:(id)arg1 ;
-(void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(id)catalogToSend;
-(unsigned long long)settingsForPassWithUniqueID:(id)arg1 ;
-(void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(id)currentLibraryPassSyncStateWithReconciledState:(id)arg1 ;
-(void)_syncNow;
-(void)_ensureSyncTimerIsSet;
-(void)_syncTimerFired;
-(void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(BOOL)arg3 fullPassRequired:(BOOL)arg4 ;
-(void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3 ;
-(void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)passSyncEngineStateChanged:(id)arg1 ;
-(void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(BOOL)arg3 ;
-(void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2 ;
-(id)passSyncEngine:(id)arg1 partialDataForPassWithUniqueID:(id)arg2 baseManifest:(id)arg3 outRemoteAssets:(id*)arg4 ;
-(id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2 ;
-(id)initWithPassSyncEngineRole:(unsigned long long)arg1 ;
-(void)handlePassLibraryChanged;
-(void)handleCatalogChanged:(id)arg1 ;
-(void)suggestSync;
-(BOOL)dropAllMessages;
-(void)setDropAllMessages:(BOOL)arg1 ;
-(NPKPassSyncEngine *)passSyncEngine;
-(void)setPassSyncEngine:(NPKPassSyncEngine *)arg1 ;
-(IDSService *)passSyncService;
-(void)setPassSyncService:(IDSService *)arg1 ;
-(NSObject*<OS_dispatch_queue>)passSyncQueue;
-(void)setPassSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)passSyncEngineArchiveTimer;
-(void)setPassSyncEngineArchiveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)passSyncEngineSyncTimer;
-(void)setPassSyncEngineSyncTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NPKPassSyncServiceSyncStatus *)passSyncStatus;
-(void)setPassSyncStatus:(NPKPassSyncServiceSyncStatus *)arg1 ;
@end

