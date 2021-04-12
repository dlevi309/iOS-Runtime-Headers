/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@protocol CalSearchDataSink;
#import <CalendarDatabase/CalendarDatabase-Structs.h>
@interface CalSearch : NSObject {

	CalDatabase* _database;
	CalFilterRef _filter;
	CFStringRef _searchString;
	int _seed;
	id<CalSearchDataSink> _dataSink;
	BOOL _dateToStartShowingResultsSentToDataSink;
	BOOL _moreResultsAvailable;
	CFArrayRef _partialResults;
	CFArrayRef _partialCachedOccurrences;
	CFArrayRef _partialCachedDays;
	CFArrayRef _partialCachedDaysIndexes;
	CFSetRef _matchedEventsSet;
	CFSetRef _matchedParticipantsSet;
	CFSetRef _matchedLocationsSet;
	BOOL _stopLoadingResults;
	opaque_pthread_mutex_t _dataSourceDeallocLock;
	BOOL _implementsCancellationCallback;
	BOOL _searchParticipants;
	BOOL _searchLocations;
	BOOL _searchAttendees;
	BOOL _shouldMatchLocationsOnlyForEventSearch;

}

@property (assign) BOOL searchParticipants;                                  //@synthesize searchParticipants=_searchParticipants - In the implementation block
@property (assign) BOOL searchLocations;                                     //@synthesize searchLocations=_searchLocations - In the implementation block
@property (assign) BOOL searchAttendees;                                     //@synthesize searchAttendees=_searchAttendees - In the implementation block
@property (assign) BOOL shouldMatchLocationsOnlyForEventSearch;              //@synthesize shouldMatchLocationsOnlyForEventSearch=_shouldMatchLocationsOnlyForEventSearch - In the implementation block
-(int)seed;
-(void)startSearching;
-(void)_startLoadingResults;
-(BOOL)searchParticipants;
-(CalParticipantIdsSearchContext*)_createParticipantIdsSearchContext;
-(void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext*)arg1 ;
-(void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext*)arg1 ;
-(BOOL)searchLocations;
-(CalLocationIdsSearchContext*)_createLocationIdsSearchContext;
-(void)_getLocationSearchResults:(CalLocationIdsSearchContext*)arg1 ;
-(void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext*)arg1 ;
-(CalEventIdsSearchContext*)_createEventIdsSearchContext;
-(BOOL)searchAttendees;
-(void)_getAttendeesSearchResults:(CalEventIdsSearchContext*)arg1 ;
-(void)_getEventsSearchResults:(CalEventIdsSearchContext*)arg1 ;
-(void)_deleteEventIdsSearchContext:(CalEventIdsSearchContext*)arg1 ;
-(CalEventOccurrenceSearchContext*)_createSearchContext;
-(void)_getApplicationSearchResults:(CalEventOccurrenceSearchContext*)arg1 ;
-(void)_deleteSearchContext:(CalEventOccurrenceSearchContext*)arg1 ;
-(void)_addMatchedParticipantIds:(CFArrayRef)arg1 ;
-(void)_addMatchedLocationIds:(CFArrayRef)arg1 ;
-(void)_addMatchedEventIds:(CFArrayRef)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 filter:(CalFilterRef)arg2 dataSink:(id)arg3 ;
-(BOOL)moreResultsAvailable;
-(void)setSearchParticipants:(BOOL)arg1 ;
-(void)setSearchLocations:(BOOL)arg1 ;
-(void)setSearchAttendees:(BOOL)arg1 ;
-(BOOL)shouldMatchLocationsOnlyForEventSearch;
-(void)setShouldMatchLocationsOnlyForEventSearch:(BOOL)arg1 ;
-(void)stopSearching;
-(void)dealloc;
@end

