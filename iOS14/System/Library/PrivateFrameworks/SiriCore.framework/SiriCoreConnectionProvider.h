/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol SiriCoreConnectionProvider <NSObject>
@required
+(void)getMetricsContext:(/*^block*/id)arg1;
-(id)initWithQueue:(id)arg1;
-(BOOL)isCanceled;
-(id)connectionType;
-(void)close;
-(void)setDelegate:(id)arg1;
-(BOOL)isReady;
-(void)readData:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isMultipath;
-(id)analysisInfo;
-(BOOL)hasActiveConnection;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(id)headerDataWithForceReconnect:(BOOL)arg1;
-(BOOL)shouldFallbackQuickly;
-(void)updateConnectionMetrics:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isPeerConnectionError:(id)arg1;
-(BOOL)isPeerNotNearbyError:(id)arg1;
-(BOOL)shouldFallbackFromError:(id)arg1;
-(id)resolvedHost;
-(void)setProviderConnectionPolicy:(id)arg1;
-(void)setPolicyRoute:(id)arg1;
-(void)setPrefersWWAN:(BOOL)arg1;
-(void)setConnectByPOPMethod:(BOOL)arg1;
-(void)setEnforceExtendedValidation:(BOOL)arg1;
-(void)setScopeIsWiFiOnly;
-(void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;
-(void)setRetransmitConnectionDropTime:(double)arg1;
-(void)setStaleInterval:(double)arg1;
-(BOOL)providerStatsIndicatePoorLinkQuality;
-(BOOL)isEstablishing;

@end

