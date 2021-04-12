/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceCollection.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKCollectionClient.h>

@class NSXPCConnection, NSNumber, NSArray, NSUUID, NSMutableArray, NSString;

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKFaceObserver, NTKCollectionClient> {

	BOOL _hasLoaded;
	NSXPCConnection* _connection;
	BOOL _registrationNeeded;
	NSNumber* _seqId;
	NSArray* _referenceOrderedUUIDs;
	NSUUID* _referenceSelectedUUID;
	BOOL _suppressingFaceObserverCallbacks;
	BOOL _updatesFromDaemonSuspended;
	NSMutableArray* _updatesFromDaemonEnqueuedWhileSuspended;
	NSString* _updateSuspensionIdentifier;
	BOOL _isLibraryCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)_serverProxy;
-(void)_handleConnectionInterrupted;
-(BOOL)hasLoaded;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)faceUpgradeOccurred:(id)arg1 ;
-(id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 ;
-(void)_didSelectFaceUUID:(id)arg1 ;
-(void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_didRemoveFace:(id)arg1 withUUID:(id)arg2 ;
-(void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesByUUID:(id)arg3 seqId:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2 ;
-(void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2 ;
-(void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3 ;
-(void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addFace:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3 ;
-(void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)upgradeFace:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3 ;
-(void)resetClientCollection;
-(void)flushCompleteForIdentifier:(id)arg1 ;
-(void)_registerIfNeeded;
-(void)_sendToDaemonAddedFace:(id)arg1 forUUID:(id)arg2 ;
-(void)_sendToDaemonOrderedUUIDs;
-(void)_sendToDaemonSelectedUUID;
-(void)_sendToDaemonRemovedFaceForUUID:(id)arg1 ;
-(void)_sendToDaemonReset;
-(void)_sendToDaemonFlushWithIdentifier:(id)arg1 ;
-(void)_sendToDaemonUpdatedConfigurationForFace:(id)arg1 withUUID:(id)arg2 ;
-(void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)arg1 withUUID:(id)arg2 ;
-(void)_sendToDaemonUpgradeForFace:(id)arg1 withUUID:(id)arg2 ;
-(void)_fromDaemon_removeFaceForUUID:(id)arg1 ;
-(void)_fromDaemon_addFace:(id)arg1 forUUID:(id)arg2 ;
-(void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
-(void)_performSuppressingFaceObserverCallbacks:(/*^block*/id)arg1 ;
-(void)_notifyLoaded;
-(void)_performOrEnqueueUpdateOfType:(long long)arg1 forFaceUUID:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_notifyReset;
-(void)_fromDaemon_updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_fromDaemon_updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 ;
-(void)_fromDaemon_upgradeFace:(id)arg1 forUUID:(id)arg2 ;
-(void)_handleFlushCompleteForIdentifier:(id)arg1 ;
-(void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)arg1 ;
-(void)suspendUpdatesFromDaemon;
-(void)resumeUpdatesFromDaemon;
@end

