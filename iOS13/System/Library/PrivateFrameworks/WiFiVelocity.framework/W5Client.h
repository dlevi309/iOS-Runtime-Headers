/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray, NSMutableDictionary;

@interface W5Client : NSObject {

	NSXPCConnection* _conn;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isBrowsing;
	BOOL _isAdvertising;
	double _lastRecoveryTimestamp;
	NSMutableArray* _mutableEventIDs;
	NSMutableArray* _mutableUUIDs;
	NSMutableDictionary* _mutableEventCallbackMap;
	/*^block*/id _eventCallback;

}

@property (nonatomic,copy) id eventCallback;              //@synthesize eventCallback=_eventCallback - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(void)cancelAllRequests;
-(id)peers;
-(void)stopAdvertising;
-(void)stopBrowsing;
-(void)startBrowsing;
-(void)startAdvertising;
-(id)localPeer;
-(void)queryStatusForPeer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)queryDebugConfigurationForPeer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)receivedEvent:(id)arg1 ;
-(void)__startBrowsingAndReply:(/*^block*/id)arg1 ;
-(void)__startMonitoringEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__stopBrowsingAndReply:(/*^block*/id)arg1 ;
-(void)__startAdvertisingAndReply:(/*^block*/id)arg1 ;
-(void)__stopAdvertisingAndReply:(/*^block*/id)arg1 ;
-(void)__stopMonitoringEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__queryPeerCacheAndReply:(/*^block*/id)arg1 ;
-(void)__queryLocalPeerAndReply:(/*^block*/id)arg1 ;
-(id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)__tarballWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3 ;
-(id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4 ;
-(void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4 ;
-(id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(id)__collectJetsamFallbackLogsWithReason:(id)arg1 compress:(BOOL)arg2 ;
-(void)__logsCollectedWithTemporaryURL:(id)arg1 outputURL:(id)arg2 keepParent:(BOOL)arg3 compress:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(id)__collectBusyFallbackLogsWithReason:(id)arg1 compress:(BOOL)arg2 ;
-(id)collectLogs:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(id)collectLogs:(id)arg1 compress:(BOOL)arg2 peer:(id)arg3 update:(/*^block*/id)arg4 diagnostics:(/*^block*/id)arg5 reply:(/*^block*/id)arg6 ;
-(id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(BOOL)arg3 peer:(id)arg4 update:(/*^block*/id)arg5 diagnostics:(/*^block*/id)arg6 reply:(/*^block*/id)arg7 ;
-(id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)runPerformanceTestWithConfiguration:(id)arg1 update:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(id)runPerformanceTest:(id)arg1 update:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__cancelRequestWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__cancelAllRequestsAndReply:(/*^block*/id)arg1 ;
-(void)__log:(id)arg1 timestamp:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setEventCallback:(id)arg1 ;
-(void)startMonitoringEvents:(id)arg1 ;
-(void)stopMonitoringEvents:(id)arg1 ;
-(id)queryStatusForPeer:(id)arg1 error:(out id*)arg2 ;
-(id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2 ;
-(BOOL)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3 ;
-(id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 error:(out id*)arg4 ;
-(id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(/*^block*/id)arg3 error:(out id*)arg4 ;
-(id)collectLogs:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 receipts:(out id*)arg4 error:(out id*)arg5 ;
-(id)collectLogs:(id)arg1 compress:(BOOL)arg2 peer:(id)arg3 update:(/*^block*/id)arg4 diagnostics:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(BOOL)arg3 peer:(id)arg4 update:(/*^block*/id)arg5 diagnostics:(/*^block*/id)arg6 receipts:(id*)arg7 error:(out id*)arg8 ;
-(id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4 ;
-(id)runPerformanceTestWithConfiguration:(id)arg1 update:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(id)runPerformanceTest:(id)arg1 update:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 error:(out id*)arg2 ;
-(void)cancelRequestWithUUID:(id)arg1 ;
-(void)log:(id)arg1 timestamp:(BOOL)arg2 ;
-(id)eventCallback;
@end

