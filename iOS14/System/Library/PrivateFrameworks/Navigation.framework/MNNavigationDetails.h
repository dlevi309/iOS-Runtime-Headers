/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNLocation, GEONavigationGuidanceState, MNActiveRouteInfo, NSArray, GEOComposedWaypoint, NSMapTable, NSMutableDictionary, geo_isolater, GEODirectionsRequest, GEODirectionsResponse, NSString, GEOComposedRoute, MNDisplayETAInfo, MNRouteDistanceInfo;

@interface MNNavigationDetails : NSObject <NSSecureCoding> {

	unsigned long long _state;
	int _navigationType;
	int _desiredNavigationType;
	int _desiredTransportType;
	MNLocation* _location;
	unsigned long long _routeIndex;
	BOOL _isDetour;
	GEONavigationGuidanceState* _guidanceState;
	MNActiveRouteInfo* _currentRoute;
	NSArray* _previewRoutes;
	NSArray* _alternateRoutes;
	GEOComposedWaypoint* _originalOrigin;
	GEOComposedWaypoint* _originalDestination;
	NSArray* _possibleCommuteDestinations;
	NSMapTable* _routeIDLookup;
	NSMutableDictionary* _routeLookup;
	NSMutableDictionary* _trafficIncidentAlerts;
	geo_isolater* _routeLookupLock;
	BOOL _guidancePromptsEnabled;
	BOOL _isInPreArrivalState;
	BOOL _traceIsPlaying;
	int _headingOrientation;
	int _navigationState;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	unsigned long long _reconnectionRouteIndex;
	unsigned long long _selectedPreviewRouteIndex;
	double _proceedToRouteDistance;
	NSString* _displayString;
	unsigned long long _closestStepIndex;
	double _distanceUntilSign;
	double _timeUntilSign;
	double _distanceUntilManeuver;
	double _timeUntilManeuver;
	NSString* _currentVoiceLanguage;
	NSString* _tracePath;
	double _traceDuration;
	double _tracePosition;
	NSArray* _traceBookmarks;
	NSMutableDictionary* _trackedCommuteDestinations;

}

@property (nonatomic,retain) NSMutableDictionary * trackedCommuteDestinations;              //@synthesize trackedCommuteDestinations=_trackedCommuteDestinations - In the implementation block
@property (nonatomic,readonly) NSMapTable * routeIDLookup; 
@property (nonatomic,readonly) NSMutableDictionary * routeLookup;                           //@synthesize routeLookup=_routeLookup - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int navigationType;                                            //@synthesize navigationType=_navigationType - In the implementation block
@property (assign,nonatomic) int desiredNavigationType;                                     //@synthesize desiredNavigationType=_desiredNavigationType - In the implementation block
@property (assign,nonatomic) int desiredTransportType;                                      //@synthesize desiredTransportType=_desiredTransportType - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * directionsRequest;                      //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse;                    //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,retain) MNLocation * location;                                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                                   //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isDetour;                                                 //@synthesize isDetour=_isDetour - In the implementation block
@property (assign,nonatomic) int headingOrientation;                                        //@synthesize headingOrientation=_headingOrientation - In the implementation block
@property (assign,nonatomic) int navigationState;                                           //@synthesize navigationState=_navigationState - In the implementation block
@property (nonatomic,retain) GEONavigationGuidanceState * guidanceState;                    //@synthesize guidanceState=_guidanceState - In the implementation block
@property (assign,nonatomic) BOOL isInPreArrivalState;                                      //@synthesize isInPreArrivalState=_isInPreArrivalState - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * currentRoute; 
@property (nonatomic,readonly) unsigned long long routeIndex;                               //@synthesize routeIndex=_routeIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long reconnectionRouteIndex;                   //@synthesize reconnectionRouteIndex=_reconnectionRouteIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedPreviewRouteIndex;                //@synthesize selectedPreviewRouteIndex=_selectedPreviewRouteIndex - In the implementation block
@property (nonatomic,readonly) NSArray * previewRoutes; 
@property (nonatomic,readonly) NSArray * alternateRoutes; 
@property (nonatomic,retain) GEOComposedWaypoint * originalOrigin;                          //@synthesize originalOrigin=_originalOrigin - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * originalDestination;                     //@synthesize originalDestination=_originalDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) unsigned long long segmentIndex; 
@property (assign,nonatomic) double proceedToRouteDistance;                                 //@synthesize proceedToRouteDistance=_proceedToRouteDistance - In the implementation block
@property (nonatomic,retain) NSString * displayString;                                      //@synthesize displayString=_displayString - In the implementation block
@property (assign,nonatomic) unsigned long long closestStepIndex;                           //@synthesize closestStepIndex=_closestStepIndex - In the implementation block
@property (assign,nonatomic) double distanceUntilSign;                                      //@synthesize distanceUntilSign=_distanceUntilSign - In the implementation block
@property (assign,nonatomic) double timeUntilSign;                                          //@synthesize timeUntilSign=_timeUntilSign - In the implementation block
@property (assign,nonatomic) double distanceUntilManeuver;                                  //@synthesize distanceUntilManeuver=_distanceUntilManeuver - In the implementation block
@property (assign,nonatomic) double timeUntilManeuver;                                      //@synthesize timeUntilManeuver=_timeUntilManeuver - In the implementation block
@property (nonatomic,retain) NSString * currentVoiceLanguage;                               //@synthesize currentVoiceLanguage=_currentVoiceLanguage - In the implementation block
@property (nonatomic,readonly) MNDisplayETAInfo * displayETAInfo; 
@property (nonatomic,readonly) MNRouteDistanceInfo * remainingDistanceInfo; 
@property (nonatomic,readonly) NSArray * possibleCommuteDestinations;                       //@synthesize possibleCommuteDestinations=_possibleCommuteDestinations - In the implementation block
@property (nonatomic,copy) NSString * tracePath;                                            //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) BOOL traceIsPlaying;                                           //@synthesize traceIsPlaying=_traceIsPlaying - In the implementation block
@property (assign,nonatomic) double traceDuration;                                          //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) double tracePosition;                                          //@synthesize tracePosition=_tracePosition - In the implementation block
@property (nonatomic,retain) NSArray * traceBookmarks;                                      //@synthesize traceBookmarks=_traceBookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)navigationType;
-(NSMapTable *)routeIDLookup;
-(int)desiredNavigationType;
-(int)navigationState;
-(NSString *)displayString;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setIsInPreArrivalState:(BOOL)arg1 ;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(int)desiredTransportType;
-(void)setTraceDuration:(double)arg1 ;
-(int)headingOrientation;
-(BOOL)isInPreArrivalState;
-(id)init;
-(void)setNavigationType:(int)arg1 ;
-(void)setTimeUntilSign:(double)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(void)setCurrentVoiceLanguage:(NSString *)arg1 ;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(double)traceDuration;
-(MNRouteDistanceInfo *)remainingDistanceInfo;
-(id)removeTrafficIncidentAlert:(id)arg1 ;
-(BOOL)guidancePromptsEnabled;
-(NSArray *)traceBookmarks;
-(void)setTracePosition:(double)arg1 ;
-(id)routeInfoForID:(id)arg1 ;
-(MNLocation *)location;
-(id)routeInfoForRoute:(id)arg1 ;
-(BOOL)traceIsPlaying;
-(double)tracePosition;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(GEODirectionsResponse *)directionsResponse;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateETATrafficForRoute:(id)arg1 ;
-(void)setOriginalOrigin:(GEOComposedWaypoint *)arg1 ;
-(void)setIsDetour:(BOOL)arg1 ;
-(unsigned long long)segmentIndex;
-(id)routeLookupIDs;
-(GEODirectionsRequest *)directionsRequest;
-(GEOComposedWaypoint *)originalDestination;
-(unsigned long long)reconnectionRouteIndex;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setDesiredTransportType:(int)arg1 ;
-(unsigned long long)closestStepIndex;
-(NSMutableDictionary *)trackedCommuteDestinations;
-(void)setLocation:(MNLocation *)arg1 ;
-(GEOComposedRoute *)currentRoute;
-(GEONavigationGuidanceState *)guidanceState;
-(double)timeUntilSign;
-(double)distanceUntilSign;
-(void)setPreviewRoutes:(id)arg1 withSelectedRouteIndex:(unsigned long long)arg2 ;
-(id)description;
-(NSMutableDictionary *)routeLookup;
-(void)_updateRouteIDLookup;
-(void)copySerializableValuesFrom:(id)arg1 ;
-(unsigned long long)stepIndex;
-(void)setGuidanceState:(GEONavigationGuidanceState *)arg1 ;
-(double)timeUntilManeuver;
-(void)setAlternateRoutes:(NSArray *)arg1 ;
-(BOOL)isDetour;
-(void)setProceedToRouteDistance:(double)arg1 ;
-(id)updateWithTrafficIncidentAlert:(id)arg1 ;
-(void)setCurrentRoute:(id)arg1 withAlternateRoutes:(id)arg2 ;
-(double)proceedToRouteDistance;
-(NSString *)currentVoiceLanguage;
-(void)setClosestStepIndex:(unsigned long long)arg1 ;
-(void)setTimeUntilManeuver:(double)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(void)setDesiredNavigationType:(int)arg1 ;
-(NSArray *)possibleCommuteDestinations;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setDistanceUntilSign:(double)arg1 ;
-(NSArray *)alternateRoutes;
-(NSArray *)previewRoutes;
-(unsigned long long)selectedPreviewRouteIndex;
-(void)setTraceBookmarks:(NSArray *)arg1 ;
-(void)setTrackedCommuteDestinations:(NSMutableDictionary *)arg1 ;
-(GEOComposedWaypoint *)originalOrigin;
-(unsigned long long)routeIndex;
-(MNDisplayETAInfo *)displayETAInfo;
-(NSString *)tracePath;
-(void)setOriginalDestination:(GEOComposedWaypoint *)arg1 ;
-(double)distanceUntilManeuver;
-(void)setDistanceUntilManeuver:(double)arg1 ;
-(void)updatePossibleCommuteDestinations:(id)arg1 ;
@end

