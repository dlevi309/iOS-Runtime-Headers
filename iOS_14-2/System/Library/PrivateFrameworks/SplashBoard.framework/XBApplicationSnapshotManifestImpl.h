/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/XBApplicationSnapshotManifest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBSnapshotContainerIdentity, XBSnapshotManifestIdentity, NSMutableDictionary, NSFileManager, BSTimer, BSAtomicSignal, NSMutableArray, NSString;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding> {

	XBSnapshotContainerIdentity* _containerIdentity;
	XBSnapshotManifestIdentity* _identity;
	NSMutableDictionary* _snapshotGroupsByID;
	NSFileManager* _imageAccessFileManger;
	BSTimer* _reapingTimer;
	BSAtomicSignal* _invalidatedSignal;
	unsigned long long _clientCount;
	unsigned long long _pendingOperations;
	NSMutableArray* _archiveSchedulingQueue_synchronizeCompletions;
	BOOL _archiveSchedulingQueue_dirty;
	BOOL _archiveSchedulingQueue_scheduled;
	BOOL _logContainerIdentifierDirty;
	os_unfair_lock_s _accessLock;
	NSString* _baseLogIdentifier;
	NSString* _logIdentifier;

}

@property (nonatomic,copy,readonly) XBSnapshotContainerIdentity * containerIdentity;              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (nonatomic,copy,readonly) XBSnapshotManifestIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(BOOL)arg3 ;
+(void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3 ;
+(void)relinquishManifest:(id)arg1 ;
+(void)_workloop_noteManifestInvalidated:(id)arg1 ;
+(id)_snapshotPredicateForRequest:(id)arg1 ;
+(long long)_outputFormatForSnapshot:(id)arg1 ;
+(BOOL)isUnderMemoryPressure;
-(id)containerPath;
-(void)deleteAllSnapshots;
-(id)succinctDescription;
-(BOOL)_invalidate;
-(void)deleteSnapshot:(id)arg1 ;
-(id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2 ;
-(id)_access_allSnapshotGroups;
-(void)_access_workloop_reapExpiredAndInvalidSnapshots;
-(id)defaultGroupIdentifier;
-(id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)_access_accessSnapshotsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_setContainerIdentity:(id)arg1 ;
-(void)_access_deletePaths:(id)arg1 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(XBSnapshotManifestIdentity *)identity;
-(void)_noteDirtied;
-(id)_snapshotGroupsByID;
-(void)purgeSnapshotsWithProtectedContent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 imageGeneratedHandler:(/*^block*/id)arg4 imageDataSavedHandler:(/*^block*/id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)bundleIdentifier;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg1 ;
-(void)_addSnapshotToGroup:(id)arg1 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2 ;
-(void)_synchronizeDataStoreWithCompletion:(/*^block*/id)arg1 ;
-(id)_access_snapshotsForGroupIDs:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_workloop_decrementClientCount;
-(NSString *)description;
-(void)_workloop_reallyCheckClientCount;
-(void)_access_purgeSnapshotsWithProtectedContent;
-(void)_workloop_incrementClientCount;
-(void)_access_deleteSnapshots:(id)arg1 ;
-(id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(BOOL)_access_validateWithContainerIdentity:(id)arg1 ;
-(BOOL)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_scheduleArchivingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_workloop_checkClientCount;
-(void)_access_addSnapshotToGroup:(id)arg1 ;
-(void)_access_doArchiveWithCompletions:(id)arg1 ;
-(void)_reapExpiredAndInvalidSnapshots;
-(id)_initWithContainerIdentity:(id)arg1 ;
-(id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_commonInit;
-(void)deleteSnapshots:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(id)_allSnapshotGroups;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(id)succinctDescriptionBuilder;
-(id)_descriptionForStateCaptureWithMultilinePrefix:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)dealloc;
-(void)_handleMemoryPressure;
-(id)_access_snapshotsMatchingPredicate:(id)arg1 ;
@end

