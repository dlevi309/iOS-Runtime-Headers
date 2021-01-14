/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class SGSqliteDatabaseImpl, SGSqliteDatabaseSharedLock, NSString;

@interface SGSqliteDatabase : NSObject {

	SGSqliteDatabaseImpl* _impl;
	unsigned long long _lastBusyWaitEnded;
	SGSqliteDatabaseSharedLock* _sharedWriterLock;

}

@property (nonatomic,readonly) sqlite3Ref handle; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) BOOL isInMemory; 
+(int)bindParam:(sqlite3_stmtRef)arg1 name:(const char*)arg2 nsdata:(id)arg3 ;
+(int)bindParam:(sqlite3_stmtRef)arg1 name:(const char*)arg2 int:(int)arg3 ;
+(BOOL)isInMemoryPath:(id)arg1 ;
+(id)corruptionMarkerPathForPath:(id)arg1 ;
+(id)corruptionMarkerFilename;
+(id)inMemoryPath;
+(int)bindParam:(sqlite3_stmtRef)arg1 name:(const char*)arg2 int64:(long long)arg3 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2 ;
+(id)randomlyNamedInMemoryPathWithBaseName:(id)arg1 ;
+(id)sqliteDatabaseInMemoryWithError:(id*)arg1 ;
+(void)truncateDatabaseAtPath:(id)arg1 ;
+(int)bindParamToNull:(sqlite3_stmtRef)arg1 name:(const char*)arg2 ;
+(int)bindParam:(sqlite3_stmtRef)arg1 name:(const char*)arg2 nsstring:(id)arg3 ;
+(int)bindParam:(sqlite3_stmtRef)arg1 name:(const char*)arg2 double:(double)arg3 ;
-(void)vacuum;
-(void)clearCaches;
-(BOOL)_prepQuery:(id)arg1 onPrep:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(BOOL)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_NOMEM:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)freeSpace;
-(BOOL)createSnapshot:(id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_VNODE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(sqlite3Ref)handle;
-(BOOL)_handle_SQLITE_IOERR_LOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(/*^block*/id)arg3 ;
-(BOOL)_handle_SQLITE_IOERR_SHMSIZE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_MISMATCH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)simulateOnDiskDatabase;
-(BOOL)_handle_SQLITE_AUTH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_READONLY_RECOVERY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)hasIndexNamed:(id)arg1 ;
-(BOOL)runQuery:(id)arg1 onRow:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(BOOL)_handle_SQLITE_LOCKED:(id)arg1 onError:(/*^block*/id)arg2 ;
-(unsigned long long)pageCount;
-(BOOL)_handle_SQLITE_INTERRUPT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_BLOCKED:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)corruptionMarkerPath;
-(NSString *)filename;
-(unsigned long long)numberOfRowsInTable:(id)arg1 ;
-(BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2 ;
-(BOOL)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_SHMOPEN:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_NOTFOUND:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)frailWriteTransaction:(/*^block*/id)arg1 ;
-(BOOL)_handle_SQLITE_CORRUPT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_READONLY_DBMOVED:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_FSTAT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_READ:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)tablesWithColumnNamed:(id)arg1 ;
-(BOOL)_handle_SQLITE_FORMAT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_WARNING:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_MISUSE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)prepAndRunSQL:(id)arg1 onPrep:(/*^block*/id)arg2 onRow:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)_handle_SQLITE_IOERR_SHMLOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_CONVPATH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_ABORT_ROLLBACK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_INTERNAL:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_RDLOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_UNKNOWN_ERROR:(id)arg1 onError:(/*^block*/id)arg2 ;
-(long long)maxIdForTable:(id)arg1 ;
-(id)description;
-(BOOL)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_DELETE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_WRITE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)isInMemory;
-(BOOL)_handle_SQLITE_FULL:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)hasTableNamed:(id)arg1 ;
-(BOOL)frailReadTransaction:(/*^block*/id)arg1 ;
-(BOOL)_handle_SQLITE_READONLY_CANTLOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_CLOSE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(long long)lastInsertRowId;
-(BOOL)_handle_SQLITE_ERROR:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_UNLOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_sqlite_error_code:(int)arg1 error:(id)arg2 onError:(/*^block*/id)arg3 ;
-(BOOL)_handle_SQLITE_SCHEMA:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_NOLFS:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)optimize:(unsigned long long)arg1 ;
-(BOOL)_handle_SQLITE_NOTADB:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_RANGE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(/*^block*/id)arg4 ;
-(unsigned long long)_pagesToVacuum;
-(BOOL)_handle_SQLITE_CORRUPT_VTAB:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)runWithWriteLockAcquired:(/*^block*/id)arg1 ;
-(BOOL)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_SHORT_READ:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_READONLY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)closePermanently;
-(BOOL)_handle_SQLITE_IOERR_MMAP:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_TOOBIG:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CANTOPEN:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4 ;
-(BOOL)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(unsigned)userVersion;
-(BOOL)_handle_SQLITE_CONSTRAINT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_ABORT:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_TRUNCATE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_SHMMAP:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
-(BOOL)prepAndRunQuery:(id)arg1 onPrep:(/*^block*/id)arg2 onRow:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_ACCESS:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_READONLY_ROLLBACK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)setUserVersion:(unsigned)arg1 ;
-(unsigned long long)freelistCount;
-(BOOL)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_NOMEM:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_AUTH_USER:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_PROTOCOL:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)writeTransaction:(/*^block*/id)arg1 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_PERM:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_BUSY_RECOVERY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)languageForFTSTable:(id)arg1 ;
-(BOOL)_handle_SQLITE_NOTICE:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)readTransaction:(/*^block*/id)arg1 ;
-(void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)_handle_SQLITE_BUSY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_abortDueToSqliteError:(id)arg1 onError:(/*^block*/id)arg2 ;
-(unsigned long long)vacuumMode;
-(void)placeCorruptionMarker;
-(id)initWithFilename:(id)arg1 withProtection:(BOOL)arg2 sharedLock:(id)arg3 error:(id*)arg4 ;
-(BOOL)_handle_SQLITE_IOERR_SEEK:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_FSYNC:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_IOERR_AUTH:(id)arg1 onError:(/*^block*/id)arg2 ;
-(BOOL)_handle_SQLITE_EMPTY:(id)arg1 onError:(/*^block*/id)arg2 ;
-(void)performIntegrityCheck;
-(BOOL)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg1 onError:(/*^block*/id)arg2 ;
@end

