/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/_KSCloudKitManagerDelegate.h>
#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSCloudKitManager, _KSTextReplacementCoreDataStore, NSString;

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	BOOL _ckMigrationStatusOnCloud;
	_KSCloudKitManager* _cloudKitManager;
	_KSTextReplacementCoreDataStore* _coreDataStore;
	unsigned long long _numPullRequests;

}

@property (nonatomic,retain) _KSTextReplacementCoreDataStore * coreDataStore;              //@synthesize coreDataStore=_coreDataStore - In the implementation block
@property (assign,nonatomic) BOOL ckMigrationStatusOnCloud;                                //@synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud - In the implementation block
@property (assign,nonatomic) unsigned long long numPullRequests;                           //@synthesize numPullRequests=_numPullRequests - In the implementation block
@property (nonatomic,retain) _KSCloudKitManager * cloudKitManager;                         //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMigrationCompleted;
-(void)dealloc;
-(void)removeAllEntries;
-(id)userIdentity;
-(void)accountDidChange:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(_KSTextReplacementCoreDataStore *)coreDataStore;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(_KSCloudKitManager *)cloudKitManager;
-(void)pushMigrationStatusToCloud:(BOOL)arg1 ;
-(void)pushAllLocalData;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isAccountAvailable;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordSyncStatus;
-(id)textReplacementEntries;
-(void)userDidDeleteRecordZone:(id)arg1 ;
-(void)importSampleShortcutsIfNecessary;
-(void)setCkMigrationStatusOnCloud:(BOOL)arg1 ;
-(void)queryCloudIfFirstPullOrAccountChanged;
-(BOOL)ckMigrationStatusOnCloud;
-(unsigned long long)countLocalEntriesToBeSynced;
-(unsigned long long)getSyncCount;
-(unsigned long long)getSyncCountThresholdHalfLifeHours;
-(unsigned long long)decayedSyncCountForTime:(id)arg1 ;
-(void)_updateSyncCount:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(void)_requestSync:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)getSyncCountThrottleThreshold;
-(void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)queryUpdatedLocalEntries;
-(id)queryDeletedEntries;
-(id)localEntriesFromCloudEntries:(id)arg1 ;
-(unsigned long long)numPullRequests;
-(void)setNumPullRequests:(unsigned long long)arg1 ;
-(id)cloudEntriesFromLocalEntries:(id)arg1 ;
-(id)cloudRecordIDsForLocalEntries:(id)arg1 ;
-(void)removeAllEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryMigrationStatusOnCloudWithCallback:(/*^block*/id)arg1 ;
-(void)requestSyncIfPendingLocalChanges;
-(unsigned long long)totalPullRequestsUntilNow;
-(void)setCloudKitManager:(_KSCloudKitManager *)arg1 ;
-(void)setCoreDataStore:(_KSTextReplacementCoreDataStore *)arg1 ;
@end

