/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCoreConnectionProvider.h>

@protocol OS_dispatch_queue, SiriCoreConnectionProviderDelegate, OS_nw_connection, OS_nw_endpoint, OS_nw_content_context, OS_dispatch_source;
@class NSObject, NSURL, NSString, SAConnectionPolicyRoute, SAConnectionPolicy, SiriCoreConnectionType, NSArray, SiriCoreConnectionMetrics;

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	id<SiriCoreConnectionProviderDelegate> _delegate;
	NSURL* _url;
	NSString* _resolvedHost;
	NSObject*<OS_nw_connection> _connection;
	NSObject*<OS_nw_endpoint> _endpoint;
	NSObject*<OS_nw_content_context> _content_context;
	SAConnectionPolicyRoute* _route;
	SAConnectionPolicy* _policy;
	BOOL _prefersWWAN;
	BOOL _connectByPOPEnabled;
	BOOL _enforceEV;
	BOOL _isMPTCP;
	BOOL _isCanceled;
	BOOL _isEstablishing;
	BOOL _isReady;
	BOOL _usingTLS;
	NSString* _connectionId;
	SiriCoreConnectionType* _connectionType;
	int _interfaceIndex;
	/*^block*/id _openCompletion;
	NSObject*<OS_dispatch_source> _openTimer;
	NSObject*<OS_dispatch_source> _staleConnectionTimer;
	unsigned long long _readWriteCounter;
	NSObject*<OS_dispatch_source> _connectionUnviableTimer;
	unsigned long long _betterPathAvailableNotificationMachTime;
	NSArray* _attemptedEndpoints;
	BOOL _isViable;
	BOOL _scopeToWiFiOnly;
	SiriCoreConnectionMetrics* _metrics;
	double _keepaliveIdleTime;
	double _keepaliveIntervalTime;
	double _retransmissionBasedConnectionDropTime;
	unsigned long long _keepaliveUnackedCount;
	double _staleConnectionInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getMetricsContext:(/*^block*/id)arg1 ;
-(id)_url;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isCanceled;
-(id)connectionType;
-(id)_queue;
-(id)delegate;
-(void)close;
-(id)_connectionId;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isReady;
-(void)readData:(/*^block*/id)arg1 ;
-(void)_closeWithError:(id)arg1 ;
-(void)_configureConnection:(id)arg1 ;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isMultipath;
-(void)dealloc;
-(id)analysisInfo;
-(BOOL)hasActiveConnection;
-(void)_invokeOpenCompletionWithError:(id)arg1 ;
-(void)_cancelOpenTimer;
-(void)_setupStaleConnectionTimer;
-(void)_setupOpenTimer;
-(void)_cancelStaleConnectionTimer;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)headerDataWithForceReconnect:(BOOL)arg1 ;
-(BOOL)shouldFallbackQuickly;
-(void)updateConnectionMetrics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPeerConnectionError:(id)arg1 ;
-(BOOL)isPeerNotNearbyError:(id)arg1 ;
-(BOOL)shouldFallbackFromError:(id)arg1 ;
-(id)resolvedHost;
-(void)setProviderConnectionPolicy:(id)arg1 ;
-(void)setPolicyRoute:(id)arg1 ;
-(void)setPrefersWWAN:(BOOL)arg1 ;
-(void)setConnectByPOPMethod:(BOOL)arg1 ;
-(void)setEnforceExtendedValidation:(BOOL)arg1 ;
-(void)setScopeIsWiFiOnly;
-(void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3 ;
-(void)setRetransmitConnectionDropTime:(double)arg1 ;
-(void)setStaleInterval:(double)arg1 ;
-(BOOL)providerStatsIndicatePoorLinkQuality;
-(BOOL)isEstablishing;
-(void)_cancelConnectionUnviableTimer;
-(id)_setParametersForHost:(const char*)arg1 useTLS:(BOOL)arg2 initialPayload:(id)arg3 ;
-(void)_getNWConnectionWithInitialData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startConnectionUnviableTimer;
-(id)_sendBufferBytesRemaining:(id)arg1 ;
-(id)_getAttemptedEndpoints;
-(BOOL)_connectByPOPMethod;
-(void)_receivedViabilityChangeNotification:(BOOL)arg1 ;
-(void)_receivedBetterRouteNotification:(BOOL)arg1 ;
@end

