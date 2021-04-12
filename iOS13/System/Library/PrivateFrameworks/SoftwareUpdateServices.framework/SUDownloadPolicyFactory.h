/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@interface SUDownloadPolicyFactory : NSObject
+(int)downloadPolicyTypeForClass:(id)arg1 ;
+(id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 ;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(BOOL)arg3 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 ;
@end

