/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class GEOComposedWaypoint, GEOURLRouteHandle;


@protocol MSPHistoryEntryRoute <MSPHistoryEntry>
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL navigationWasInterrupted; 
@required
-(long long)transportType;
-(GEOURLRouteHandle *)routeHandle;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;
-(BOOL)navigationWasInterrupted;

@end

