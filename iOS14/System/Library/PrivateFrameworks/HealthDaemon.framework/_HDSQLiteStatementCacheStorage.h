/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSArray;

@interface _HDSQLiteStatementCacheStorage : NSObject {

	_HDSQLiteStatementCacheStorage* _parentStorage;
	CFDictionaryRef _statementsBySQL;
	CFDictionaryRef _statementsByKey;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,copy,readonly) NSArray * allStatementSQLStrings; 
-(void)setStatement:(sqlite3_stmtRef)arg1 forKey:(const char*)arg2 ;
-(id)init;
-(long long)count;
-(NSArray *)allStatementSQLStrings;
-(void)setStatement:(sqlite3_stmtRef)arg1 forSQL:(id)arg2 ;
-(void)clearStatements;
-(sqlite3_stmtRef)statementForSQL:(id)arg1 ;
-(sqlite3_stmtRef)statementForKey:(const char*)arg1 ;
-(id)initWithParentStorage:(id)arg1 ;
-(void)dealloc;
@end

