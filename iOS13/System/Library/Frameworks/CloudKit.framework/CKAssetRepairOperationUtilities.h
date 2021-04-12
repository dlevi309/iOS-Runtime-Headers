/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@interface CKAssetRepairOperationUtilities : NSObject
+(id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1 ;
+(BOOL)errorIsRetriableInNearFuture:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 ;
+(void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg1 ;
@end

