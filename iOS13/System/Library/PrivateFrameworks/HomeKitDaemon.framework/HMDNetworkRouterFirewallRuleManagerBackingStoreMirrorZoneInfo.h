/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class CKRecordZoneID, NSMutableSet, HMDNetworkRouterFirewallRuleCloudZone, HMBLocalZone;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject {

	BOOL _zoneHasChanged;
	BOOL _zoneWasDeleted;
	BOOL _ignoreChangeToken;
	CKRecordZoneID* _zoneID;
	NSMutableSet* _recordIDs;
	HMDNetworkRouterFirewallRuleCloudZone* _cloudZone;
	HMBLocalZone* _mirroredLocalZone;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneID;                                      //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * recordIDs;                                     //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,readonly) BOOL zoneHasChanged;                                          //@synthesize zoneHasChanged=_zoneHasChanged - In the implementation block
@property (nonatomic,readonly) BOOL zoneWasDeleted;                                          //@synthesize zoneWasDeleted=_zoneWasDeleted - In the implementation block
@property (nonatomic,readonly) BOOL ignoreChangeToken;                                       //@synthesize ignoreChangeToken=_ignoreChangeToken - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterFirewallRuleCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMBLocalZone * mirroredLocalZone;                               //@synthesize mirroredLocalZone=_mirroredLocalZone - In the implementation block
-(CKRecordZoneID *)zoneID;
-(id)initWithZoneID:(id)arg1 ;
-(NSMutableSet *)recordIDs;
-(void)forceRefresh;
-(HMDNetworkRouterFirewallRuleCloudZone *)cloudZone;
-(void)setCloudZone:(HMDNetworkRouterFirewallRuleCloudZone *)arg1 ;
-(void)markChanged;
-(HMBLocalZone *)mirroredLocalZone;
-(void)setMirroredLocalZone:(HMBLocalZone *)arg1 ;
-(BOOL)zoneWasDeleted;
-(void)markDeleted;
-(BOOL)zoneHasChanged;
-(BOOL)ignoreChangeToken;
@end

