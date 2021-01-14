/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordForZoneID:(id)arg1 ;
+(id)recordIDsWithZoneID:(id)arg1 ;
+(BOOL)isSubscriptionRecord:(id)arg1 ;
-(id)description;
-(id)storeRecordID;
@end

