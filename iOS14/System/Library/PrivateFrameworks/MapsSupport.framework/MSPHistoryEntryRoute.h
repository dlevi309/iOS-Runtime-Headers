/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(long long)transportType;
-(BOOL)navigationWasInterrupted;
-(GEOURLRouteHandle *)routeHandle;

@end

