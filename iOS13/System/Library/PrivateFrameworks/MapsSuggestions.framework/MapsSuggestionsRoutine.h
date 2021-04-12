/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsRoutineRequester, MapsSuggestionsNetworkRequester;
@class NSMutableDictionary, MapsSuggestionsLimitedDictionary, GEOLocationShifter, NSString;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {

	id<MapsSuggestionsRoutineRequester> _routineRequester;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	Queue _queue;
	NSMutableDictionary* _loiLocationsForHome;
	NSMutableDictionary* _loiLocationsForWork;
	NSMutableDictionary* _loiVisits;
	MapsSuggestionsLimitedDictionary* _mapItemCache;
	MapsSuggestionsLimitedDictionary* _mapItemCacheOrigin;
	GEOLocationShifter* _locationShifter;
	BOOL _areFrequentLocationsAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(NSString *)uniqueName;
-(BOOL)fetchSuggestedShortcutsForType:(long long)arg1 minVisits:(unsigned long long)arg2 maxAge:(double)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)fetchLocationsSinceDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(id)initWithRoutineRequester:(id)arg1 networkRequester:(id)arg2 ;
-(id)networkRequester;
-(long long)_convertType:(long long)arg1 source:(id)arg2 ;
-(BOOL)_addFieldsToSuggestionsEntry:(id)arg1 fromRTMapItem:(id)arg2 ;
-(BOOL)_addCalendarFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2 ;
-(BOOL)_addRecentsFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2 ;
-(BOOL)_addParkedCarFieldsToSuggestionsEntry:(id)arg1 vehicleEvent:(id)arg2 ;
-(BOOL)_addResumeRouteFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2 ;
-(void)_addLabelForEntry:(id)arg1 ;
-(void)_setFrequentLocationsAreAvailable:(BOOL)arg1 ;
-(id)_suggestionEntryForPLOI:(id)arg1 ;
-(void)_resolveMapItemsAndAddEntries:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_treatPLOIs:(id)arg1 stepName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_addMapItemToShortcut:(id)arg1 fromLOI:(id)arg2 group:(id)arg3 ;
-(void)_treatLOIs:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)fetchEntriesForLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)readMeCardWithMinVisits:(unsigned long long)arg1 maxAge:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateFixedLOIs;
-(unsigned long long)countHomeLOIs;
-(unsigned long long)countWorkLOIs;
-(BOOL)startParkedCarEventsWithHandler:(/*^block*/id)arg1 ;
-(void)stopParkedCarEvents;
-(void)removeParkedCarsAllowingFeature:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(double)distanceToNearest:(long long)arg1 ;
-(BOOL)touristBitForLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)routineRequester;
@end

