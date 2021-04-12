/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsVirtualGarageConnectorDelegate.h>

@protocol MapsSuggestionsVirtualGarageConnector, OS_dispatch_queue;
@class MapsSuggestionsObservers, NSObject, NSString;

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {

	id<MapsSuggestionsVirtualGarageConnector> _connector;
	MapsSuggestionsObservers* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isConnectedToVG;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openConnection;
-(void)closeConnection;
-(void)addObserver:(id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)virtualGarageDidUpdateUnpairedVehicles:(id)arg1 ;
-(id)initWithConnector:(id)arg1 ;
-(BOOL)entriesForUnpairedVehiclesWithHandler:(/*^block*/id)arg1 ;
-(void)stateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
@end

