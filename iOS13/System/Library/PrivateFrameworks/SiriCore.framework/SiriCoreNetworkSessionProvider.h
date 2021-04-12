/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <SiriCore/SiriCoreConnectionProvider.h>

@protocol SiriCoreConnectionProviderDelegate, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;
@class NSURL, SAConnectionPolicyRoute, SAConnectionPolicy, SiriCoreConnectionType, NSString, NSURLSession, NSOperationQueue, NSURLSessionStreamTask, NSObject, NSInputStream, NSOutputStream;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider> {

	id<SiriCoreConnectionProviderDelegate> _delegate;
	NSURL* _url;
	SAConnectionPolicyRoute* _route;
	SAConnectionPolicy* _policy;
	BOOL _prefersWWAN;
	BOOL _connectByPOPEnabled;
	BOOL _enforceEV;
	BOOL _isMPTCP;
	SiriCoreConnectionType* _connectionType;
	int _interfaceIndex;
	NSString* _interfaceName;
	BOOL _isCanceled;
	BOOL _isEstablishing;
	BOOL _isReady;
	NSURLSession* _urlSession;
	NSOperationQueue* _opQueue;
	NSURLSessionStreamTask* _streamTask;
	/*^block*/id _completion_block;
	NSString* _resolvedHost;
	NSString* _connectionId;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _readBuffer[10240];
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_group> _readGroup;
	BOOL _waitingOnReadGroup;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_source> _openTimer;
	NSObject*<OS_dispatch_source> _staleConnectionTimer;
	unsigned long long _readWriteCounter;
	double _staleConnectionInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getMetricsContext:(/*^block*/id)arg1 ;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isReady;
-(id)connectionType;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2 ;
-(BOOL)isMultipath;
-(BOOL)isCanceled;
-(void)readData:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_closeWithError:(id)arg1 ;
-(void)_invokeOpenCompletionWithError:(id)arg1 ;
-(void)_streamDidBecomeUnviable;
-(void)_cancelOpenTimer;
-(void)_setupStaleConnectionTimer;
-(void)_setupOpenTimer;
-(void)_cancelStaleConnectionTimer;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasActiveConnection;
-(id)headerDataWithForceReconnect:(BOOL)arg1 ;
-(BOOL)shouldFallbackQuickly;
-(id)analysisInfo;
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
@end

