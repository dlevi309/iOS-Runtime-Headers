/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNLocationTrackerDelegate.h>
#import <libobjc.A.dylib/MNCommuteDestinationScoreObserver.h>

@protocol MNCommuteDestinationUpdaterDelegate;
@class MNCommuteDestination, MNCommuteLocationTracker, MNNavigationTraceManager, MNTimeAndDistanceUpdater, NSDictionary, MNLocation, MNCommuteDestinationGeodesicDistanceScore, MNCommuteDestinationMapsSuggestionsScore, MNCommuteDestinationOffRouteScore, MNCommuteDestinationStartEndTimeScore, NSDate, NSString;

@interface MNCommuteDestinationUpdater : NSObject <MNLocationTrackerDelegate, MNCommuteDestinationScoreObserver> {

	id<MNCommuteDestinationUpdaterDelegate> _delegate;
	MNCommuteDestination* _commuteDestination;
	MNCommuteLocationTracker* _locationTracker;
	unsigned long long _suggestionID;
	MNNavigationTraceManager* _traceManager;
	MNTimeAndDistanceUpdater* _timeAndDistanceUpdater;
	NSDictionary* _scores;
	MNLocation* _lastLocation;

}

@property (nonatomic,readonly) NSDictionary * scores;                                                          //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) MNCommuteDestinationGeodesicDistanceScore * geodesicDistanceScore; 
@property (nonatomic,readonly) MNCommuteDestinationMapsSuggestionsScore * mapsSuggestionsScore; 
@property (nonatomic,readonly) MNCommuteDestinationOffRouteScore * offRouteScore; 
@property (nonatomic,readonly) MNCommuteDestinationStartEndTimeScore * startEndTimeScore; 
@property (nonatomic,retain) MNLocation * lastLocation;                                                        //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MNCommuteDestinationUpdaterDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNCommuteDestination * commuteDestination;                                      //@synthesize commuteDestination=_commuteDestination - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (assign,nonatomic) unsigned long long suggestionID;                                                  //@synthesize suggestionID=_suggestionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionStartDate;
+(id)scoreClasses;
+(void)setSessionStartDate:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<MNCommuteDestinationUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNCommuteDestinationUpdaterDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)route;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(MNLocation *)lastLocation;
-(void)updateForLocation:(id)arg1 ;
-(void)updateETA;
-(NSDictionary *)scores;
-(void)locationTrackerDidArrive:(id)arg1 ;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2 ;
-(void)locationTrackerWillReroute:(id)arg1 ;
-(void)locationTrackerDidCancelReroute:(id)arg1 ;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6 ;
-(void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 traceManager:(id)arg2 ;
-(void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)_generateScoreObjects;
-(void)_updateDestination;
-(unsigned long long)suggestionID;
-(MNCommuteDestination *)commuteDestination;
-(void)updateLocationHistory:(id)arg1 ;
-(void)commuteScoreUpdaterDidUpdate:(id)arg1 ;
-(MNCommuteDestinationGeodesicDistanceScore *)geodesicDistanceScore;
-(MNCommuteDestinationOffRouteScore *)offRouteScore;
-(MNCommuteDestinationMapsSuggestionsScore *)mapsSuggestionsScore;
-(MNCommuteDestinationStartEndTimeScore *)startEndTimeScore;
-(void)setSuggestionID:(unsigned long long)arg1 ;
@end

