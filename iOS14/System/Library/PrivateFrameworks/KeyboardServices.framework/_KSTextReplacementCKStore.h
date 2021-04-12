/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllEntries;
-(id)userIdentity;
-(BOOL)ckMigrationStatusOnCloud;
-(void)pullRemoteDataWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestSyncIfPendingLocalChanges;
-(id)localEntriesFromCloudEntries:(id)arg1 ;
-(void)setCkMigrationStatusOnCloud:(BOOL)arg1 ;
-(void)accountDidChange:(id)arg1 ;
-(id)cloudRecordIDsForLocalEntries:(id)arg1 ;
-(void)pushLocalChangesWithPriority:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestSync:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recordSyncStatus;
-(void)setCloudKitManager:(_KSCloudKitManager *)arg1 ;
-(id)cloudEntriesFromLocalEntries:(id)arg1 ;
-(void)queryMigrationStatusOnCloudWithCallback:(/*^block*/id)arg1 ;
-(unsigned long long)getSyncCountThrottleThreshold;
-(unsigned long long)decayedSyncCountForTime:(id)arg1 ;
-(_KSTextReplacementCoreDataStore *)coreDataStore;
-(void)_updateSyncCount:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(unsigned long long)totalPullRequestsUntilNow;
-(void)pushAllLocalData;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)getSyncCountThresholdHalfLifeHours;
-(unsigned long long)numPullRequests;
-(id)textReplacementEntries;
-(void)pushMigrationStatusToCloud:(BOOL)arg1 ;
-(id)queryDeletedEntries;
-(void)queryCloudIfFirstPullOrAccountChanged;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)userDidDeleteRecordZone:(id)arg1 ;
-(void)importSampleShortcutsIfNecessary;
-(unsigned long long)getSyncCount;
-(void)setCoreDataStore:(_KSTextReplacementCoreDataStore *)arg1 ;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)setNumPullRequests:(unsigned long long)arg1 ;
-(void)removeAllEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)countLocalEntriesToBeSynced;
-(id)queryUpdatedLocalEntries;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(_KSCloudKitManager *)cloudKitManager;
-(void)dealloc;
-(BOOL)isAccountAvailable;
@end

