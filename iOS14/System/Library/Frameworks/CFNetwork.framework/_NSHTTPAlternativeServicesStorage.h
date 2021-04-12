/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSURL, NSObject, NSMutableSet, NSMutableDictionary;

@interface _NSHTTPAlternativeServicesStorage : NSObject {

	NSURL* _path;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _garbageCollectionDispatched;
	BOOL _dbInitialized;
	BOOL _isMemoryStore;
	os_unfair_lock_s lock;
	NSMutableSet* memoryEntries;
	NSMutableDictionary* speculativeEntries;
	sqlite3Ref dbConnection;
	sqlite3_stmtRef selectAllEntriesStmt;
	sqlite3_stmtRef selectAllValidEntriesStmt;
	sqlite3_stmtRef selectEntriesStmt;
	sqlite3_stmtRef selectEntriesWithRegistrableDomainStmt;
	sqlite3_stmtRef insertEntriesStmt;
	sqlite3_stmtRef deleteWithTimeStmt;
	sqlite3_stmtRef deleteWithRegistrableDomainStmt;
	sqlite3_stmtRef deleteExpiredEntriesStmt;
	sqlite3_stmtRef trimDbStmt;

}

@property (nonatomic,readonly) NSURL * path; 
+(id)sharedPersistentStore;
-(id)init;
-(void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)arg1 ;
-(id)HTTPServiceEntriesWithRegistrableDomain:(id)arg1 ;
-(id)initPersistentStoreWithURL:(id)arg1 ;
-(NSURL *)path;
-(id)entries;
-(id)initInMemoryStore;
-(void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)arg1 ;
-(id)HTTPServiceEntriesWithFilter:(id)arg1 ;
-(void)storeHTTPServiceEntry:(id)arg1 ;
-(void)dealloc;
@end

