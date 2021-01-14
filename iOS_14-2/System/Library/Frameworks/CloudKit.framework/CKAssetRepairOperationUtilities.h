/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@interface CKAssetRepairOperationUtilities : NSObject
+(BOOL)errorIsRetriableInNearFuture:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 ;
+(void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1 ;
@end

