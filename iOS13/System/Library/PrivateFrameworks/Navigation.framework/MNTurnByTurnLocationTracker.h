/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/MNArrivalUpdaterDelegate.h>

@protocol GEODirectionServiceTicket;
@class GEONavigationMapMatcher, MNArrivalUpdater, NSDate, NSData, NSTimer, MNLocation, NSMutableArray, NSString;

@interface MNTurnByTurnLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {

	GEONavigationMapMatcher* _mapMatcher;
	MNArrivalUpdater* _arrivalUpdater;
	NSDate* _startDate;
	SCD_Struct_MN8 _originCoordinate;
	id<GEODirectionServiceTicket> _rerouteTicket;
	NSData* _serverSessionState;
	unsigned long long _rerouteReason;
	long long _responseErrorCode;
	unsigned long long _responseErrorCount;
	unsigned long long _recalculationNetworkUnreachableCount;
	NSTimer* _recalculationRetryTimer;
	MNLocation* _previousRerouteLocation;
	NSMutableArray* _rerouteDates;
	unsigned long long _consecutiveOffRouteCount;
	MNLocation* _lastKnownGoodLocationOnRoute;
	BOOL _isNavigatingInLowGuidance;

}

@property (nonatomic,copy) NSData * serverSessionState;              //@synthesize serverSessionState=_serverSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stopTracking;
-(void)updateLocation:(id)arg1 ;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)isRerouting;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)traceJumpedInTime;
-(void)forceOnRoute:(id)arg1 atLocation:(id)arg2 ;
-(void)_updateForArrival;
-(NSData *)serverSessionState;
-(void)setServerSessionState:(NSData *)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_alternateRouteForOffRouteLocation:(id)arg1 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(void)arrivalUpdaterDidArrive:(id)arg1 ;
-(void)arrivalUpdaterDidEnterPreArrivalState:(id)arg1 ;
-(void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1 ;
-(void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_allowRerouteForLocation:(id)arg1 outError:(out id*)arg2 ;
-(BOOL)_isRoadFeatureInOppositeDirection:(SCD_Struct_MN5*)arg1 ofCoordinate:(SCD_Struct_MN8)arg2 course:(double)arg3 ;
-(BOOL)_shouldAdvanceGuidanceToRouteMatch:(id)arg1 ;
-(BOOL)_isCameraTestMode;
-(void)_failedToRecalculateRouteWithError:(id)arg1 ;
-(id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 stepIndex:(unsigned long long)arg3 ;
-(id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3 ;
-(void)_submitRerouteTicketWithHandler:(/*^block*/id)arg1 ;
-(void)_handleOffRouteForLocation:(id)arg1 ;
-(void)_retryLastRouteRecalculation;
-(void)_recalculationRetryTimerFired:(id)arg1 ;
-(void)_sendRouteHintForLocation:(id)arg1 ;
-(void)_updateStateForLocation:(id)arg1 ;
-(void)_updateSwitchTransportTypeForLocation:(id)arg1 ;
-(id)initForTestingWithRoute:(id)arg1 ;
@end

