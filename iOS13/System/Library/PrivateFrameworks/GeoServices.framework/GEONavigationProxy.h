/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOServerFormattedStepStringFormatter;
#import <GeoServices/GeoServices-Structs.h>
@class NSXPCConnection, NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, NSData, NSArray, GEONameInfo, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEONavigationGuidanceState;

@interface GEONavigationProxy : NSObject {

	NSXPCConnection* _navdConnection;
	int _navigationStartedToken;
	BOOL _hasNavigationStartedToken;
	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	BOOL _locationUnreliable;
	GEORouteMatch* _routeMatch;
	NSString* _currentRoadName;
	BOOL _guidancePromptsEnabled;
	NSData* _activeRouteDetailsData;
	NSArray* _rideSelections;
	unsigned long long _stepIndex;
	unsigned long long _displayedStepIndex;
	GEONameInfo* _stepNameInfo;
	SCD_Struct_GE32 _positionFromSign;
	SCD_Struct_GE32 _positionFromManeuver;
	SCD_Struct_GE32 _positionFromDestination;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitRouteSummary;
	GEONavigationGuidanceState* _guidanceState;
	NSData* _trafficIncidentAlertDetailsData;
	int _navigationVoiceVolume;
	BOOL _isNavigatingInLowGuidance;
	BOOL _isConnectedToCarplay;
	id<GEOServerFormattedStepStringFormatter> _formatter;

}

@property (nonatomic,retain) id<GEOServerFormattedStepStringFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)dealloc;
-(void)stop;
-(id<GEOServerFormattedStepStringFormatter>)formatter;
-(void)setFormatter:(id<GEOServerFormattedStepStringFormatter>)arg1 ;
-(void)setRoute:(id)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setRouteMatch:(id)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)_closeNavdConnection;
-(void)_clearState;
-(void)setDestinationName:(id)arg1 ;
-(void)_sendRouteSummary;
-(void)_openNavdConnection;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 ;
-(void)setNavigationState:(int)arg1 ;
-(void)_sendGuidanceState;
-(void)_sendCurrentRoadName;
-(void)_sendActiveRouteDetailsData;
-(void)_sendRideSelections;
-(void)_sendStepIndex;
-(void)_sendStepNameInfo;
-(void)_sendPositionFromSign;
-(void)_sendPositionFromManeuver;
-(void)_sendPositionFromDestination;
-(void)_sendTrafficIncidentAlertDetailsData;
-(void)_sendNavigationVoiceVolume;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)_sendTransitSummary;
-(void)startWithDestinationName:(id)arg1 ;
-(void)setLastLocation:(id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setActiveRouteDetailsData:(id)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setStepNameInfo:(id)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg1 ;
-(void)setPositionFromSign:(SCD_Struct_GE32)arg1 ;
-(void)setPositionFromManeuver:(SCD_Struct_GE32)arg1 ;
-(void)setPositionFromDestination:(SCD_Struct_GE32)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)setTrafficIncidentDetailsData:(id)arg1 ;
-(void)setNavigationVoiceVolume:(int)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)triggerHaptics:(int)arg1 ;
@end

