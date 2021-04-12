/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@interface DMClientAPIController : NSObject {

	unsigned long long _connectionMigrationMaximumAttempts;
	double _connectionMigrationTimeIntervalToLastRetryDate;

}

@property (assign,nonatomic) unsigned long long connectionMigrationMaximumAttempts;              //@synthesize connectionMigrationMaximumAttempts=_connectionMigrationMaximumAttempts - In the implementation block
@property (assign,nonatomic) double connectionMigrationTimeIntervalToLastRetryDate;              //@synthesize connectionMigrationTimeIntervalToLastRetryDate=_connectionMigrationTimeIntervalToLastRetryDate - In the implementation block
-(id)init;
-(BOOL)_migrateWithConnection:(id)arg1 checkNecessity:(BOOL)arg2 lastRelevantPlugin:(id)arg3 testMigrationInfrastructureOnly:(BOOL)arg4 ;
-(void)setConnectionMigrationMaximumAttempts:(unsigned long long)arg1 ;
-(void)setConnectionMigrationTimeIntervalToLastRetryDate:(double)arg1 ;
-(double)connectionMigrationTimeIntervalToLastRetryDate;
-(unsigned long long)connectionMigrationMaximumAttempts;
@end

