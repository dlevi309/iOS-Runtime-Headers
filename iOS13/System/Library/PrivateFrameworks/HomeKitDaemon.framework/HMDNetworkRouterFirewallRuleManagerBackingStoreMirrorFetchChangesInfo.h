/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

@class NSDictionary, CKServerChangeToken, NSMutableSet, NSArray;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {

	BOOL _zonesHaveChanged;
	BOOL _zonesWereDeleted;
	NSDictionary* _zoneInfoMap;
	CKServerChangeToken* _databaseChangeToken;
	CKServerChangeToken* _originalDatabaseChangeToken;
	NSMutableSet* _modifiedRecordIDs;
	NSArray* _signatureVerificationPublicKeys;

}

@property (nonatomic,readonly) NSDictionary * zoneInfoMap;                                   //@synthesize zoneInfoMap=_zoneInfoMap - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * databaseChangeToken;                      //@synthesize databaseChangeToken=_databaseChangeToken - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * originalDatabaseChangeToken;              //@synthesize originalDatabaseChangeToken=_originalDatabaseChangeToken - In the implementation block
@property (nonatomic,readonly) NSMutableSet * modifiedRecordIDs;                             //@synthesize modifiedRecordIDs=_modifiedRecordIDs - In the implementation block
@property (nonatomic,readonly) BOOL zonesHaveChanged;                                        //@synthesize zonesHaveChanged=_zonesHaveChanged - In the implementation block
@property (nonatomic,readonly) BOOL zonesWereDeleted;                                        //@synthesize zonesWereDeleted=_zonesWereDeleted - In the implementation block
@property (nonatomic,retain) NSArray * signatureVerificationPublicKeys;                      //@synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSArray *)signatureVerificationPublicKeys;
-(void)setSignatureVerificationPublicKeys:(NSArray *)arg1 ;
-(CKServerChangeToken *)originalDatabaseChangeToken;
-(CKServerChangeToken *)databaseChangeToken;
-(NSMutableSet *)modifiedRecordIDs;
-(NSDictionary *)zoneInfoMap;
-(void)__cleanupMirroredZones:(id)arg1 cloudZones:(id)arg2 result:(id)arg3 error:(id)arg4 ;
-(id)initWithActivity:(id)arg1 options:(id)arg2 databaseChangeToken:(id)arg3 promise:(id)arg4 xpcActivity:(id)arg5 database:(id)arg6 useAnonymousRequests:(BOOL)arg7 recordIDs:(id)arg8 lastSynchronizedRecordIDs:(id)arg9 ;
-(void)markZonesChanged;
-(void)markZonesDeleted;
-(void)setDatabaseChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setOriginalDatabaseChangeToken:(CKServerChangeToken *)arg1 ;
-(BOOL)zonesHaveChanged;
-(BOOL)zonesWereDeleted;
@end

