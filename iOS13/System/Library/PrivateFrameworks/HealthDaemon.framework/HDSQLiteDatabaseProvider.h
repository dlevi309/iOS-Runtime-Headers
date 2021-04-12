/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSQLiteDatabaseProvider <NSObject>
@required
-(id)databaseTransaction:(id)arg1 checkOutDatabaseWithType:(long long)arg2 error:(id*)arg3;
-(void)checkInDatabase:(id)arg1 type:(long long)arg2;

@end

