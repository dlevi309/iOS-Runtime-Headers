/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNCommuteDestinationUpdaterDelegate.h>
#import <libobjc.A.dylib/MNCommuteDestinationObserver.h>
#import <libobjc.A.dylib/MNLocationManagerObserver.h>
#import <libobjc.A.dylib/MNSuggestionsManagerObserver.h>

@protocol MNCommuteSessionObserver;
@class MNObserverHashTable, MNSuggestionsManager, NSMutableDictionary, NSArray, NSTimer, MNNavigationTraceManager, MNLocation, MNLocationHistory, MNCommuteDestinationUpdater, NSString;

@interface MNCommuteSession : NSObject <MNCommuteDestinationUpdaterDelegate, MNCommuteDestinationObserver, MNLocationManagerObserver, MNSuggestionsManagerObserver> {

	MNObserverHashTable*<MNCommuteSessionObserver> _observers;
	MNSuggestionsManager* _suggestionsManager;
	NSMutableDictionary* _suggestions;
	NSArray* _rankedDestinations;
	id _rankedDestinationsSync;
	NSTimer* _etaUpdateTimer;
	MNNavigationTraceManager* _traceManager;
	unsigned long long _currentSuggestionID;
	MNLocation* _lastLocation;
	MNLocationHistory* _locationHistory;
	unsigned long long _commuteSessionState;
	MNCommuteDestinationUpdater* _comparisonDestinationStartTime;
	unsigned long long _requestedCommuteSessionState;

}

@property (assign,nonatomic,__weak) MNCommuteDestinationUpdater * comparisonDestinationStartTime;              //@synthesize comparisonDestinationStartTime=_comparisonDestinationStartTime - In the implementation block
@property (assign,nonatomic) unsigned long long requestedCommuteSessionState;                                  //@synthesize requestedCommuteSessionState=_requestedCommuteSessionState - In the implementation block
@property (assign,nonatomic) unsigned long long commuteSessionState;                                           //@synthesize commuteSessionState=_commuteSessionState - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager;                                        //@synthesize traceManager=_traceManager - In the implementation block
@property (nonatomic,readonly) NSArray * rankedDestinations; 
@property (readonly) NSString * suggestionsDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)addSuggestion:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(MNNavigationTraceManager *)traceManager;
-(void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2 ;
-(void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2 ;
-(void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)destinationUpdaterDidArrive:(id)arg1 ;
-(void)setCommuteSessionState:(unsigned long long)arg1 ;
-(void)startETAUpdatesWithInterval:(double)arg1 ;
-(void)stopETAUpdates;
-(unsigned long long)commuteSessionState;
-(unsigned long long)requestedCommuteSessionState;
-(void)setRequestedCommuteSessionState:(unsigned long long)arg1 ;
-(void)_updateSuggestionsManagerState;
-(void)_updatedDestinations;
-(void)updateComparisonStartDate;
-(MNCommuteDestinationUpdater *)comparisonDestinationStartTime;
-(void)setComparisonDestinationStartTime:(MNCommuteDestinationUpdater *)arg1 ;
-(NSArray *)rankedDestinations;
-(void)_resetRankedDestinations;
-(id)initWithTraceName:(id)arg1 isTraceRecording:(BOOL)arg2 ;
-(NSString *)suggestionsDescription;
@end

