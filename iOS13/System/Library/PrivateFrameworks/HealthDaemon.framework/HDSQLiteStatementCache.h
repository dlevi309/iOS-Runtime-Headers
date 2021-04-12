/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSSet;

@interface HDSQLiteStatementCache : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statementCache;
	CFDictionaryRef _transactionStatementCache;
	CFSetRef _activeStatements;
	CFSetRef _uncachedActiveStatements;
	long long _cacheScope;
	BOOL _inTransaction;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSSet * allStatmentSQLStrings; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)endTransaction;
-(void)clearCachedStatements;
-(id)initWithDatabase:(sqlite3Ref)arg1 ;
-(void)beginTransactionWithCacheScope:(long long)arg1 ;
-(sqlite3_stmtRef)checkOutStatementForSQL:(id)arg1 shouldCache:(BOOL)arg2 error:(id*)arg3 ;
-(void)checkInStatement:(sqlite3_stmtRef)arg1 ;
-(void)_assertNoActiveStatements;
-(sqlite3_stmtRef)_cachedStatementForSQL:(id)arg1 ;
-(void)_setStatement:(sqlite3_stmtRef)arg1 forSQL:(id)arg2 ;
-(void)_clearCachedTransactionStatements;
-(NSSet *)allStatmentSQLStrings;
@end

