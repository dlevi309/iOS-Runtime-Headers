/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBApplicationDataStoreRepository.h>

@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSObject, BSSqliteDatabaseConnection, NSString;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {

	NSURL* _storeURL;
	id<FBApplicationDataStoreRepositoryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dbQueue;
	BSSqliteDatabaseConnection* _dbQueue_dbConnection;
	unsigned long long _dbQueue_batchDepth;
	int _dbQueue_firstUnlockToken;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_objectRequiresSerialization:(id)arg1 ;
+(id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id*)arg3 ;
+(id)_objectForResultRow:(id)arg1 index:(unsigned long long)arg2 ;
-(id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id)_dbQueue_openDatabase;
-(BOOL)_dbQueue_tryPreserveDamagedDatabase;
-(BOOL)_dbQueue_databaseIntegrityCheck;
-(id)allObjectsForKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(BOOL)_inAlternateSystemApp;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)close;
-(BOOL)_dbQueue_truncateDamagedDatabase;
-(id)_dbQueue_applicationIdentifiersWithState;
-(BOOL)_dbQueue_loadDatabase;
-(id)_dbQueue_objectsForKeys:(id)arg1 ;
-(void)endBatchedUpdate;
-(id)urlByAppendingString:(id)arg1 toURL:(id)arg2 ;
-(void)beginBatchedUpdate;
-(id)keysForApplication:(id)arg1 ;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryDelegate>)arg1 ;
-(long long)_dbQueue_databaseVersion;
-(BOOL)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2 ;
-(BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(/*^block*/id)arg3 error:(out id*)arg4 ;
-(void)_dbQueue_createTables;
-(BOOL)_preserveFileAtURL:(id)arg1 ;
-(id)initWithStorePath:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(/*^block*/id)arg3 ;
-(void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(void)_dbQueue_notifyDelegateOfLateLoad;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(void)_dbQueue_performWithSavepoint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_dbQueue_keysForApplication:(id)arg1 ;
-(void)_dbQueue_load;
-(void)flushSynchronously;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)dealloc;
-(id)applicationIdentifiersWithState;
@end

