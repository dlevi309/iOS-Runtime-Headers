/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REEngineLocationManagerProperties.h>

@class CLLocation, RELocationManager, REObserverStore;

@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties> {

	RELocationManager* _locationManager;
	RELocationManager* _simulatedLocationManager;
	REObserverStore* _observers;
	BOOL _monitoringLocation;
	CLLocation* _currentLocation;
	CLLocation* _location;

}

@property (retain) CLLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CLLocation * currentLocation;                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) BOOL monitoringLocation; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(RELocationManager *)locationManager;
-(id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2 ;
-(void)_beginTraining;
-(void)_endTraining;
-(void)_updateLocationStatus;
-(BOOL)_wantsLocation;
-(id)_currentLocationManager;
-(void)_beginMonitoringLocationForManager:(id)arg1 ;
-(void)_stopMonitoringLocationForManager:(id)arg1 ;
-(void)_handleLocationUpdate:(id)arg1 ;
-(BOOL)monitoringLocation;
@end

