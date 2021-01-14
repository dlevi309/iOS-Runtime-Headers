/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, RTEventAgentHelper, RTTokenBucket, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, NSObject;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {

	NSXPCConnection* _xpcConnection;
	/*^block*/id _visitHandler;
	/*^block*/id _leechedVisitHandler;
	/*^block*/id _leechedLowConfidenceVisitHandler;
	/*^block*/id _vehicleEventsHandler;
	NSString* _restorationIdentifier;
	RTEventAgentHelper* _eventAgentHelper;
	RTTokenBucket* _clientThrottle;
	RTRoutineManagerRegistrantAction* _actionRegistrant;
	RTRoutineManagerRegistrantScenarioTrigger* _scenarioTriggerRegistrant;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy) id visitHandler;                                                                      //@synthesize visitHandler=_visitHandler - In the implementation block
@property (nonatomic,copy) id leechedVisitHandler;                                                               //@synthesize leechedVisitHandler=_leechedVisitHandler - In the implementation block
@property (nonatomic,copy) id leechedLowConfidenceVisitHandler;                                                  //@synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler - In the implementation block
@property (nonatomic,copy) id vehicleEventsHandler;                                                              //@synthesize vehicleEventsHandler=_vehicleEventsHandler - In the implementation block
@property (nonatomic,retain) NSString * restorationIdentifier;                                                   //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (nonatomic,retain) RTEventAgentHelper * eventAgentHelper;                                              //@synthesize eventAgentHelper=_eventAgentHelper - In the implementation block
@property (nonatomic,retain) RTTokenBucket * clientThrottle;                                                     //@synthesize clientThrottle=_clientThrottle - In the implementation block
@property (nonatomic,retain) RTRoutineManagerRegistrantAction * actionRegistrant;                                //@synthesize actionRegistrant=_actionRegistrant - In the implementation block
@property (nonatomic,retain) RTRoutineManagerRegistrantScenarioTrigger * scenarioTriggerRegistrant;              //@synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modeOfTransportationToString:(long long)arg1 ;
+(id)defaultManager;
+(id)routineModeToString:(long long)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)stopMonitoringVehicleEvents;
-(void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)createConnection;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTRoutineManagerRegistrantAction *)actionRegistrant;
-(id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(BOOL)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)startLeechingLowConfidenceVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)clearAllVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchAllLocationsOfInterestForSettingsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)selectorIsWhitelisted:(SEL)arg1 ;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)vehicleEventsHandler;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)handleDaemonStart;
-(RTEventAgentHelper *)eventAgentHelper;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActionRegistrant:(RTRoutineManagerRegistrantAction *)arg1 ;
-(void)setClientThrottle:(RTTokenBucket *)arg1 ;
-(void)clearAllVehicleEvents;
-(void)fetchCloudSyncAuthorizationState:(/*^block*/id)arg1 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setScenarioTriggerRegistrant:(RTRoutineManagerRegistrantScenarioTrigger *)arg1 ;
-(void)startMonitoringVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)clearRoutineWithHandler:(/*^block*/id)arg1 ;
-(void)stopLeechingLowConfidenceVisits;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 ;
-(id)leechedLowConfidenceVisitHandler;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopLeechingVisits;
-(id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)clearAllVehicleEvents:(/*^block*/id)arg1 ;
-(void)setLeechedVisitHandler:(id)arg1 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)enumerateObjectsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setEventAgentHelper:(RTEventAgentHelper *)arg1 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringVisits;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchStoredVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)onLeechedVisit:(id)arg1 withError:(id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)onVehicleEvents:(id)arg1 error:(id)arg2 ;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startLeechingVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setRoutineEnabled:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setVisitHandler:(id)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)leechedVisitHandler;
-(void)fetchMonitoredScenarioTriggerTypesWithHandler:(/*^block*/id)arg1 ;
-(void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2 ;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1 ;
-(RTRoutineManagerRegistrantScenarioTrigger *)scenarioTriggerRegistrant;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithRestorationIdentifier:(id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)setVehicleEventsHandler:(id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 ;
-(RTTokenBucket *)clientThrottle;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)restorationIdentifier;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 ;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)startMonitoringVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchRoutineStateWithHandler:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 ;
-(void)setLeechedLowConfidenceVisitHandler:(id)arg1 ;
-(id)visitHandler;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_createConnection;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 ;
@end

