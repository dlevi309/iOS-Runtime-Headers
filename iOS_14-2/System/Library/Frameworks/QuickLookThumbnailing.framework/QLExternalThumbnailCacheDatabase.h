/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


@class NSURL, PQLConnection;

@interface QLExternalThumbnailCacheDatabase : NSObject {

	NSURL* _databaseURL;
	PQLConnection* _db;

}

@property (nonatomic,readonly) NSURL * databaseURL;              //@synthesize databaseURL=_databaseURL - In the implementation block
@property (nonatomic,readonly) PQLConnection * db;               //@synthesize db=_db - In the implementation block
-(PQLConnection *)db;
-(BOOL)open;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(NSURL *)databaseURL;
-(void)_closeDatabaseOnItsQueue:(id)arg1 ;
-(void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3 ;
-(id)_openDatabaseAtURL:(id)arg1 ;
-(id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id*)arg2 ;
-(id)oldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)whereClauseForItem:(id)arg1 ;
-(unsigned long long)totalThumbnailsSize;
-(unsigned long long)totalThumbnailCount;
-(BOOL)insertOrReplaceThumbnailRepresentingFPItem:(id)arg1 size:(unsigned long long)arg2 modificationDate:(id)arg3 fileExtension:(id)arg4 error:(id*)arg5 ;
-(id)deleteOldestThumbnailsToFreeAtLeastSpace:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deleteOldestThumbnail;
-(id)pathExtensionForItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllThumbnails:(id*)arg1 ;
@end

