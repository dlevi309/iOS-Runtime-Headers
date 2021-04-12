/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)activityCreate;
-(id)flowControlKey;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(/*^block*/id)arg4 ;
-(id)CKStatusReportProperties;
-(void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 ;
@end

