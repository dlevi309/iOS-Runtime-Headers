/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUDatabase : NSObject {

	sqlite3Ref _db;
	BOOL _readonly;
	sqlite3_stmtRef _beginTransactionStatement;
	sqlite3_stmtRef _commitTransactionStatement;
	sqlite3_stmtRef _rollbackTransactionStatement;

}

@property (nonatomic,readonly) sqlite3Ref _sqliteDatabase;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BOOL readonly;                           //@synthesize readonly=_readonly - In the implementation block
-(void)dealloc;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(BOOL)readonly;
-(id)_initWithPath:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)executeUpdateWithSql:(const char*)arg1 error:(id*)arg2 ;
-(BOOL)prepareStatement:(sqlite3_stmt*)arg1 sql:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)executeUpdate:(sqlite3_stmtRef)arg1 shouldFinalize:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_upgradeSchemaWithError:(id*)arg1 ;
-(BOOL)startSingleResultQuery:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)needsUpgradeFromSchemaVersion:(int)arg1 ;
-(BOOL)endSingleResultQuery:(sqlite3_stmtRef)arg1 shouldFinalize:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)initReadonlyWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)compactWithError:(id*)arg1 ;
-(BOOL)setSchemaVersion:(int)arg1 error:(id*)arg2 ;
-(sqlite3Ref)_sqliteDatabase;
@end

