/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {

	HDSQLiteDatabase* _database;
	NSString* _sql;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)finish;
-(BOOL)enumerateStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)performStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 ;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
-(id)description;
-(HDSQLiteDatabase *)database;
@end

