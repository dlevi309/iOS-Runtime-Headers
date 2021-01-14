/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICSQLiteConnection, NSString;

@interface ICPlayActivityTable : NSObject {

	ICSQLiteConnection* _databaseConnection;
	NSString* _databasePath;

}

@property (assign,nonatomic) unsigned long long currentEventsRevision; 
@property (nonatomic,copy,readonly) NSString * eventsRevisionVersionToken; 
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)_defaultDatabasePath;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_removeDatabaseReturningError:(id*)arg1 ;
-(id)_valueForDatabasePropertyKey:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2 ;
-(id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(/*^block*/id)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(BOOL)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id*)arg9 ;
-(void)_migrateDatabaseFiles;
-(NSString *)eventsRevisionVersionToken;
-(unsigned long long)currentEventsRevision;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id*)arg7 ;
-(void)setCurrentEventsRevision:(unsigned long long)arg1 ;
-(BOOL)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id*)arg3 ;
-(BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id*)arg2 ;
-(id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(id)revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id*)arg8 ;
-(id)initWithDatabasePath:(id)arg1 ;
@end

