/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKAssetRepairSchedulerDelegate
@required
-(void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3;
-(void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3;
-(void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2;
-(void)assetRepairSchedulerAllRequestsComplete:(id)arg1;

@end

