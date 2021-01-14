/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSQLiteStatement.h>

@class HDDatabaseTransaction;

@interface HDMetadataValueStatement : HDSQLiteStatement {

	HDDatabaseTransaction* _transaction;

}

@property (nonatomic,readonly) HDDatabaseTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)metadataValueStatementWithTransaction:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(HDDatabaseTransaction *)transaction;
-(BOOL)enumerateResultsForObjectID:(long long)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
@end

