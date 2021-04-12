/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {

	HDSQLiteDatabase* _database;
	NSString* _sql;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)description;
-(void)finish;
-(HDSQLiteDatabase *)database;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
-(BOOL)performStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 ;
-(BOOL)enumerateStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
@end

