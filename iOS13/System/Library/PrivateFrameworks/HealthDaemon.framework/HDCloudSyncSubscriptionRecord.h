/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class CKRecordID;

@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

@property (nonatomic,copy,readonly) CKRecordID * storeRecordID; 
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDsWithZoneID:(id)arg1 ;
+(BOOL)isSubscriptionRecord:(id)arg1 ;
-(id)description;
-(CKRecordID *)storeRecordID;
-(id)initForStoreRecord:(id)arg1 ;
-(id)initWithCKRecord:(id)arg1 forStoreRecordID:(id)arg2 schemaVersion:(long long)arg3 ;
@end

