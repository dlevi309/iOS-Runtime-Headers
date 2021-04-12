/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRAuthorizationClientDelegate.h>
#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorReaderDelegate;
@class SRDaemonNotification, SRSensorDatastore, NSDictionary, NSString, SRAuthorizationClient, NSXPCConnection;

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {

	SRDaemonNotification* _daemonNotification;
	SRSensorDatastore* _datastore;
	NSDictionary* _deviceDetails;
	BOOL _connectionDidInterrupt;
	BOOL _connectionDidInvalidate;
	BOOL _bypassHoldingPeriod;
	NSString* _sensor;
	id<SRSensorReaderDelegate> _delegate;
	NSDictionary* _nextDatastoreFiles;
	unsigned long long _authorizationState;
	SRAuthorizationClient* _authorizationClient;
	NSXPCConnection* _connection;
	NSString* _bundleId;
	Class _sampleClass;
	Class _exportingSampleClass;

}

@property (copy) NSString * sensor;                                              //@synthesize sensor=_sensor - In the implementation block
@property (retain,readonly) SRSensorDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                            //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign,nonatomic) unsigned long long authorizationState;              //@synthesize authorizationState=_authorizationState - In the implementation block
@property (assign) BOOL connectionDidInterrupt;                                  //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
@property (assign) BOOL connectionDidInvalidate;                                 //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (retain) SRAuthorizationClient * authorizationClient;                  //@synthesize authorizationClient=_authorizationClient - In the implementation block
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * bundleId;                                            //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) Class sampleClass;                                //@synthesize sampleClass=_sampleClass - In the implementation block
@property (nonatomic,readonly) Class exportingSampleClass;                       //@synthesize exportingSampleClass=_exportingSampleClass - In the implementation block
@property (assign,nonatomic) BOOL bypassHoldingPeriod;                           //@synthesize bypassHoldingPeriod=_bypassHoldingPeriod - In the implementation block
@property (nonatomic,readonly) double earliestEligibleTime; 
@property (getter=isAuthorized,readonly) BOOL authorized; 
@property (__weak) id<SRSensorReaderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)new;
+(id)clientInterface;
+(id)remoteInterface;
+(id)connectionToDaemon;
+(void)requestAuthorizationForSensors:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)requestAuthorizationForSensors:(id)arg1 ;
+(void)authorizationRequestStatusForBundle:(id)arg1 sensors:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(/*^block*/id)createExportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<SRSensorReaderDelegate>)delegate;
-(void)setDelegate:(id<SRSensorReaderDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)stopRecording;
-(BOOL)isAuthorized;
-(void)setupConnection;
-(void)startRecording;
-(void)fetch:(id)arg1 ;
-(SRSensorDatastore *)datastore;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(id)initWithSensor:(id)arg1 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(void)setSensor:(NSString *)arg1 ;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInterrupt;
-(BOOL)connectionDidInvalidate;
-(NSString *)sensor;
-(NSDictionary *)nextDatastoreFiles;
-(void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)authorizedServices;
-(id)initWithSensor:(id)arg1 bundle:(id)arg2 ;
-(id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authorizationClient:(id)arg4 bundleId:(id)arg5 ;
-(SRAuthorizationClient *)authorizationClient;
-(void)setAuthorizationClient:(SRAuthorizationClient *)arg1 ;
-(void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 synchronously:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)bypassHoldingPeriod;
-(void)setSampleClass:(Class)arg1 ;
-(void)setExportingSampleClass:(Class)arg1 ;
-(void)fetchDevicesDidFailWithError:(id)arg1 ;
-(void)didFetchDevices:(id)arg1 ;
-(void)fetchDevices:(/*^block*/id)arg1 ;
-(void)registerWithDaemonIfNeededForReadingWithReply:(/*^block*/id)arg1 ;
-(void)didCompleteFetch:(id)arg1 ;
-(void)fetchingRequest:(id)arg1 failedWithError:(id)arg2 ;
-(void)continueFetch:(id)arg1 ;
-(void)startReadingForDevice:(id)arg1 reply:(/*^block*/id)arg2 ;
-(Class)sampleClass;
-(BOOL)fetchingRequest:(id)arg1 didFetchResult:(id)arg2 ;
-(void)fetchSampleBytes:(id)arg1 sampleCallback:(/*^block*/id)arg2 ;
-(void)continueFetchRequest:(id)arg1 from:(double)arg2 to:(double)arg3 withDatastoreFiles:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)registerWithDaemonIfNeededForFetchRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 sampleCallback:(/*^block*/id)arg5 ;
-(void)startRecordingFailedWithError:(id)arg1 ;
-(void)sensorReaderWillStartRecording;
-(void)startRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingFailedWithError:(id)arg1 ;
-(void)sensorReaderDidStopRecording;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)authorizationState;
-(void)setAuthorizationState:(unsigned long long)arg1 ;
-(double)earliestEligibleTime;
-(void)fetchDevices;
-(Class)exportingSampleClass;
-(void)setBypassHoldingPeriod:(BOOL)arg1 ;
@end

