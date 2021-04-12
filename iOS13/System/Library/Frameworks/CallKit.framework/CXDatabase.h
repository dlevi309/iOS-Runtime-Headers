/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(sqlite3Ref)database;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)lastInsertedRowID;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)enableForeignKeysWithError:(id*)arg1 ;
-(BOOL)setBusyTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(int)countOfRecordsModifiedByLastQuery;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(BOOL)arg4 resultRowHandler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(BOOL)vacuumWithError:(id*)arg1 ;
-(id)namesOfColumnsInTableWithName:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)sqlQueryToStatements;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(id)_statementForSQL:(id)arg1 transient:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(void)setSqlQueryToStatements:(NSMutableDictionary *)arg1 ;
@end

