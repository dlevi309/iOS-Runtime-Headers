/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class CKUploadRequestManagerInternals, CKSyncEngine, CKContainer, CKUploadRequestPersistentStore, NSString;

@interface CKUploadRequestManager : NSObject {

	CKUploadRequestManagerInternals* _internals;

}

@property (nonatomic,readonly) CKUploadRequestManagerInternals * internals;                    //@synthesize internals=_internals - In the implementation block
@property (nonatomic,readonly) CKSyncEngine * repairZoneSyncEngine; 
@property (nonatomic,readonly) CKContainer * repairContainer; 
@property (nonatomic,readonly) CKUploadRequestPersistentStore * database; 
@property (copy) id assetRequestCallback; 
@property (copy) id packageRequestCallback; 
@property (copy) NSString * machServiceName; 
@property (nonatomic,readonly) NSString * activityIdentifierForSchedulingRepairs; 
+(double)recurringFetchPeriod;
+(double)tryAgainLaterRetryTime;
+(double)retryableErrorRetryTime;
+(double)cancelledErrorRetryTime;
+(double)retryableErrorMaxRetryCount;
+(id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1 ;
-(void)unregister;
-(void)cancelAllOperations;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(void)setAssetRequestCallback:(id)arg1 ;
-(void)setPackageRequestCallback:(id)arg1 ;
-(void)registerForItemRequests;
-(void)manuallyTriggerUploadRequests;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(BOOL)arg3 ;
-(id)assetRequestCallback;
-(id)packageRequestCallback;
-(CKUploadRequestPersistentStore *)database;
-(CKUploadRequestManagerInternals *)internals;
-(CKSyncEngine *)repairZoneSyncEngine;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ;
-(NSString *)activityIdentifierForSchedulingRepairs;
-(CKContainer *)repairContainer;
-(void)fetchServerChanges:(/*^block*/id)arg1 ;
-(void)scheduleOrInvokeRepairsNow;
-(void)setCallback:(/*^block*/id)arg1 forOverridePoint:(long long)arg2 ;
-(void)dealloc;
@end

