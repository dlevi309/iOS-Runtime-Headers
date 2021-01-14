/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@interface SUDownloadPolicyFactory : NSObject
+(id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2 ;
+(int)downloadPolicyTypeForClass:(id)arg1 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 ;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(BOOL)arg3 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 ;
@end

