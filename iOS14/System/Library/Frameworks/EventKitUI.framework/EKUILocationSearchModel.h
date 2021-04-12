/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/MKSearchCompleterDelegate.h>

@protocol CNCancelable, OS_dispatch_queue, EKUILocationSearchModelDelegate;
@class CLLocationManager, CLInUseAssertion, MKLocalSearchCompleter, EKStructuredLocation, CLLocation, CLGeocoder, MKLocalSearch, CNContactStore, NSObject, EKEventStore, EKOccurrenceCacheLocationSearch, NSCharacterSet, NSOperationQueue, NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate> {

	CLLocationManager* _locationManager;
	CLInUseAssertion* _locationAssertion;
	MKLocalSearchCompleter* _completer;
	EKStructuredLocation* _currentLocation;
	CLLocation* _currentImpreciseLocation;
	CLGeocoder* _geocoder;
	MKLocalSearch* _localSearch;
	CNContactStore* _contactStore;
	id<CNCancelable> _contactsSearchToken;
	NSObject*<OS_dispatch_queue> _recentsQueue;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	EKEventStore* _eventStore;
	EKOccurrenceCacheLocationSearch* _eventsSearch;
	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSObject*<OS_dispatch_queue> _conferenceRoomProcessingQueue;
	NSOperationQueue* _conferenceRoomOperationQueue;
	NSMutableArray* _mutableConferenceRoomSearchResults;
	NSMutableDictionary* _conferenceRoomAddressesToConferenceRooms;
	NSMutableArray* _recentsSearchResults;
	NSMutableArray* _frequentsSearchResults;
	NSMutableArray* _eventsSearchResults;
	NSMutableArray* _contactsSearchResults;
	unsigned long long _supportedSearchTypes;
	NSArray* _mapCompletionSearchResults;
	NSArray* _textualSearchResults;
	id<EKUILocationSearchModelDelegate> _delegate;

}

@property (nonatomic,retain) EKStructuredLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic) unsigned long long supportedSearchTypes;                   //@synthesize supportedSearchTypes=_supportedSearchTypes - In the implementation block
@property (nonatomic,readonly) NSArray * mapCompletionSearchResults;                    //@synthesize mapCompletionSearchResults=_mapCompletionSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * contactsSearchResults;                         //@synthesize contactsSearchResults=_contactsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * recentsSearchResults;                          //@synthesize recentsSearchResults=_recentsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * frequentsSearchResults;                        //@synthesize frequentsSearchResults=_frequentsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * eventsSearchResults;                           //@synthesize eventsSearchResults=_eventsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * textualSearchResults;                          //@synthesize textualSearchResults=_textualSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * conferenceRoomSearchResults; 
@property (assign,nonatomic) id<EKUILocationSearchModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GEOMapServiceCompletionTicket> lastTicket; 
-(void)stopUpdatingLocation;
-(EKStructuredLocation *)currentLocation;
-(void)cancelSearch;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id<EKUILocationSearchModelDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)updateRecents:(id)arg1 ;
-(void)setCurrentLocation:(EKStructuredLocation *)arg1 ;
-(void)resetContactsSearchResults;
-(void)resetEventsSearchResults;
-(void)resetConferenceRoomSearchResults;
-(void)resetSearchResults:(BOOL)arg1 ;
-(void)searchFrequentLocations:(id)arg1 ;
-(void)searchConferenceRooms:(id)arg1 ;
-(void)updateEventLocations:(id)arg1 ;
-(void)_updateContactsSearchWithResults:(id)arg1 forToken:(id)arg2 ;
-(void)dedupeResults;
-(NSArray *)frequentsSearchResults;
-(id)splitEventLocations:(id)arg1 ;
-(void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2 ;
-(void)_addDiscoveredConferenceRooms:(id)arg1 ;
-(void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2 ;
-(id)availabilityRequestForConferenceRooms:(id)arg1 duringEvent:(id)arg2 resultsBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<EKUILocationSearchModelDelegate>)arg1 ;
-(void)addLocationToRecents:(id)arg1 addressString:(id)arg2 ;
-(void)beginSearchForTerm:(id)arg1 ;
-(NSArray *)conferenceRoomSearchResults;
-(void)updateConferenceRoomAvailability:(id)arg1 duringEvent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addConferenceRoomToRecents:(id)arg1 fromSource:(id)arg2 ;
-(BOOL)removeRecentLocation:(id)arg1 ;
-(void)selectLocation:(id)arg1 ;
-(void)selectCurrentLocation;
-(unsigned long long)supportedSearchTypes;
-(void)setSupportedSearchTypes:(unsigned long long)arg1 ;
-(NSArray *)mapCompletionSearchResults;
-(NSArray *)eventsSearchResults;
-(NSArray *)textualSearchResults;
-(void)selectMapSearchCompletion:(id)arg1 ;
-(NSArray *)contactsSearchResults;
-(NSArray *)recentsSearchResults;
-(void)updateContacts:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2 ;
-(void)completerDidFail:(id)arg1 error:(id)arg2 ;
-(id)initWithEventStore:(id)arg1 ;
-(void)dealloc;
-(void)getCurrentLocation;
@end

