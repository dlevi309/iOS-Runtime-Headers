/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsEventKitConnector.h>

@protocol OS_dispatch_queue, MapsSuggestionsEventKitConnectorDelegate;
@class NSObject, NSString;

@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MapsSuggestionsEventKitConnectorDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventWithIdentifier:(id)arg1 ;
-(void)startListeningForChanges;
-(id)init;
-(NSString *)uniqueName;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(void)setDelegate:(id<MapsSuggestionsEventKitConnectorDelegate>)arg1 ;
-(id)visibleCalendars;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(void)_eventStoreDidChange:(id)arg1 ;
-(void)stopListeningForChanges;
@end

