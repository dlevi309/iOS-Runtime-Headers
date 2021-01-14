/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class _HDSQLiteStatementCacheStorage, NSSet;

@interface HDSQLiteStatementCache : NSObject {

	sqlite3Ref _db;
	_HDSQLiteStatementCacheStorage* _defaultStatementStorage;
	_HDSQLiteStatementCacheStorage* _transactionStatementStorage;
	CFSetRef _activeStatements;
	CFSetRef _uncachedActiveStatements;
	BOOL _inTransaction;
	long long _faultCount;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long faultCount;                            //@synthesize faultCount=_faultCount - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allStatmentSQLStrings; 
-(void)endTransaction;
-(sqlite3_stmtRef)_cachedStatementForKey:(const char*)arg1 active:(BOOL*)arg2 ;
-(void)beginTransaction;
-(id)init;
-(id)_statementStorage;
-(long long)count;
-(void)checkInStatement:(sqlite3_stmtRef)arg1 ;
-(void)_assertNoActiveStatements;
-(void)_setCachedStatement:(sqlite3_stmtRef)arg1 forSQL:(id)arg2 ;
-(long long)faultCount;
-(sqlite3_stmtRef)_prepareStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_activateStatement:(sqlite3_stmtRef)arg1 cached:(BOOL)arg2 ;
-(void)clearCachedStatements;
-(sqlite3_stmtRef)_cachedStatementForSQL:(id)arg1 active:(BOOL*)arg2 ;
-(id)initWithDatabase:(sqlite3Ref)arg1 ;
-(NSSet *)allStatmentSQLStrings;
-(sqlite3_stmtRef)checkOutCachedStatementForKey:(const char*)arg1 SQLGenerator:(/*^block*/id)arg2 error:(id*)arg3 ;
-(sqlite3_stmtRef)checkOutStatementForSQL:(id)arg1 shouldCache:(BOOL)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)_setCachedStatement:(sqlite3_stmtRef)arg1 forKey:(const char*)arg2 ;
@end

