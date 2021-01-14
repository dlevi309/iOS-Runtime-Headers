/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsEventKitConnector.h>

@protocol MapsSuggestionsEventKitConnectorDelegate;
@class NSArray, NSPredicate, NSDictionary, NSError, NSString;

@interface MapsSuggestionsFakeEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {

	NSArray* _configuredVisibleCalendars;
	NSArray* _configuredCalendars;
	NSPredicate* _configuredPredicate;
	NSDictionary* _configuredEventsPerPredicate;
	NSDictionary* _configuredEventsPerIdentifier;
	NSError* _configuredError;
	BOOL _isListening;
	unsigned long long _calledRemoveEvent;
	id<MapsSuggestionsEventKitConnectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventWithIdentifier:(id)arg1 ;
-(void)startListeningForChanges;
-(NSString *)uniqueName;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(void)setDelegate:(id<MapsSuggestionsEventKitConnectorDelegate>)arg1 ;
-(void)configureVisibleCalendars:(id)arg1 ;
-(void)fireChange;
-(void)configureEventCalendars:(id)arg1 ;
-(void)configurePredicate:(id)arg1 ;
-(void)configureEventsPerPredicate:(id)arg1 ;
-(void)configureEventPerIdentifier:(id)arg1 ;
-(void)configureError:(id)arg1 ;
-(unsigned long long)calledRemoveEvent;
-(id)visibleCalendars;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(void)stopListeningForChanges;
@end

