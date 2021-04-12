/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsMeCardReader;
@class MapsSuggestionsRoutine, NSString;

@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject> {

	Queue _queue;
	id<MapsSuggestionsMeCardReader> _meCardReader;
	MapsSuggestionsRoutine* _routine;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasVisitedMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)uniqueName;
-(id)initWithMeCardReader:(id)arg1 routine:(id)arg2 ;
-(char)meCardForProminentPlacesAroundCoordinate:(CLLocationCoordinate2D)arg1 maxDistance:(double)arg2 maxAge:(double)arg3 minVisits:(long long)arg4 handler:(/*^block*/id)arg5 ;
@end

