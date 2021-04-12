/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	AQ _bytesWaitingToWriteOut;
	BSTimer* _reapingTimer;
	BSAtomicSignal* _invalidatedSignal;
	unsigned long long _clientCount;
	unsigned long long _pendingOperations;
	NSMutableArray* _archiveSchedulingQueue_synchronizeCompletions;
	BOOL _archiveSchedulingQueue_dirty;
	BOOL _archiveSchedulingQueue_scheduled;
	os_unfair_lock_s _accessLock;

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
+(void)relinquishManifest:(id)arg1 ;
+(id)_snapshotPredicateForRequest:(id)arg1 ;
+(long long)_outputFormatForSnapshot:(id)arg1 ;
+(void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3 ;
+(void)_workloop_noteManifestInvalidated:(id)arg1 ;
+(BOOL)isUnderMemoryPressure;
+(void)_flushManifestQueue;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)_invalidate;
-(id)containerPath;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(XBSnapshotManifestIdentity *)identity;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_commonInit;
-(id)defaultGroupIdentifier;
-(void)deleteAllSnapshots;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(void)_synchronizeDataStoreWithCompletion:(/*^block*/id)arg1 ;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)snapshotsForGroupIDs:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(/*^block*/id)arg4 didSaveImage:(/*^block*/id)arg5 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(void)deleteSnapshot:(id)arg1 ;
-(void)deleteSnapshots:(id)arg1 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(void)purgeSnapshotsWithProtectedContent;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleMemoryPressure;
-(id)_initWithContainerIdentity:(id)arg1 ;
-(id)_allSnapshotGroups;
-(void)_noteDirtied;
-(void)_scheduleArchivingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_workloop_incrementClientCount;
-(void)_workloop_decrementClientCount;
-(id)_access_snapshotsForGroupIDs:(id)arg1 ;
-(id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_access_workloop_reapExpiredAndInvalidSnapshots;
-(BOOL)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2 ;
-(void)_access_accessSnapshotsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addSnapshotToGroup:(id)arg1 ;
-(void)_access_addSnapshotToGroup:(id)arg1 ;
-(void)_access_deleteSnapshots:(id)arg1 ;
-(id)_access_snapshotsMatchingPredicate:(id)arg1 ;
-(id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)_access_deletePaths:(id)arg1 ;
-(void)_access_purgeSnapshotsWithProtectedContent;
-(id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_access_doArchiveWithCompletions:(id)arg1 ;
-(void)_workloop_checkClientCount;
-(BOOL)_access_validateWithContainerIdentity:(id)arg1 ;
-(void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2 ;
-(void)_workloop_reallyCheckClientCount;
-(id)_snapshotGroupsByID;
@end

