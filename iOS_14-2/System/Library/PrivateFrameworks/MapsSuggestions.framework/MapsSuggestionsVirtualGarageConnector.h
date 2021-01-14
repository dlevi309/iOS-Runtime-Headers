/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsVirtualGarageConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate; 
@required
-(id<MapsSuggestionsVirtualGarageConnectorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)openVGConnection;
-(void)closeVGConnection;
-(void)startObservingVG;
-(void)stopObservingVG;
-(void)fetchUnpairedVehiclesWithHandler:(/*^block*/id)arg1;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;

@end

