/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)flush;
-(id)scenariosPath;
-(void)loadScenarioFromURL:(id)arg1 ;
-(id<CLSimulationXPCServerInterface>)daemonProxy;
-(void)setLocationDeliveryBehavior:(unsigned char)arg1 ;
-(void)setLocationInterval:(double)arg1 ;
-(void)setLocationRepeatBehavior:(unsigned char)arg1 ;
-(void)clearSimulatedLocations;
-(void)startLocationSimulation;
-(void)stopLocationSimulation;
-(void)simulateVisit:(id)arg1 ;
-(void)simulateSignificantLocationChange:(id)arg1 ;
-(void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4 ;
-(void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4 ;
-(id)availableScenarios;
-(id)localizedNameForScenario:(id)arg1 ;
-(void)selectScenario:(id)arg1 ;
-(void)setLocationDistance:(double)arg1 ;
-(void)setLocationSpeed:(double)arg1 ;
-(void)appendSimulatedLocation:(id)arg1 ;
-(void)getFencesForBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearSimulatedCells;
-(void)setSimulatedCell:(id)arg1 ;
-(void)startCellSimulation;
-(void)stopCellSimulation;
-(void)setSimulatedCellRegistrationStatus:(BOOL)arg1 ;
-(void)setWifiScanResults:(id)arg1 ;
-(void)startWifiSimulation;
-(void)stopWifiSimulation;
-(void)setSimulatedWifiPower:(BOOL)arg1 ;
-(unsigned char)locationDeliveryBehavior;
-(double)locationDistance;
-(double)locationInterval;
-(double)locationSpeed;
-(unsigned char)locationRepeatBehavior;
@end

