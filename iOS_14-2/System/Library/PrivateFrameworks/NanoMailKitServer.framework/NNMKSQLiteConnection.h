/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol OS_dispatch_queue;
#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface NNMKSQLiteConnection : NSObject {

	BOOL _isInTransaction;
	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSString* _databasePath;
	NSMutableDictionary* _cachedPreparedStatementsBySQLPattern;

}

@property (assign,nonatomic) sqlite3Ref db;                                                           //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;                                    //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) BOOL isInTransaction;                                                    //@synthesize isInTransaction=_isInTransaction - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                                 //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreparedStatementsBySQLPattern;              //@synthesize cachedPreparedStatementsBySQLPattern=_cachedPreparedStatementsBySQLPattern - In the implementation block
+(BOOL)errorCodeMeansCorruptedDatabase:(int)arg1 ;
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(sqlite3Ref)db;
-(BOOL)beginTransaction;
-(int)lastErrorCode;
-(BOOL)rollbackTransaction;
-(int)executeSQL:(id)arg1 ;
-(BOOL)commitTransaction;
-(BOOL)isInTransaction;
-(void)_closeDatabase;
-(int)_executeSQL:(id)arg1 ;
-(void)setDb:(sqlite3Ref)arg1 ;
-(id)lastErrorMessage;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(void)dealloc;
-(int)_lastErrorCode;
-(BOOL)tableExists:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithPath:(id)arg1 errorCode:(int*)arg2 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(int)stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_openDatabaseWithPath:(id)arg1 errorCode:(int*)arg2 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(sqlite3_stmtRef)_preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(int)_stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(id)_lastErrorMessage;
-(int)_runRetryingIfNeeded:(/*^block*/id)arg1 ;
-(void)setIsInTransaction:(BOOL)arg1 ;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)cachedPreparedStatementsBySQLPattern;
-(void)setCachedPreparedStatementsBySQLPattern:(NSMutableDictionary *)arg1 ;
@end

