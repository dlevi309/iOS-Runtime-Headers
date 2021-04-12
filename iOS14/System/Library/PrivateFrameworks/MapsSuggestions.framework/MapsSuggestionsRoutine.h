/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsRoutineConnector, MapsSuggestionsNetworkRequester;
@class MapsSuggestionsObservers, NSMutableDictionary, MapsSuggestionsLimitedDictionary, GEOLocationShifter, NSString;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {

	id<MapsSuggestionsRoutineConnector> _connector;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	Queue _queue;
	MapsSuggestionsObservers* _parkedCarObservers;
	NSMutableDictionary* _loiLocationsForHome;
	NSMutableDictionary* _loiLocationsForWork;
	NSMutableDictionary* _loiLocationsForSchool;
	NSMutableDictionary* _loiVisits;
	MapsSuggestionsLimitedDictionary* _mapItemCache;
	MapsSuggestionsLimitedDictionary* _mapItemCacheOrigin;
	GEOLocationShifter* _locationShifter;
	BOOL _areFrequentLocationsAvailable;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forgetLocationOfInterest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeParkedCarObserver:(id)arg1 ;
-(NSString *)uniqueName;
-(char)fetchEntriesForLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initFromResourceDepot:(id)arg1 ;
-(char)readMeCardWithMinVisits:(unsigned long long)arg1 maxAge:(double)arg2 handler:(/*^block*/id)arg3 ;
-(char)predictedExitTimeFromLocation:(id)arg1 date:(id)arg2 handler:(/*^block*/id)arg3 ;
-(char)fetchLocationsSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)updateFixedLOIs;
-(char)touristBitForLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)countHomeLOIs;
-(char)fetchSuggestedShortcutsForType:(long long)arg1 minVisits:(unsigned long long)arg2 maxAge:(double)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithRoutineConnector:(id)arg1 networkRequester:(id)arg2 ;
-(unsigned long long)countWorkLOIs;
-(void)removeParkedCarsAllowingFeature:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(char)fetchLastVisitAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)countSchoolLOIs;
-(void)addParkedCarObserver:(id)arg1 ;
@end

