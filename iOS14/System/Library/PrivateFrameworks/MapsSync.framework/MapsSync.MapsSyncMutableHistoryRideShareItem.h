/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOComposedWaypoint;

@interface MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOComposedWaypoint * startWaypoint; 
@property (retain,nonatomic) GEOComposedWaypoint * endWaypoint; 
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
@end

