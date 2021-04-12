/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord {

	NSSet* _disabledOwnerIdentifiers;

}

@property (nonatomic,retain) NSSet * disabledOwnerIdentifiers;              //@synthesize disabledOwnerIdentifiers=_disabledOwnerIdentifiers - In the implementation block
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 ;
+(BOOL)isMasterRecord:(id)arg1 ;
+(BOOL)isMasterRecordID:(id)arg1 ;
-(id)description;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(NSSet *)disabledOwnerIdentifiers;
-(void)setDisabledOwnerIdentifiers:(NSSet *)arg1 ;
-(id)initInZone:(id)arg1 disabledOwnerIdentifiers:(id)arg2 ;
-(id)initWithCKRecord:(id)arg1 disabledOwnerIdentifiers:(id)arg2 schemaVersion:(long long)arg3 ;
-(id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2 ;
@end

