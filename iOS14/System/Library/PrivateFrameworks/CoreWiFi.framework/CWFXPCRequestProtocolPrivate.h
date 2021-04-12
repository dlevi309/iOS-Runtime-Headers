/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol CWFXPCRequestProtocolPrivate <CWFXPCRequestProtocolPrivateReadonly>
@required
-(void)endAllActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performScanWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setAWDLPeerTrafficRegistration:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setRangeable:(BOOL)arg1 peerList:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)beginActivity:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)associateWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endActivityWithUUID:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setPower:(BOOL)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setThermalIndex:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)addKnownNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopAWDLPeerAssistedDiscoveryWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)disassociateWithReason:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;

@end

