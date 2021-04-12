/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (assign,nonatomic) BOOL navigationInterrupted; 
@property (retain,nonatomic) GEOStorageRouteRequestStorage * routeRequestStorage; 
-(id)initWithProxyObject:(id)arg1 ;
-(BOOL)navigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
@end

