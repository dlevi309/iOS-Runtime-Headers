/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;
#import <MapsSuggestions/MapsSuggestions-Structs.h>
@interface MapsSuggestionsFlightUpdater : NSObject {

	id<MapsSuggestionsFlightRequester> _flightRequester;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	Queue _queue;

}
-(id)initFromResourceDepot:(id)arg1 ;
-(char)updateFlightsForEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2 ;
@end

