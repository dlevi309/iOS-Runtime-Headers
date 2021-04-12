/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSQLiteDatabaseProvider <NSObject>
@required
-(void)checkInDatabase:(id)arg1 type:(long long)arg2;
-(id)checkOutUnprotectedDatabase:(id)arg1 error:(id*)arg2;
-(id)checkOutProtectedDatabase:(id)arg1 highFrequencyDataStore:(id*)arg2 error:(id*)arg3;

@end

