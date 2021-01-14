/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

@class CKRecordZoneID, CKRecordID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {

	CKRecordZoneID* _zoneID;
	CKRecordID* _recordID;
	NSArray* _desiredKeys;
	NSMutableSet* _records;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSArray * desiredKeys;                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,readonly) NSMutableSet * records;               //@synthesize records=_records - In the implementation block
-(CKRecordZoneID *)zoneID;
-(NSMutableSet *)records;
-(NSArray *)desiredKeys;
-(CKRecordID *)recordID;
-(id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8 ;
@end

