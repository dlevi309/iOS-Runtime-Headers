/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncSubscriptionRecord.h>

@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord
+(id)recordType;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordForZoneID:(id)arg1 ;
+(BOOL)isDataUploadRequestRecord:(id)arg1 ;
-(id)serializeUnderlyingMessage;
@end

