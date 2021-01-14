/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray, NSMutableDictionary;

@interface W5Client : NSObject {

	NSXPCConnection* _conn;
	NSObject*<OS_dispatch_queue> _queue;
	double _lastRecoveryTimestamp;
	NSMutableArray* _mutableEventIDs;
	NSMutableArray* _mutableUUIDs;
	NSMutableDictionary* _mutableEventCallbackMap;
	/*^block*/id _eventCallback;

}

@property (nonatomic,copy) id eventCallback;              //@synthesize eventCallback=_eventCallback - In the implementation block
+(id)sharedClient;
-(id)peers;
-(void)receivedEvent:(id)arg1 ;
-(void)queryDebugConfigurationForPeer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__cancelAllRequestsAndReply:(/*^block*/id)arg1 ;
-(id)init;
-(void)__log:(id)arg1 timestamp:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(id)collectLogs:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 receipts:(out id*)arg4 error:(out id*)arg5 ;
-(id)eventCallback;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cancelAllRequests;
-(void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4 ;
-(id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4 ;
-(id)collectLogs:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(id)__collectJetsamFallbackLogsWithReason:(id)arg1 compress:(BOOL)arg2 ;
-(id)localPeer;
-(void)__cancelRequestWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startMonitoringEvents:(id)arg1 ;
-(void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2 ;
-(id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)log:(id)arg1 timestamp:(BOOL)arg2 ;
-(void)cancelRequestWithUUID:(id)arg1 ;
-(BOOL)__tarballWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3 ;
-(void)stopBrowsing;
-(void)startBrowsing;
-(id)queryStatusForPeer:(id)arg1 error:(out id*)arg2 ;
-(void)setEventCallback:(id)arg1 ;
-(void)stopMonitoringEvents:(id)arg1 ;
-(id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 error:(out id*)arg4 ;
-(void)__startMonitoringEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3 ;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 error:(out id*)arg2 ;
-(void)__stopMonitoringEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(void)__logsCollectedWithTemporaryURL:(id)arg1 outputURL:(id)arg2 keepParent:(BOOL)arg3 compress:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4 ;
-(void)__queryLocalPeerAndReply:(/*^block*/id)arg1 ;
-(void)queryStatusForPeer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)__collectBusyFallbackLogsWithReason:(id)arg1 compress:(BOOL)arg2 ;
-(void)dealloc;
@end

