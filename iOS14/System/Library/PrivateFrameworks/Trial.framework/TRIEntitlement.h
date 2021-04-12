/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


#import <Trial/Trial-Structs.h>
@interface TRIEntitlement : NSObject
+(id)teamIdWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)stringForEntitlement:(id)arg1 withAuditToken:(SCD_Struct_TR0)arg2 ;
+(id)stringForCurrentProcessEntitlement:(id)arg1 ;
+(BOOL)_isValidFormatForTeamId:(id)arg1 ;
+(id)_teamIdFromSecTaskWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)stringForEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
+(BOOL)isEntitledToApplicationGroup:(id)arg1 withAuditToken:(SCD_Struct_TR0)arg2 ;
+(id)applicationBundleIdentifierWithAuditToken:(SCD_Struct_TR0)arg1 ;
+(id)applicationBundleIdentifierFromSelf;
+(id)codeSignIdentifierWithAuditToken:(SCD_Struct_TR0)arg1 ;
@end

