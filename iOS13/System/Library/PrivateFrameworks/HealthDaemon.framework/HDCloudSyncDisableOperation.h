/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class NSObject, HDCloudSyncOperationConfiguration, HDCloudSyncFetchOperationResult, NSProgress, NSString;

@interface HDCloudSyncDisableOperation : NSObject <NSProgressReporting> {

	NSObject*<OS_dispatch_queue> _queue;
	HDCloudSyncOperationConfiguration* _configuration;
	HDCloudSyncFetchOperationResult* _fetchResult;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2 ;
-(id)_zonesByContainerIDForZones:(id)arg1 ;
-(void)_updateProgressForPrimaryContainer:(BOOL)arg1 forOperationComponent:(unsigned long long)arg2 ;
-(void)_updateMasterZoneCreationCompletionForOperationWithError:(id)arg1 masterZoneToSave:(id)arg2 savedRecordZones:(id)arg3 isBestEffortOperation:(BOOL)arg4 container:(id)arg5 isOperationSuccessful:(BOOL*)arg6 completion:(/*^block*/id)arg7 ;
-(void)_updateMasterRecordCreationCompletionForOperationWithError:(id)arg1 masterRecordToSave:(id)arg2 savedRecords:(id)arg3 isBestEffortOperation:(BOOL)arg4 container:(id)arg5 isOperationSuccessful:(BOOL*)arg6 completion:(/*^block*/id)arg7 ;
@end

