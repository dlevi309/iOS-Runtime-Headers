/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class CKContainer;

@interface HDCloudSyncResetOperation : HDCloudSyncOperation {

	CKContainer* _container;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3 ;
-(id)_deleteZonesOperation;
-(id)_fetchDatabaseChangesOperationForDeleteOperation:(id)arg1 ;
@end

