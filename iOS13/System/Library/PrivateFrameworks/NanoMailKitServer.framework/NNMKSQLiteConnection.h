/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol OS_dispatch_queue;
#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSObject, NSMutableDictionary;

@interface NNMKSQLiteConnection : NSObject {

	BOOL _isInTransaction;
	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSMutableDictionary* _cachedPreparedStatementsBySQLPattern;

}

@property (assign,nonatomic) sqlite3Ref db;                                                           //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;                                    //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) BOOL isInTransaction;                                                    //@synthesize isInTransaction=_isInTransaction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreparedStatementsBySQLPattern;              //@synthesize cachedPreparedStatementsBySQLPattern=_cachedPreparedStatementsBySQLPattern - In the implementation block
+(BOOL)errorCodeMeansCorruptedDatabase:(int)arg1 ;
-(void)dealloc;
-(BOOL)beginTransaction;
-(int)executeSQL:(id)arg1 ;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(BOOL)commitTransaction;
-(id)lastErrorMessage;
-(BOOL)rollbackTransaction;
-(void)_closeDatabase;
-(BOOL)isInTransaction;
-(int)lastErrorCode;
-(int)_lastErrorCode;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)tableExists:(id)arg1 inDatabase:(id)arg2 ;
-(int)_executeSQL:(id)arg1 ;
-(id)initWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int*)arg3 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(int)stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_openDatabaseWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int*)arg3 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(sqlite3_stmtRef)_preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(int)_stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(id)_lastErrorMessage;
-(int)_runRetryingIfNeeded:(/*^block*/id)arg1 ;
-(void)setIsInTransaction:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedPreparedStatementsBySQLPattern;
-(void)setCachedPreparedStatementsBySQLPattern:(NSMutableDictionary *)arg1 ;
@end

