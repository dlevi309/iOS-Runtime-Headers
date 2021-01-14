/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsVirtualGarageConnector.h>

@protocol MapsSuggestionsVirtualGarageConnectorDelegate;
@class NSString;

@interface MapsSuggestionsFakeVirtualGarageConnector : NSObject <MapsSuggestionsVirtualGarageConnector> {

	NSString* _testCase;
	id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id<MapsSuggestionsVirtualGarageConnectorDelegate>)delegate;
-(void)setDelegate:(id<MapsSuggestionsVirtualGarageConnectorDelegate>)arg1 ;
-(void)openVGConnection;
-(void)closeVGConnection;
-(void)startObservingVG;
-(void)stopObservingVG;
-(void)fetchUnpairedVehiclesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)configureTestCase:(id)arg1 ;
-(void)simulateUpdateTriggerFromVGWithVehicleCount:(unsigned long long)arg1 validVehicle:(BOOL)arg2 ;
@end

