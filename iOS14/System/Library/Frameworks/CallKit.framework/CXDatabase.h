/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


#import <CallKit/CallKit-Structs.h>
@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject {

	NSURL* _url;
	sqlite3Ref _database;
	NSMutableDictionary* _sqlQueryToStatements;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sqlQueryToStatements;              //@synthesize sqlQueryToStatements=_sqlQueryToStatements - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) int countOfRecordsModifiedByLastQuery; 
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(id)namesOfColumnsInTableWithName:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(long long)lastInsertedRowID;
-(BOOL)enableForeignKeysWithError:(id*)arg1 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(NSURL *)url;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)vacuumWithError:(id*)arg1 ;
-(BOOL)setBusyTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(BOOL)arg4 resultRowHandler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(sqlite3Ref)database;
-(int)countOfRecordsModifiedByLastQuery;
-(id)_statementForSQL:(id)arg1 transient:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(void)setSqlQueryToStatements:(NSMutableDictionary *)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)sqlQueryToStatements;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(void)dealloc;
-(BOOL)closeWithError:(id*)arg1 ;
@end

