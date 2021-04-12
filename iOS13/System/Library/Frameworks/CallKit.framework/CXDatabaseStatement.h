/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


#import <CallKit/CallKit-Structs.h>
@interface CXDatabaseStatement : NSObject {

	sqlite3_stmtRef _statement;
	sqlite3Ref _database;

}

@property (assign,nonatomic) sqlite3_stmtRef statement;              //@synthesize statement=_statement - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                    //@synthesize database=_database - In the implementation block
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(sqlite3Ref)database;
-(sqlite3_stmtRef)statement;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id*)arg3 ;
-(BOOL)bindText:(const char*)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id*)arg4 ;
-(id)initWithSQL:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)bind:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeWithError:(id*)arg1 ;
-(BOOL)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
@end

