/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsPreloadableSource.h>

@protocol OS_dispatch_queue;
@class EKEventStore, EKCalendarVisibilityManager, NSObject, NSMutableDictionary, NSString, MapsSuggestionsNetworkRequester, NSSet, MapsSuggestionsCanKicker;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsPreloadableSource> {

	BOOL _suspended;
	EKEventStore* _eventStore;
	EKCalendarVisibilityManager* _calVisibilityManager;
	NSObject*<OS_dispatch_queue> _fimQueue;
	NSMutableDictionary* _handleToGEOMapItemMapping;
	NSString* _siriFoundThisString;
	MapsSuggestionsNetworkRequester* _requester;
	NSSet* _setOfEventReservationSubtypes;
	MapsSuggestionsCanKicker* _changedNotificationCanKicker;

}

@property (assign) BOOL suspended;                                                                 //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                            //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) EKCalendarVisibilityManager * calVisibilityManager;                   //@synthesize calVisibilityManager=_calVisibilityManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fimQueue;                                //@synthesize fimQueue=_fimQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handleToGEOMapItemMapping;                      //@synthesize handleToGEOMapItemMapping=_handleToGEOMapItemMapping - In the implementation block
@property (nonatomic,retain) NSString * siriFoundThisString;                                       //@synthesize siriFoundThisString=_siriFoundThisString - In the implementation block
@property (nonatomic,retain) MapsSuggestionsNetworkRequester * requester;                          //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSSet * setOfEventReservationSubtypes;                                //@synthesize setOfEventReservationSubtypes=_setOfEventReservationSubtypes - In the implementation block
@property (nonatomic,retain) MapsSuggestionsCanKicker * changedNotificationCanKicker;              //@synthesize changedNotificationCanKicker=_changedNotificationCanKicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(MapsSuggestionsNetworkRequester *)requester;
-(void)setRequester:(MapsSuggestionsNetworkRequester *)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntries;
-(void)_callUpdateSuggestionEntries;
-(NSObject*<OS_dispatch_queue>)fimQueue;
-(void)eventStoreDidChange:(id)arg1 ;
-(BOOL)_createEntriesWithinPeriod:(id)arg1 location:(id)arg2 handler:(/*^block*/id)arg3 ;
-(EKCalendarVisibilityManager *)calVisibilityManager;
-(id)_predicateForPeriod:(id)arg1 ;
-(long long)_entryTypeFromSchema:(id)arg1 ;
-(BOOL)_addTravelFlightFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3 ;
-(BOOL)_addTicketedEventFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3 ;
-(BOOL)_addCarRentalFieldsToEntry:(id)arg1 event:(id)arg2 ;
-(BOOL)_addHotelFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3 ;
-(BOOL)_addCalendarEventFieldsToEntry:(id)arg1 event:(id)arg2 ;
-(BOOL)_addRestaurantReservationFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3 ;
-(NSMutableDictionary *)handleToGEOMapItemMapping;
-(BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setCalVisibilityManager:(EKCalendarVisibilityManager *)arg1 ;
-(void)setFimQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHandleToGEOMapItemMapping:(NSMutableDictionary *)arg1 ;
-(NSString *)siriFoundThisString;
-(void)setSiriFoundThisString:(NSString *)arg1 ;
-(NSSet *)setOfEventReservationSubtypes;
-(void)setSetOfEventReservationSubtypes:(NSSet *)arg1 ;
-(MapsSuggestionsCanKicker *)changedNotificationCanKicker;
-(void)setChangedNotificationCanKicker:(MapsSuggestionsCanKicker *)arg1 ;
@end

