/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRAuthorizationStoreDelegate.h>
#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorWriterDelegate, SRAuthorizationStore;
@class SRDaemonNotification, SRDefaults, SRSensorDatastore, NSString, NSDictionary, NSXPCConnection;

@interface SRSensorWriter : NSObject <SRAuthorizationStoreDelegate, SRDaemonNotificationDelegate> {

	BOOL _monitoring;
	id<SRSensorWriterDelegate> _delegate;
	SRDaemonNotification* _daemonNotification;
	SRDefaults* _defaults;
	SRSensorDatastore* _datastore;
	BOOL _requestNewSegmentInFlight;
	BOOL _authorized;
	BOOL _connectionDidInterrupt;
	BOOL _connectionDidInvalidate;
	BOOL _retryGetMonitoring;
	NSString* _sensorIdentifier;
	NSDictionary* _nextDatastoreFiles;
	id<SRAuthorizationStore> _authorizationStore;
	NSDictionary* _sensorInfo;
	NSXPCConnection* _connection;

}

@property (copy) NSString * sensorIdentifier;                                          //@synthesize sensorIdentifier=_sensorIdentifier - In the implementation block
@property (retain,readonly) SRSensorDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                                  //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign) BOOL requestNewSegmentInFlight;                                     //@synthesize requestNewSegmentInFlight=_requestNewSegmentInFlight - In the implementation block
@property (nonatomic,retain) id<SRAuthorizationStore> authorizationStore;              //@synthesize authorizationStore=_authorizationStore - In the implementation block
@property (assign) BOOL authorized;                                                    //@synthesize authorized=_authorized - In the implementation block
@property (assign) BOOL connectionDidInterrupt;                                        //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
@property (assign) BOOL connectionDidInvalidate;                                       //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (nonatomic,retain) NSDictionary * sensorInfo;                                //@synthesize sensorInfo=_sensorInfo - In the implementation block
@property (retain) NSXPCConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL retryGetMonitoring;                                            //@synthesize retryGetMonitoring=_retryGetMonitoring - In the implementation block
@property (getter=isMonitoring) BOOL monitoring; 
@property (__weak) id<SRSensorWriterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)clientInterface;
+(id)remoteInterface;
+(id)connectionToDaemon;
-(id)init;
-(void)dealloc;
-(id<SRSensorWriterDelegate>)delegate;
-(void)setDelegate:(id<SRSensorWriterDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(BOOL)isMonitoring;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setupConnection;
-(BOOL)authorized;
-(SRSensorDatastore *)datastore;
-(NSString *)sensorIdentifier;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1 ;
-(void)setSensorIdentifier:(NSString *)arg1 ;
-(void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2 ;
-(void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInterrupt;
-(BOOL)connectionDidInvalidate;
-(NSDictionary *)nextDatastoreFiles;
-(void)daemonForcedResetDatastoreFiles:(id)arg1 ;
-(void)setSensorInfo:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 authorizationStore:(id)arg2 xpcConnection:(id)arg3 daemonNotification:(id)arg4 ;
-(void)setAuthorizationStore:(id<SRAuthorizationStore>)arg1 ;
-(id<SRAuthorizationStore>)authorizationStore;
-(BOOL)retryGetMonitoring;
-(void)registerWithDaemonForWritingIfNeededWithReply:(/*^block*/id)arg1 ;
-(void)requestNewSegment;
-(void)setRetryGetMonitoring:(BOOL)arg1 ;
-(void)provideSample:(id)arg1 timestamp:(double)arg2 ;
-(void)provideSampleData:(id)arg1 timestamp:(double)arg2 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(BOOL)requestNewSegmentInFlight;
-(void)setRequestNewSegmentInFlight:(BOOL)arg1 ;
-(void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2 ;
-(void)updateSensorInfo;
-(NSDictionary *)sensorInfo;
-(void)evaluateAuthorizationState;
-(void)setAuthorized:(BOOL)arg1 ;
-(void)provideSample:(id)arg1 ;
-(void)provideSampleData:(id)arg1 ;
-(void)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3 ;
-(void)flushDatabase;
@end

