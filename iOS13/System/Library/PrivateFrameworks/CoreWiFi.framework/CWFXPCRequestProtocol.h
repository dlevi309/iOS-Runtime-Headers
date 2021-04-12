/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol CWFXPCRequestProtocol
@required
-(void)startMonitoringEvent:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEventIDsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySystemEventIDsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceNamesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceNamesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingNetworkProfile:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryKnownNetworkProfileMatchingScanResult:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)addKnownNetworkProfile:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 XPCParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 XPCParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)cancelRequestWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryThermalIndexWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setThermalIndex:(long long)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)beginActivity:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endActivityWithUUID:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endAllActivitiesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryActivitiesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySystemActivitiesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDeviceUUIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setPower:(BOOL)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performScanWithParameters:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performANQPWithParameters:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)associateWithParameters:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)disassociateWithReason:(long long)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryRSSIWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNoiseWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxRateWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxPowerWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDTIMIntervalWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryInterfaceCapabilitiesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNumberOfSpatialStreamsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMCSIndexWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAuthTypeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySecurityWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWEPSubtypeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWAPISubtypeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedChannelsWithCountryCode:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryChannelWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySupportedPHYModesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPHYModeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryGuardIntervalWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCountryCodeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDHashWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDHashWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryOpModeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryParentInterfaceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryVirtualInterfaceRoleWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentScanResultWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCurrentKnownNetworkProfileWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMACAddressWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIO80211ControllerInfoWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIO80211InterfaceInfoWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRoamStatusWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryJoinStatusWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAutoJoinStatusWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryLinkDownStatusWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWoWEnabledWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4AddressesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4RouterWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4InterfaceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkServiceIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIsNetworkServiceEnabledWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4ServiceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv4ServiceIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6AddressesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6RouterWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6InterfaceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6ServiceNameWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryIPv6ServiceIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDNSServerAddressesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryNetworkReachabilityWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseStartTimeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryDHCPLeaseExpirationTimeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XSupplicantStateWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlModeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XControlStateWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryEAP8021XClientStatusWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopAWDLPeerAssistedDiscoveryWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setAWDLPeerTrafficRegistration:(id)arg1 XPCParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)querySystemAWDLPeerTrafficRegistrationsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPreferredChannelsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncEnabledWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncStateWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncChannelSequenceWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLStrategyWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionParametersWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLPeerDatabaseWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSocialTimeSlotsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionIDWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLElectionRSSIThresholdsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLMasterChannelWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSecondaryMasterChannelWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLOpModeWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSyncParametersWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLStatisticsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryAWDLSidecarDiagnosticsWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRangingCapabilitiesWithXPCParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setRangeable:(BOOL)arg1 peerList:(id)arg2 XPCParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 XPCParams:(id)arg3 reply:(/*^block*/id)arg4;

@end

