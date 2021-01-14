/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKDatabaseControlServer <NSObject>
@required
-(void)remote_getHealthDirectorySizeInBytesWithCompletion:(/*^block*/id)arg1;
-(void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_performMigrationWithCompletion:(/*^block*/id)arg1;

@end

