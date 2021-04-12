/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;
#import <MapsSuggestions/MapsSuggestions-Structs.h>
@interface MapsSuggestionsFlightUpdater : NSObject {

	id<MapsSuggestionsFlightRequester> _flightRequester;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	Queue _queue;

}
-(BOOL)_updateGateIfNeededForEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_getTerminalMapItemForFlightEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_getGateMapItemForFlightEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateFlightsForEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2 ;
-(BOOL)updateFlightsForEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

