/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOHandler;

@interface RoamPolicyStore : NSObject {

	BOOL _enabled;
	AnalyticsStoreMOHandler* _roamPolicyMOHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * roamPolicyMOHandler;              //@synthesize roamPolicyMOHandler=_roamPolicyMOHandler - In the implementation block
@property (assign) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)deriveBadRoams:(id)arg1 ;
-(void)updateCoreDataWithNewChannelInfo:(long long)arg1 bssid:(id)arg2 ssid:(id)arg3 ;
-(void)deriveNeighborChannelsFromRoamTargetsChannels:(id)arg1 bssid:(id)arg2 ssid:(id)arg3 ;
-(id)collectRoamCandidates:(id)arg1 roamSamplesToCollect:(unsigned long long)arg2 ;
-(void)setRoamPolicyMOHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(BOOL)isWorkEnvironment:(id)arg1 ;
-(void)checkForFrequentRoams:(unsigned long long)arg1 date:(id)arg2 motionState:(long long)arg3 ;
-(BOOL)buildRoamPoliciesForNetwork:(id)arg1 bssid:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)locateTheNeighbor:(unsigned long long)arg1 cacheRssi:(long long)arg2 ;
-(BOOL)checkForNewBSSAddition:(id)arg1 bssid:(id)arg2 ;
-(void)listOutReassocRoams:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(AnalyticsStoreMOHandler *)roamPolicyMOHandler;
-(void)setDeploymentFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)listOutMostUsedRoamReasons:(unsigned long long)arg1 roamReason:(unsigned long long)arg2 ;
-(void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)listOutLinkLossSuppressionRoams:(unsigned long long)arg1 ;
-(void)resetAdaptiveRoamingStateMachine:(id)arg1 bssid:(id)arg2 ;
-(BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)arg1 ;
-(void)listOutBTMRoams:(unsigned long long)arg1 ;
-(void)listOutLazyRoamScanInfo:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(void)listOutMostUsedSourceRssi:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3 ;
-(id)initWithAnalyticsStore:(id)arg1 ;
-(id)deriveRoamInfo:(id)arg1 ssid:(id)arg2 numRoamSamplesCollectedSoFar:(unsigned long long)arg3 ;
-(void)storeNeighborsInfoLearningsFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)predictPath:(id)arg1 ;
-(BOOL)inRange:(long long)arg1 high:(long long)arg2 value:(long long)arg3 ;
-(void)findDeploymentType:(unsigned long long)arg1 ;
-(void)listOutTimeSpentOnBss:(unsigned long long)arg1 timeSpentOnBss:(unsigned long long)arg2 motionState:(long long)arg3 ;
-(void)setDeploymentFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2 ;
-(void)deriveRoamTriggerInfoFromRoamObjects:(id)arg1 numRoamSamplesCollectedSoFar:(unsigned long long)arg2 bssid:(id)arg3 ssid:(id)arg4 ;
-(BOOL)monitorDeploymentChanges:(id)arg1 ssid:(id)arg2 roamStatus:(unsigned long long)arg3 originBssid:(id)arg4 targetBssid:(id)arg5 ;
-(BOOL)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)arg1 ;
-(BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)arg1 ;
-(BOOL)isNetworkQualifiedForAdaptiveRoaming:(id)arg1 ;
-(BOOL)buildRoamCacheInfoForNetwork:(id)arg1 bssid:(id)arg2 ;
-(BOOL)isHomeEnvironment:(id)arg1 ;
@end

