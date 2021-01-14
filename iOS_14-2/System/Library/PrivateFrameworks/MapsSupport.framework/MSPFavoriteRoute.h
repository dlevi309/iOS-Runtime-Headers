/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class GEOComposedWaypoint;


@protocol MSPFavoriteRoute <MSPFavorite>
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) int transportType; 
@required
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(int)transportType;

@end

