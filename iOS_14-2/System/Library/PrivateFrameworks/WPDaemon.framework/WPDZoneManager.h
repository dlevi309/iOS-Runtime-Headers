/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, CBCentralManager, NSObject, NSNumber, NSDate, NSString;

@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate> {

	BOOL _scanWhiteListed;
	NSMutableDictionary* _trackRequests;
	NSMutableDictionary* _trackedZones;
	CBCentralManager* _centralManager;
	NSObject*<OS_dispatch_source> _exitTimer;
	NSNumber* _zoneExitTimeout;
	NSDate* _lastTimeScannerStarted;

}

@property (nonatomic,retain) NSMutableDictionary * trackRequests;              //@synthesize trackRequests=_trackRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trackedZones;               //@synthesize trackedZones=_trackedZones - In the implementation block
@property (retain) CBCentralManager * centralManager;                          //@synthesize centralManager=_centralManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> exitTimer;                    //@synthesize exitTimer=_exitTimer - In the implementation block
@property (nonatomic,retain) NSNumber * zoneExitTimeout;                       //@synthesize zoneExitTimeout=_zoneExitTimeout - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeScannerStarted;                  //@synthesize lastTimeScannerStarted=_lastTimeScannerStarted - In the implementation block
@property (nonatomic,readonly) BOOL scanWhiteListed;                           //@synthesize scanWhiteListed=_scanWhiteListed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateStateDump;
-(void)setExitTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)getAllZones;
-(void)unregisterAllZones;
-(void)printTrackedZones;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3 ;
-(CBCentralManager *)centralManager;
-(NSMutableDictionary *)trackedZones;
-(void)update;
-(void)cancelExitTimer;
-(void)setLastTimeScannerStarted:(NSDate *)arg1 ;
-(BOOL)updateScanner;
-(NSDate *)lastTimeScannerStarted;
-(id)addZoneTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)cleanup;
-(void)addSingleZoneTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(NSMutableDictionary *)trackRequests;
-(void)unregisterZonesForClient:(id)arg1 ;
-(void)unregisterZones:(id)arg1 forClient:(id)arg2 ;
-(BOOL)scanWhiteListed;
-(NSObject*<OS_dispatch_source>)exitTimer;
-(void)unregisterZonesForClient:(id)arg1 updateScanner:(BOOL)arg2 ;
-(void)startExitTimer;
-(NSNumber *)zoneExitTimeout;
-(void)exitTimerFired;
-(void)setTrackRequests:(NSMutableDictionary *)arg1 ;
-(void)setZoneExitTimeout:(NSNumber *)arg1 ;
-(void)setTrackedZones:(NSMutableDictionary *)arg1 ;
@end

