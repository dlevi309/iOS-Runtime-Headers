/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)preload;
-(double)isTouristHere;
-(id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2 ;
-(char)signalPackForHereWithHandler:(/*^block*/id)arg1 ;
-(char)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)signalPackForHere;
-(id)confidenceScoresForMapItems:(id)arg1 ;
-(void)dealloc;
@end

