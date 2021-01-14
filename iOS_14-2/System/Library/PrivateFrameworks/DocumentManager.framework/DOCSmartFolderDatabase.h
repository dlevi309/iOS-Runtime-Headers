/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSURL, PQLConnection, NSObject, BKSProcessAssertion;

@interface DOCSmartFolderDatabase : NSObject {

	NSURL* _url;
	PQLConnection* _connection;
	NSObject*<OS_dispatch_source> _watcher;
	BKSProcessAssertion* _processAssertion;
	NSObject*<OS_dispatch_queue> _workingQueue;

}

@property (nonatomic,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) PQLConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> watcher;                  //@synthesize watcher=_watcher - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;                 //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workingQueue;              //@synthesize workingQueue=_workingQueue - In the implementation block
-(void)open;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(void)registerEvent:(id)arg1 ;
-(NSURL *)url;
-(PQLConnection *)connection;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(void)setWorkingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)watcher;
-(BKSProcessAssertion *)processAssertion;
-(void)_closeDatabaseOnItsQueue:(id)arg1 ;
-(void)_cleanUpAfterClose;
-(void)_resetDatabaseOnItsQueue:(id)arg1 ;
-(void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3 ;
-(id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id*)arg2 ;
-(id)_existingFileNameHitsSimilarToHit:(id)arg1 ;
-(void)_registerHit:(id)arg1 ;
-(id)_existingFiletypeHitSimilarToHit:(id)arg1 ;
-(void)_registerSavingFile:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5 ;
-(void)_registerSavingFileType:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5 ;
-(id)_existingEventSimilarToEvent:(id)arg1 ;
-(id)_openConnectionToDatabaseAtURL:(id)arg1 ;
-(void)_setUpDatabaseWatcher:(id)arg1 ;
-(void)registerFilenameHit:(id)arg1 fileTypeHit:(id)arg2 smartScoreBlock:(/*^block*/id)arg3 ;
-(id)previousHits;
-(id)previousEventsForAppBundleIdentifier:(id)arg1 excluding:(id)arg2 ;
-(void)deleteFolderWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(void)setWatcher:(NSObject*<OS_dispatch_source>)arg1 ;
@end

