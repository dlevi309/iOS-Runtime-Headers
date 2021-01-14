/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsEventKitConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate; 
@required
-(id)eventWithIdentifier:(id)arg1;
-(void)startListeningForChanges;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;
-(id)eventsMatchingPredicate:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)visibleCalendars;
-(id)calendarsForEntityType:(unsigned long long)arg1;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
-(void)stopListeningForChanges;

@end

