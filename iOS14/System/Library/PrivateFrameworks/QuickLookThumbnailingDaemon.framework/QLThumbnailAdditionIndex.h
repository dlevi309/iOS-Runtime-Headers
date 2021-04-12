/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <libobjc.A.dylib/QLThumbnailAdditionIndexInterface.h>

@protocol OS_dispatch_source;
@class NSURL, PQLConnection, NSObject;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {

	NSURL* _url;
	PQLConnection* _db;
	NSObject*<OS_dispatch_source> _dbWatcher;

}

@property (readonly) PQLConnection * db;                    //@synthesize db=_db - In the implementation block
@property (copy,readonly) NSURL * databaseURL; 
+(id)sharedInstance;
+(void)registerCleanupXPCActivity;
+(void)setUpCleanupXPCActivitySynchronously:(BOOL)arg1 ;
-(id)initForTesting;
-(PQLConnection *)db;
-(BOOL)open;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id)allEntries;
-(NSURL *)databaseURL;
-(id)databaseConnection;
-(long long)purgeableSpaceOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3 ;
-(long long)purgeOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3 ;
-(void)cancelCacheDeletePurge;
-(void)performDatabaseMaintenance;
-(id)openDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_closeDatabaseOnItsQueue:(id)arg1 ;
-(void)_cleanUpAfterClose;
-(void)_resetDatabaseOnItsQueue:(id)arg1 ;
-(void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3 ;
-(id)makeDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(id)upgradeDatabaseIfNeeded:(id)arg1 error:(id*)arg2 ;
-(void)setUpDatabase:(id)arg1 ;
-(id)whereClauseForURL:(id)arg1 ;
-(BOOL)addThumbnailForURL:(id)arg1 lastHitDate:(id)arg2 size:(unsigned long long)arg3 ;
-(id)entriesEnumerator;
-(int)deviceForHomeDirectory;
-(void)removeEntriesFromDatabase:(id)arg1 ;
-(id)batchOfEntriesStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long*)arg2 ;
-(void)cleanUpBatchOfEntries:(id)arg1 ;
-(BOOL)hasThumbnailForURL:(id)arg1 updateLastHitDate:(BOOL)arg2 andSize:(unsigned long long)arg3 ;
-(BOOL)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 ;
-(BOOL)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 ;
-(BOOL)removeThumbnailForURL:(id)arg1 ;
-(BOOL)addThumbnailForURL:(id)arg1 size:(unsigned long long)arg2 ;
-(void)hasThumbnailForURLWrapper:(id)arg1 updateLastHitDate:(BOOL)arg2 andSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addThumbnailForURLWrapper:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)retrieveAllAdditions:(/*^block*/id)arg1 ;
-(void)removeAllAdditions;
-(void)enumerateCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)volumeRestrictionForMountPoint:(id)arg1 ;
@end

