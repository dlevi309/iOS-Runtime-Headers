/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol CWFXPCRequestProtocolPublicCoreWLAN
@required
-(void)cancelRequestsWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryRSSIWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryMACAddressWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWAPISubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performScanWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryIsNetworkServiceEnabledWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)startMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryTxPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryTxRateWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPHYModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryWEPSubtypeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryPowerWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)associateWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryInterfaceNameWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryChannelWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setPower:(BOOL)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)querySSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)addKnownNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryCountryCodeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryOpModeWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)queryInterfaceNamesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySecurityWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)disassociateWithReason:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)querySupportedChannelsWithCountryCode:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryNoiseWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;

@end

