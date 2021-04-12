/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDCloudSyncServerInterface.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_enableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1 ;
@end

