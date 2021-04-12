/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSObject, MapsSuggestionsFwdGeocodingRelevanceScoreProvider, MapsSuggestionsRoutineRelevanceScoreProvider, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsRelevanceScorer, NSString;

@interface MapsSuggestionsInsights : NSObject <MapsSuggestionsObject> {

	Queue _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;
	MapsSuggestionsFwdGeocodingRelevanceScoreProvider* _fwdGeoCodingRoutineScoreProvider;
	MapsSuggestionsRoutineRelevanceScoreProvider* _routineScoreProvider;
	MapsSuggestionsPortraitRelevanceScoreProvider* _portraitScoreProvider;
	MapsSuggestionsRelevanceScorer* _relevanceScorer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)sharedInsights;
-(id)init;
-(void)dealloc;
-(void)_closeConnection;
-(NSString *)uniqueName;
-(void)preload;
-(void)_unscheduleCloseConnection;
-(BOOL)_openConnectionIfNecessary;
-(void)_scheduleCloseConnection;
-(void)_initCloseTimerIfNecessary;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(id)signalPackForHere;
-(double)isTouristHere;
-(BOOL)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)signalPackForHereWithHandler:(/*^block*/id)arg1 ;
-(id)confidenceScoresForMapItems:(id)arg1 ;
-(id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2 ;
-(id)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
@end

