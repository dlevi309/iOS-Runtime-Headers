/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRAuthorizationStoreDelegate.h>
#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorWriterDelegate;
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
	NSXPCConnection* _connection;

}

@property (copy) NSString * sensorIdentifier;                           //@synthesize sensorIdentifier=_sensorIdentifier - In the implementation block
@property (retain,readonly) SRSensorDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                   //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign) BOOL requestNewSegmentInFlight;                      //@synthesize requestNewSegmentInFlight=_requestNewSegmentInFlight - In the implementation block
@property (assign) BOOL authorized;                                     //@synthesize authorized=_authorized - In the implementation block
@property (assign) BOOL connectionDidInterrupt;                         //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
@property (assign) BOOL connectionDidInvalidate;                        //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL retryGetMonitoring;                             //@synthesize retryGetMonitoring=_retryGetMonitoring - In the implementation block
@property (getter=isMonitoring) BOOL monitoring; 
@property (__weak) id<SRSensorWriterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)connectionToDaemon;
+(id)remoteInterface;
+(id)clientInterface;
-(SRSensorDatastore *)datastore;
-(BOOL)retryGetMonitoring;
-(void)setupConnection;
-(BOOL)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 error:(id*)arg4 ;
-(BOOL)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)sensorIdentifier;
-(id)init;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3 ;
-(id<SRSensorWriterDelegate>)delegate;
-(BOOL)isMonitoring;
-(void)provideSampleData:(id)arg1 ;
-(void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setRetryGetMonitoring:(BOOL)arg1 ;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)authorized;
-(BOOL)provideSample:(id)arg1 error:(id*)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(BOOL)connectionDidInvalidate;
-(void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2 ;
-(void)setSensorIdentifier:(NSString *)arg1 ;
-(void)registerWithDaemonForWritingIfNeededWithReply:(/*^block*/id)arg1 ;
-(void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)setDelegate:(id<SRSensorWriterDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(void)requestNewSegment;
-(NSDictionary *)nextDatastoreFiles;
-(void)checkForMonitoring;
-(void)daemonNotificationDaemonDidResetDatastore:(id)arg1 ;
-(BOOL)provideSample:(id)arg1 timestamp:(double)arg2 error:(id*)arg3 ;
-(void)provideSample:(id)arg1 timestamp:(double)arg2 ;
-(void)evaluateAuthorizationState;
-(BOOL)requestNewSegmentInFlight;
-(void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2 ;
-(void)setRequestNewSegmentInFlight:(BOOL)arg1 ;
-(void)provideSample:(id)arg1 ;
-(BOOL)connectionDidInterrupt;
-(BOOL)provideSampleData:(id)arg1 timestamp:(double)arg2 error:(id*)arg3 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(BOOL)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)daemonForcedResetDatastoreFiles:(id)arg1 ;
-(BOOL)provideSampleData:(id)arg1 error:(id*)arg2 ;
-(void)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2 ;
-(void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(void)setAuthorized:(BOOL)arg1 ;
-(void)flushDatabase;
-(BOOL)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)provideSampleData:(id)arg1 timestamp:(double)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 ;
@end

