/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class GEOComposedWaypoint;


@protocol MSPFavoriteRoute <MSPFavorite>
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) int transportType; 
@required
-(int)transportType;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;

@end

