/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


#import <CallKit/CallKit-Structs.h>
@interface CXDatabaseStatement : NSObject {

	sqlite3_stmtRef _statement;
	sqlite3Ref _database;

}

@property (assign,nonatomic) sqlite3_stmtRef statement;              //@synthesize statement=_statement - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                    //@synthesize database=_database - In the implementation block
-(sqlite3_stmtRef)statement;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(void)finalize;
-(id)init;
-(BOOL)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id*)arg3 ;
-(BOOL)bind:(id)arg1 error:(id*)arg2 ;
-(id)initWithSQL:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)bindText:(const char*)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id*)arg4 ;
-(BOOL)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(sqlite3Ref)database;
-(BOOL)executeWithError:(id*)arg1 ;
-(BOOL)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

