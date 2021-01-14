/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class NSXPCConnection;

@interface CLSimulationManager : NSObject {

	double _locationDistance;
	double _locationInterval;
	double _locationSpeed;
	unsigned char _locationRepeatBehavior;
	unsigned char _locationDeliveryBehavior;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) id<CLSimulationXPCServerInterface> daemonProxy; 
@property (assign,nonatomic) unsigned char locationDeliveryBehavior;              //@synthesize locationDeliveryBehavior=_locationDeliveryBehavior - In the implementation block
@property (assign,nonatomic) double locationDistance;                             //@synthesize locationDistance=_locationDistance - In the implementation block
@property (assign,nonatomic) double locationInterval;                             //@synthesize locationInterval=_locationInterval - In the implementation block
@property (assign,nonatomic) double locationSpeed;                                //@synthesize locationSpeed=_locationSpeed - In the implementation block
@property (assign,nonatomic) unsigned char locationRepeatBehavior;                //@synthesize locationRepeatBehavior=_locationRepeatBehavior - In the implementation block
-(void)flush;
-(id)init;
-(id<CLSimulationXPCServerInterface>)daemonProxy;
-(id)scenariosPath;
-(void)loadScenarioFromURL:(id)arg1 ;
-(void)setLocationDeliveryBehavior:(unsigned char)arg1 ;
-(void)setLocationInterval:(double)arg1 ;
-(void)setLocationRepeatBehavior:(unsigned char)arg1 ;
-(void)simulateVisit:(id)arg1 ;
-(void)clearSimulatedLocations;
-(void)startLocationSimulation;
-(id)availableScenarios;
-(void)stopLocationSimulation;
-(void)simulateSignificantLocationChange:(id)arg1 ;
-(void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4 ;
-(id)localizedNameForScenario:(id)arg1 ;
-(void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4 ;
-(void)selectScenario:(id)arg1 ;
-(void)setLocationDistance:(double)arg1 ;
-(void)setLocationSpeed:(double)arg1 ;
-(void)appendSimulatedLocation:(id)arg1 ;
-(void)getFencesForBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(double)locationDistance;
-(void)clearSimulatedCells;
-(void)setSimulatedCell:(id)arg1 ;
-(void)startCellSimulation;
-(void)stopCellSimulation;
-(double)locationInterval;
-(void)setSimulatedCellRegistrationStatus:(BOOL)arg1 ;
-(void)setWifiScanResults:(id)arg1 ;
-(void)startWifiSimulation;
-(double)locationSpeed;
-(void)stopWifiSimulation;
-(void)setSimulatedWifiPower:(BOOL)arg1 ;
-(unsigned char)locationDeliveryBehavior;
-(unsigned char)locationRepeatBehavior;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

