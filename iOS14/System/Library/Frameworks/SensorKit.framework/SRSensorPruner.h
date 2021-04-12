/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRDaemonNotificationDelegate.h>

@protocol SRSensorPrunerDelegate;
@class SRSensorDatastore, SRDaemonNotification, NSString, NSDictionary, SRDevice, NSXPCConnection;

@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate> {

	SRSensorDatastore* _datastore;
	SRDaemonNotification* _daemonNotification;
	BOOL _connectionDidInterrupt;
	BOOL _connectionDidInvalidate;
	id<SRSensorPrunerDelegate> _delegate;
	NSString* _sensor;
	NSDictionary* _nextDatastoreFiles;
	SRDevice* _device;
	NSXPCConnection* _connection;

}

@property (copy) NSString * sensor;                                     //@synthesize sensor=_sensor - In the implementation block
@property (retain,readonly) SRSensorDatastore * datastore; 
@property (retain) NSDictionary * nextDatastoreFiles;                   //@synthesize nextDatastoreFiles=_nextDatastoreFiles - In the implementation block
@property (assign) BOOL connectionDidInterrupt;                         //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
@property (assign) BOOL connectionDidInvalidate;                        //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (retain) SRDevice * device;                                   //@synthesize device=_device - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (__weak) id<SRSensorPrunerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)connectionToDaemon;
+(id)remoteInterface;
+(id)clientInterface;
-(SRSensorDatastore *)datastore;
-(void)setupConnection;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(id<SRSensorPrunerDelegate>)delegate;
-(NSString *)sensor;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInvalidate;
-(SRDevice *)device;
-(void)setDelegate:(id<SRSensorPrunerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)daemonNotificationDaemonDidStart:(id)arg1 ;
-(NSDictionary *)nextDatastoreFiles;
-(BOOL)connectionDidInterrupt;
-(void)setDevice:(SRDevice *)arg1 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setNextDatastoreFiles:(NSDictionary *)arg1 ;
-(void)removeAllSamples;
-(void)dealloc;
-(void)setSensor:(NSString *)arg1 ;
-(void)removeAllSamplesForAllSensors;
-(id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 device:(id)arg4 ;
-(void)continuePruneFrom:(double)arg1 to:(double)arg2 withDatastoreFiles:(id)arg3 ;
-(void)registerWithDaemonIfNeededWithReply:(/*^block*/id)arg1 ;
-(void)removeSamplesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 ;
-(id)initWithSensor:(id)arg1 device:(id)arg2 ;
-(void)removeSamplesFrom:(double)arg1 to:(double)arg2 ;
@end

