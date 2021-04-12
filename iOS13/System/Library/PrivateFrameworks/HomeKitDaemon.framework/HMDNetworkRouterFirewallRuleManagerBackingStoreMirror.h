/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreMirror.h>
@class NAFuture, NSSet;


@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreMirror <NSObject>
@property (nonatomic,readonly) NAFuture * startupFuture; 
@property (nonatomic,readonly) NAFuture * shutdownFuture; 
@property (nonatomic,retain) NSSet * watchedRecordIDs; 
@required
-(NAFuture *)shutdownFuture;
-(NSSet *)watchedRecordIDs;
-(void)setWatchedRecordIDs:(id)arg1;
-(void)fetchCloudChangesWithOptions:(id)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 xpcActivity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(id)fetchNetworkDeclarationDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)fetchAllNetworkDeclarationDataWithOptions:(id)arg1 error:(id*)arg2;
-(id)fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(BOOL)removeAllLocalRulesWithOptions:(id)arg1 error:(id*)arg2;
-(id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)fetchAllOverridesWithOptions:(id)arg1 error:(id*)arg2;
-(id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 options:(id)arg3 error:(id*)arg4;
-(BOOL)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(BOOL)removeAllOverridesWithOptions:(id)arg1 error:(id*)arg2;
-(BOOL)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(NAFuture *)startupFuture;

@end

#import <libobjc.A.dylib/HMBMirrorProtocol.h>

@protocol HMBLocalZoneID, OS_dispatch_queue, NAScheduler;
@class NAFuture, NSSet, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, HMBCloudDatabase, HMBLocalDatabase, NSObject, NAPromise, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol> {

	BOOL _shuttingDown;
	BOOL _useAnonymousRequests;
	id<HMBLocalZoneID> _zoneID;
	HMBLocalZone* _localZone;
	NAFuture* _lastAsyncFuture;
	NSSet* _watchedRecordIDs;
	HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel* _internalState;
	HMBCloudDatabase* _cloudDatabase;
	HMBLocalDatabase* _localDatabase;
	NSObject*<OS_dispatch_queue> _workQueue;
	NAPromise* _startupPromise;
	NAPromise* _shutdownPromise;
	id<NAScheduler> _workQueueScheduler;

}

@property (nonatomic,readonly) HMBCloudDatabase * cloudDatabase;                                                                   //@synthesize cloudDatabase=_cloudDatabase - In the implementation block
@property (nonatomic,readonly) HMBLocalDatabase * localDatabase;                                                                   //@synthesize localDatabase=_localDatabase - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) BOOL useAnonymousRequests;                                                                          //@synthesize useAnonymousRequests=_useAnonymousRequests - In the implementation block
@property (nonatomic,readonly) NAPromise * startupPromise;                                                                         //@synthesize startupPromise=_startupPromise - In the implementation block
@property (nonatomic,readonly) NAPromise * shutdownPromise;                                                                        //@synthesize shutdownPromise=_shutdownPromise - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> workQueueScheduler;                                                                 //@synthesize workQueueScheduler=_workQueueScheduler - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isShuttingDown,nonatomic) BOOL shuttingDown;                                                              //@synthesize shuttingDown=_shuttingDown - In the implementation block
@property (nonatomic,retain) HMBLocalZone * localZone;                                                                             //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,retain) NAFuture * lastAsyncFuture;                                                                           //@synthesize lastAsyncFuture=_lastAsyncFuture - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel * internalState;              //@synthesize internalState=_internalState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NAFuture * startupFuture; 
@property (nonatomic,readonly) NAFuture * shutdownFuture; 
@property (nonatomic,retain) NSSet * watchedRecordIDs;                                                                             //@synthesize watchedRecordIDs=_watchedRecordIDs - In the implementation block
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID;                                                                          //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NAFuture * startUp; 
+(id)logCategory;
+(unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;
+(id)__createSignatureVerificationPolicy;
+(id)__recordKeyCertificatePrefix:(id)arg1 ;
+(id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3 ;
+(id)__certificatesRecordID;
+(id)__publicKeysFromCertificateRecord:(id)arg1 ;
+(BOOL)__errorIsNotFound:(id)arg1 ;
+(id)__overrideParentModelID;
-(BOOL)isRunning;
-(id<HMBLocalZoneID>)zoneID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)destroy;
-(id)flush;
-(id)shutdown;
-(HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *)internalState;
-(void)setInternalState:(HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *)arg1 ;
-(BOOL)isShuttingDown;
-(void)setShuttingDown:(BOOL)arg1 ;
-(HMBLocalZone *)localZone;
-(HMBCloudDatabase *)cloudDatabase;
-(HMBLocalDatabase *)localDatabase;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2 ;
-(NAFuture *)startUp;
-(NAFuture *)shutdownFuture;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(void)startUpWithLocalZone:(id)arg1 ;
-(void)__fetchRecordByID:(id)arg1 ;
-(void)__fetchRecordsByQuery:(id)arg1 ;
-(BOOL)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2 ;
-(void)__startQueryOperation:(id)arg1 operation:(id)arg2 ;
-(void)__fetchCloudRecordsWithFetchInfo:(id)arg1 ;
-(NAPromise *)startupPromise;
-(id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2 ;
-(NAPromise *)shutdownPromise;
-(void)__startupWithLocalZone:(id)arg1 activity:(id)arg2 ;
-(void)__shutdownWithActivity:(id)arg1 ;
-(void)__fetchVerificationCertificatesCompleted:(id)arg1 recordsByRecordID:(id)arg2 error:(id)arg3 ;
-(void)__fetchZoneChangesWithFetchInfo:(id)arg1 ;
-(BOOL)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1 ;
-(void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1 ;
-(id)__createCloudZoneIDForZoneID:(id)arg1 ;
-(id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id*)arg2 ;
-(void)__shutdownLocalZones:(id)arg1 activity:(id)arg2 ;
-(id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id*)arg3 ;
-(id)__fetchNetworkDeclarationDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(BOOL)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id*)arg3 ;
-(BOOL)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(BOOL)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(id)__fetchNetworkDeclarationDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(id)__fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(BOOL)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id*)arg3 ;
-(id)__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(id)__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id*)arg4 ;
-(BOOL)__addOverrides:(id)arg1 replace:(BOOL)arg2 options:(id)arg3 activity:(id)arg4 error:(id*)arg5 ;
-(BOOL)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id*)arg5 ;
-(void)__updateChangeTokenWithFetchInfo:(id)arg1 ;
-(NSSet *)watchedRecordIDs;
-(void)setWatchedRecordIDs:(NSSet *)arg1 ;
-(id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(BOOL)arg3 ownerQueue:(id)arg4 ;
-(void)fetchCloudChangesWithOptions:(id)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 xpcActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)fetchNetworkDeclarationDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)fetchAllNetworkDeclarationDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllLocalRulesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)fetchAllOverridesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllOverridesWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(NAFuture *)startupFuture;
-(void)__removeDeletedZonesWithFetchInfo:(id)arg1 ;
-(id<NAScheduler>)workQueueScheduler;
-(NAFuture *)lastAsyncFuture;
-(void)setLastAsyncFuture:(NAFuture *)arg1 ;
-(id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)useAnonymousRequests;
-(void)__fetchDatabaseChangesWithFetchInfo:(id)arg1 ;
-(void)__saveInternalStateWithActivity:(id)arg1 ;
-(void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_fetchNetworkDeclarationDataForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2 ;
-(BOOL)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1 ;
-(void)__performCloudZonePullsWithFetchInfo:(id)arg1 ;
-(BOOL)__createCloudZonesForFetchInfo:(id)arg1 error:(id*)arg2 ;
-(void)__startUpCloudZonesWithFetchInfo:(id)arg1 ;
@end

