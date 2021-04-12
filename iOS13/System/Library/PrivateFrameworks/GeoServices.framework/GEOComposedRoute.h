/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@protocol GEOTransitRoutingIncidentMessage, GEOServerFormattedString, GEOComposedRouteTransitDisplayStrings;
@class NSHashTable, NSData, NSArray, NSString, NSUUID, NSDate, GEORoute, GEOMapRegion, NSMutableArray, GEOZilchDecoder, GEOTransitDecoderData, GEOTransitSuggestedRoute, GEORouteDisplayHints, GEOComposedWaypoint, GEOStyleAttributes, GEOArrivalParameters, GEORouteInitializerData, GEORouteAttributes, GEOTransitRouteUpdateRequest, geo_reentrant_isolater;

@interface GEOComposedRoute : NSObject <NSSecureCoding, GEOMapAccessRestrictions> {

	NSHashTable* _observers;
	NSData* _pointData;
	BOOL _usesZilch;
	NSArray* _legs;
	NSArray* _composedGuidanceEvents;
	NSArray* _steps;
	NSString* _name;
	NSData* _serverRouteID;
	NSUUID* _uniqueRouteID;
	unsigned _expectedTime;
	unsigned _distance;
	NSDate* _startDate;
	NSString* _trafficDescription;
	NSString* _longTrafficDescription;
	GEORoute* _geoRoute;
	NSArray* _maneuverDisplaySteps;
	BOOL _maneuverDisplayEnabled;
	unsigned long long _currentDisplayStep;
	double* _pointLengths;
	NSArray* _stops;
	NSArray* _halls;
	NSArray* _stations;
	unsigned long long _selectedLegIndex;
	unsigned _firstVisiblePoint;
	GEOMapRegion* _boundingMapRegion;
	NSMutableArray* _sections;
	NSMutableArray* _snappedPaths;
	GEOZilchDecoder* _zilchDecoder;
	GEOTransitDecoderData* _decoderData;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	NSArray* _routePlanningArtworks;
	id<GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
	NSArray* _rideSelections;
	NSArray* _currentSectionOptions;
	GEORouteDisplayHints* _displayHints;
	id<GEOServerFormattedString> _launchAndGoCardTitle;
	id<GEOServerFormattedString> _launchAndGoRouteTitle;
	id<GEOServerFormattedString> _launchAndGoRouteDescription;
	id<GEOServerFormattedString> _previewDurationFormatString;
	id<GEOServerFormattedString> _pickingDurationFormatString;
	id<GEOServerFormattedString> _planningDescriptionFormatString;
	id<GEOServerFormattedString> _transitDescriptionFormatString;
	NSArray* _transitAdvisories;
	id<GEOServerFormattedString> _transitRouteBadge;
	NSArray* _ticketedSegments;
	BOOL _isWalkingOnlyTransitRoute;
	double _transitUpdateInitialDelay;
	unsigned long long _indexOfSuggestedRoute;
	NSArray* _transitRouteUpdateAlerts;
	id<GEOComposedRouteTransitDisplayStrings> _transitRouteDisplayStrings;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	NSData* _directionsResponseID;
	BOOL _isNavigable;
	GEOStyleAttributes* _styleAttributes;
	GEOArrivalParameters* _arrivalParameters;
	GEORouteInitializerData* _routeInitializerData;
	GEORouteAttributes* _routeAttributes;
	GEOTransitRouteUpdateRequest* _transitRouteUpdateRequest;
	NSUUID* _revisionIdentifier;
	geo_reentrant_isolater* _snappedRoutesIsolater;

}

@property (nonatomic,readonly) id<GEOComposedRouteTransitDisplayStrings> transitRouteDisplayStrings;              //@synthesize transitRouteDisplayStrings=_transitRouteDisplayStrings - In the implementation block
@property (nonatomic,readonly) geo_reentrant_isolater * snappedRoutesIsolater;                                    //@synthesize snappedRoutesIsolater=_snappedRoutesIsolater - In the implementation block
@property (nonatomic,retain) NSData * serverRouteID;                                                              //@synthesize serverRouteID=_serverRouteID - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueRouteID;                                                              //@synthesize uniqueRouteID=_uniqueRouteID - In the implementation block
@property (nonatomic,readonly) GEORouteInitializerData * routeInitializerData; 
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) BOOL usesZilch;                                                                    //@synthesize usesZilch=_usesZilch - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * origin; 
@property (nonatomic,readonly) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) GEOArrivalParameters * arrivalParameters;                                          //@synthesize arrivalParameters=_arrivalParameters - In the implementation block
@property (nonatomic,readonly) BOOL isNavigable;                                                                  //@synthesize isNavigable=_isNavigable - In the implementation block
@property (nonatomic,readonly) NSData * directionsResponseID;                                                     //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) NSArray * steps;                                                                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) NSArray * legs;                                                                    //@synthesize legs=_legs - In the implementation block
@property (nonatomic,readonly) NSArray * composedGuidanceEvents;                                                  //@synthesize composedGuidanceEvents=_composedGuidanceEvents - In the implementation block
@property (nonatomic,readonly) NSArray * stops;                                                                   //@synthesize stops=_stops - In the implementation block
@property (nonatomic,readonly) NSArray * halls;                                                                   //@synthesize halls=_halls - In the implementation block
@property (nonatomic,readonly) NSArray * stations;                                                                //@synthesize stations=_stations - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,readonly) NSArray * routeDescriptions; 
@property (nonatomic,readonly) NSString * trafficDescription;                                                     //@synthesize trafficDescription=_trafficDescription - In the implementation block
@property (nonatomic,readonly) NSString * longTrafficDescription;                                                 //@synthesize longTrafficDescription=_longTrafficDescription - In the implementation block
@property (nonatomic,readonly) void* controlPoints; 
@property (nonatomic,readonly) unsigned long long stepsCount; 
@property (nonatomic,readonly) GEORoute * geoRoute;                                                               //@synthesize geoRoute=_geoRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * arrivalMapRegion; 
@property (nonatomic,readonly) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                                               //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) NSDate * startDate;                                                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) unsigned distance;                                                                 //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL maneuverDisplayEnabled;                                                         //@synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long currentDisplayStep;                                               //@synthesize currentDisplayStep=_currentDisplayStep - In the implementation block
@property (nonatomic,retain) NSArray * maneuverDisplaySteps;                                                      //@synthesize maneuverDisplaySteps=_maneuverDisplaySteps - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLegIndex;                                                 //@synthesize selectedLegIndex=_selectedLegIndex - In the implementation block
@property (assign,nonatomic) unsigned firstVisiblePoint;                                                          //@synthesize firstVisiblePoint=_firstVisiblePoint - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * suggestedRoute;                                           //@synthesize suggestedRoute=_suggestedRoute - In the implementation block
@property (nonatomic,readonly) GEOTransitSuggestedRoute * originalSuggestedRoute;                                 //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfSuggestedRoute;                                          //@synthesize indexOfSuggestedRoute=_indexOfSuggestedRoute - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routePlanningArtworks;                                              //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;                //@synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRideClusters; 
@property (nonatomic,readonly) NSArray * rideSelections;                                                          //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoCardTitle;                                 //@synthesize launchAndGoCardTitle=_launchAndGoCardTitle - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoRouteTitle;                                //@synthesize launchAndGoRouteTitle=_launchAndGoRouteTitle - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoRouteDescription;                          //@synthesize launchAndGoRouteDescription=_launchAndGoRouteDescription - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString;                          //@synthesize previewDurationFormatString=_previewDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString;                          //@synthesize pickingDurationFormatString=_pickingDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString;                      //@synthesize planningDescriptionFormatString=_planningDescriptionFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> transitDescriptionFormatString;                       //@synthesize transitDescriptionFormatString=_transitDescriptionFormatString - In the implementation block
@property (nonatomic,readonly) NSArray * transitAdvisories;                                                       //@synthesize transitAdvisories=_transitAdvisories - In the implementation block
@property (nonatomic,readonly) BOOL isWalkingOnlyTransitRoute;                                                    //@synthesize isWalkingOnlyTransitRoute=_isWalkingOnlyTransitRoute - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> transitRouteBadge;                                    //@synthesize transitRouteBadge=_transitRouteBadge - In the implementation block
@property (assign,nonatomic) double transitUpdateInitialDelay;                                                    //@synthesize transitUpdateInitialDelay=_transitUpdateInitialDelay - In the implementation block
@property (nonatomic,readonly) GEORouteDisplayHints * displayHints;                                               //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSchedule; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes;                                              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) int routeType; 
@property (nonatomic,readonly) NSArray * sections;                                                                //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                                                  //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) double* pointLengths;                                                              //@synthesize pointLengths=_pointLengths - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) GEOTransitRouteUpdateRequest * transitRouteUpdateRequest;                          //@synthesize transitRouteUpdateRequest=_transitRouteUpdateRequest - In the implementation block
@property (nonatomic,retain) NSUUID * revisionIdentifier;                                                         //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * baseTransitFares; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSDate *)startDate;
-(void)removeObserver:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(GEOComposedWaypoint *)origin;
-(unsigned)pointCount;
-(int)transportType;
-(void*)controlPoints;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(unsigned)distance;
-(GEOStyleAttributes *)styleAttributes;
-(NSData *)directionsResponseID;
-(GEOTransitSuggestedRoute *)suggestedRoute;
-(unsigned long long)stepsCount;
-(NSArray *)stops;
-(PolylineCoordinate)closestPointOnRoute:(SCD_Struct_GE32)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEORouteDisplayHints *)displayHints;
-(GEOArrivalParameters *)arrivalParameters;
-(int)routeType;
-(BOOL)isNavigable;
-(void)setIsNavigable:(BOOL)arg1 ;
-(NSArray *)advisoryNotices;
-(NSString *)trafficDescription;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(NSArray *)steps;
-(NSArray *)routeDescriptions;
-(void)setSteps:(NSArray *)arg1 ;
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(BOOL)hasExpectedTime;
-(unsigned)historicTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(NSArray *)legs;
-(void)setLegs:(NSArray *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)_initializeManeuverDisplaySteps;
-(id)initWithRoute:(id)arg1 initializerData:(id)arg2 ;
-(NSArray *)stations;
-(NSArray *)halls;
-(void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2 ;
-(id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2 ;
-(void)updateTransitRouteUpdateRequest:(id)arg1 ;
-(NSArray *)routePlanningArtworks;
-(BOOL)hasRideClusters;
-(id)sectionOptionForTripIndex:(unsigned long long)arg1 ;
-(NSArray *)rideSelections;
-(GEOMapRegion *)boundingMapRegion;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(BOOL)_MapsCarPlay_isArray:(id)arg1 equalTo:(id)arg2 ;
-(BOOL)isWalkingOnlyTransitRoute;
-(GEORoute *)geoRoute;
-(unsigned long long)numberOfTransitStops;
-(void)initializePointLengthsAndAssignStepDistance:(BOOL)arg1 ;
-(SCD_Struct_GE36)pointAt:(unsigned long long)arg1 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2 ;
-(SCD_Struct_GE36)pointAtRouteCoordinate:(PolylineCoordinate)arg1 ;
-(geo_reentrant_isolater *)snappedRoutesIsolater;
-(unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 ;
-(id)legForStepIndex:(unsigned long long)arg1 ;
-(void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned)arg3 ;
-(void)forEachSnappedPath:(/*^block*/id)arg1 ;
-(double)distanceBetweenRoutePointIndex:(unsigned)arg1 toPointIndex:(unsigned)arg2 ;
-(double)distanceBetweenLocation:(SCD_Struct_GE32)arg1 nextPointIndex:(unsigned)arg2 toPointIndex:(unsigned)arg3 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRouteCoordinate:(PolylineCoordinate)arg2 ;
-(PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Matrix<float, 2, 1>*)arg2 aCoord:(const PolylineCoordinate*)arg3 bCoord:(const PolylineCoordinate*)arg4 pointOnSegment:(const Matrix<float, 2, 1>*)arg5 bounds:(const SCD_Struct_GE40*)arg6 ;
-(double)courseAtRouteCoordinateIndex:(unsigned)arg1 ;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(SCD_Struct_GE40*)arg3 rectsCount:(unsigned long long)arg4 ;
-(void)_snapPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addPaths:(id)arg1 forObserver:(id)arg2 ;
-(NSUUID *)uniqueRouteID;
-(void)_enumerateAllStepsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateRevisionIdentifier;
-(id)getHallForStop:(id)arg1 ;
-(id)getStationForHall:(id)arg1 ;
-(id)getStationForStop:(id)arg1 ;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(id<GEOServerFormattedString>)transitDescriptionFormatString;
-(NSArray *)transitAdvisories;
-(id<GEOServerFormattedString>)transitRouteBadge;
-(id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2 ;
-(void)_updateSectionOptions;
-(unsigned long long)_tripIndexForTripLeg:(id)arg1 ;
-(void)_rebuildRouteForRideChange;
-(void)selectRide:(unsigned long long)arg1 forTripLeg:(id)arg2 ;
-(void)initializePointLengths;
-(BOOL)allowsNetworkTileLoad;
-(id)initWithRoute:(id)arg1 origin:(id)arg2 destination:(id)arg3 ;
-(id)initWithRoute:(id)arg1 initializerData:(id)arg2 uniqueRouteID:(id)arg3 ;
-(id)initWithTransitGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3 ;
-(void)updateRouteWithOrigin:(id)arg1 destination:(id)arg2 ;
-(id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2 updateRequest:(id)arg3 ;
-(id)initWithSuggestedRoute:(id)arg1 initializerData:(id)arg2 uniqueRouteID:(id)arg3 ;
-(GEORouteInitializerData *)routeInitializerData;
-(void)setIsWalkingOnlyTransitRoute:(BOOL)arg1 ;
-(void)setUsesZilch:(BOOL)arg1 ;
-(void)setComposedGuidanceEvents:(NSArray *)arg1 ;
-(void)setPointData:(id)arg1 ;
-(id)pointData;
-(void)setBoundingMapRegion:(GEOMapRegion *)arg1 ;
-(NSArray *)baseTransitFares;
-(void)setManeuverDisplaySteps:(NSArray *)arg1 ;
-(void)setCurrentDisplayStep:(unsigned long long)arg1 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 ;
-(PolylineCoordinate)routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(PolylineCoordinate)arg2 ;
-(double)distanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2 ;
-(double)stepDistanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(id)stepForPointIndex:(unsigned)arg1 ;
-(unsigned long long)legIndexForPointIndex:(unsigned long long)arg1 ;
-(unsigned long long)legIndexForStepIndex:(unsigned long long)arg1 ;
-(id)legForPointIndex:(unsigned)arg1 ;
-(void)setSelectedLegIndex:(unsigned long long)arg1 ;
-(BOOL)hasArrivalMapRegion;
-(GEOMapRegion *)arrivalMapRegion;
-(void)maneuverDisplayHasChanged;
-(int)formOfWayAt:(unsigned)arg1 ;
-(double)approximateRoadWidthAtPointIndex:(unsigned)arg1 ;
-(SCD_Struct_GE74*)roadFeatureAtPointIndex:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(id)zilchDataFromStepIndex:(unsigned long long)arg1 ;
-(double)distanceBetweenStep:(id)arg1 andStep:(id)arg2 ;
-(double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(BOOL)checkDrivingArrivalForCoordinate:(SCD_Struct_GE32)arg1 coordinateOnRoute:(SCD_Struct_GE32)arg2 routePointIndex:(unsigned)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 checkRoadAccessPoints:(BOOL)arg8 isOnRoute:(BOOL)arg9 ;
-(SCD_Struct_GE36)locationAtDistance:(double)arg1 from:(id)arg2 ;
-(id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopAtEndOfManeuver:(BOOL)arg4 date:(id)arg5 ;
-(void)roadFeaturesForRouteCoordinate:(PolylineCoordinate)arg1 distanceAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)supportsSnapping;
-(id)getSnappedPathsForVisibleRect:(SCD_Struct_GE40)arg1 rectsToSnap:(SCD_Struct_GE40*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4 ;
-(id)getSnappedPathsForLocation:(SCD_Struct_GE32)arg1 radius:(double)arg2 observer:(id)arg3 ;
-(void)clearPoints;
-(void)clearSnappedPathsForObserver:(id)arg1 ;
-(BOOL)isSnapping;
-(void)applyUpdatesToTransitRoute:(id)arg1 ;
-(BOOL)shouldShowSchedule;
-(BOOL)isStopInTerminalStructure:(id)arg1 ;
-(void)setRevisionIdentifier:(NSUUID *)arg1 ;
-(void)initRideSelections;
-(id)sectionOptionForTripLeg:(id)arg1 ;
-(id)boardStepForSection:(id)arg1 ;
-(void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2 ;
-(void)updateRouteWithRideSelections:(id)arg1 ;
-(id)ticketingSegmentsForSelectedRides;
-(void)setUniqueRouteID:(NSUUID *)arg1 ;
-(unsigned long long)currentDisplayStep;
-(BOOL)maneuverDisplayEnabled;
-(void)setManeuverDisplayEnabled:(BOOL)arg1 ;
-(NSArray *)maneuverDisplaySteps;
-(unsigned)firstVisiblePoint;
-(void)setFirstVisiblePoint:(unsigned)arg1 ;
-(unsigned long long)selectedLegIndex;
-(BOOL)usesZilch;
-(NSArray *)composedGuidanceEvents;
-(NSData *)serverRouteID;
-(void)setServerRouteID:(NSData *)arg1 ;
-(NSString *)longTrafficDescription;
-(double*)pointLengths;
-(void)setSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(id<GEOServerFormattedString>)launchAndGoCardTitle;
-(id<GEOServerFormattedString>)launchAndGoRouteTitle;
-(id<GEOServerFormattedString>)launchAndGoRouteDescription;
-(double)transitUpdateInitialDelay;
-(void)setTransitUpdateInitialDelay:(double)arg1 ;
-(unsigned long long)indexOfSuggestedRoute;
-(GEOTransitRouteUpdateRequest *)transitRouteUpdateRequest;
-(id<GEOComposedRouteTransitDisplayStrings>)transitRouteDisplayStrings;
-(NSUUID *)revisionIdentifier;
-(id)initWithCompanionRoute:(id)arg1 ;
-(void)applyCompanionUpdates:(id)arg1 ;
@end

