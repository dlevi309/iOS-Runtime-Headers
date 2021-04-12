/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord {

	NSSet* _disabledOwnerIdentifiers;

}

@property (nonatomic,retain) NSSet * disabledOwnerIdentifiers;              //@synthesize disabledOwnerIdentifiers=_disabledOwnerIdentifiers - In the implementation block
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(BOOL)isMasterRecord:(id)arg1 ;
+(BOOL)isMasterRecordID:(id)arg1 ;
-(id)description;
-(id)initWithCKRecord:(id)arg1 disabledOwnerIdentifiers:(id)arg2 schemaVersion:(long long)arg3 ;
-(NSSet *)disabledOwnerIdentifiers;
-(id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2 ;
-(void)setDisabledOwnerIdentifiers:(NSSet *)arg1 ;
@end

