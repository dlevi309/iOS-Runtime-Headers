/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSSet, NSMutableSet, NSArray;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone {

	BOOL _useAnonymousRequests;
	NSSet* _modifiedRecordIDsFromLastPull;
	NSMutableSet* _uncommittedModifiedRecordIDsFromLastPull;
	NSSet* _watchedRecordIDs;
	NSArray* _signatureVerificationPublicKeys;

}

@property (nonatomic,readonly) BOOL useAnonymousRequests;                                          //@synthesize useAnonymousRequests=_useAnonymousRequests - In the implementation block
@property (nonatomic,readonly) NSSet * watchedRecordIDs;                                           //@synthesize watchedRecordIDs=_watchedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSArray * signatureVerificationPublicKeys;                          //@synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys - In the implementation block
@property (nonatomic,retain) NSSet * modifiedRecordIDsFromLastPull;                                //@synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull - In the implementation block
@property (nonatomic,retain) NSMutableSet * uncommittedModifiedRecordIDsFromLastPull;              //@synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull - In the implementation block
+(unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
+(unsigned long long)__maxSizeForCKRecordString;
+(unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+(unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
-(id)attributeDescriptions;
-(id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)startUpWithLocalZone:(id)arg1 ;
-(id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2 ;
-(NSArray *)signatureVerificationPublicKeys;
-(id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id*)arg2 ;
-(id)__calculateNetworkDeclarationsDigestFromRecord:(id)arg1 error:(id*)arg2 ;
-(id)__getNetworkDeclarationsSignatureDataFromRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)__verifyNetworkDeclarationsDigestAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 error:(id*)arg4 ;
-(id)__getNetworkDeclarationsDataFromRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)__verifyNetworkDeclarationsFromRecord:(id)arg1 baseAccessoryIdentifier:(id*)arg2 networkDeclarationsData:(id*)arg3 error:(id*)arg4 ;
-(void)__fetchZoneChangesWithFetchInfo:(id)arg1 ;
-(NSSet *)watchedRecordIDs;
-(BOOL)useAnonymousRequests;
-(NSMutableSet *)uncommittedModifiedRecordIDsFromLastPull;
-(NSSet *)modifiedRecordIDsFromLastPull;
-(void)setModifiedRecordIDsFromLastPull:(NSSet *)arg1 ;
-(void)setUncommittedModifiedRecordIDsFromLastPull:(NSMutableSet *)arg1 ;
-(void)__recordChanged:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3 ;
-(void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(BOOL)arg3 fetchInfo:(id)arg4 ;
-(void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__noteUpdatedRecordID:(id)arg1 ;
-(BOOL)__commitLocalChanges:(id)arg1 error:(id*)arg2 ;
-(void)__finalizeUpdatedRecordIDs;
-(BOOL)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__retryFetchWithFetchInfo:(id)arg1 ;
-(id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(BOOL)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5 ;
@end

