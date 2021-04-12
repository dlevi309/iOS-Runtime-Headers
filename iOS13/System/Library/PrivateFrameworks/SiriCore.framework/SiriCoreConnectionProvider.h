/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol SiriCoreConnectionProvider <NSObject>
@required
+(void)getMetricsContext:(/*^block*/id)arg1;
-(void)close;
-(void)setDelegate:(id)arg1;
-(id)initWithQueue:(id)arg1;
-(BOOL)isReady;
-(id)connectionType;
-(BOOL)isMultipath;
-(BOOL)isCanceled;
-(void)readData:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)hasActiveConnection;
-(id)headerDataWithForceReconnect:(BOOL)arg1;
-(BOOL)shouldFallbackQuickly;
-(id)analysisInfo;
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

