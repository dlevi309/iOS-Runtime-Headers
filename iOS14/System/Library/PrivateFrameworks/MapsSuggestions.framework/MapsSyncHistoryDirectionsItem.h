/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class GEOStorageRouteRequestStorage;


@protocol MapsSyncHistoryDirectionsItem <MapsSyncHistoryItem>
@property (nonatomic,readonly) BOOL navigationInterrupted; 
@property (nonatomic,readonly) GEOStorageRouteRequestStorage * routeRequestStorage; 
@required
-(BOOL)navigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;

@end

