/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLLocation *)currentLocation;
-(void)addObserver:(id)arg1 ;
-(RELocationManager *)locationManager;
-(void)pause;
-(CLLocation *)location;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)resume;
-(void)dealloc;
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

