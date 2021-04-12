/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableCollectionItem.h>

@class NSString, GEOLatLng, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSync.MapsSyncMutableCollectionItem {

	 _proxyCollectionPlaceItem;

}

@property (copy,nonatomic) NSString * customName; 
@property (retain,nonatomic) GEOLatLng * droppedPinCoordinate; 
@property (assign,nonatomic) int droppedPinFloorOrdinal; 
@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (assign,nonatomic) short origin; 
-(void)setOrigin:(short)arg1 ;
-(short)origin;
-(NSString *)customName;
-(void)setCustomName:(NSString *)arg1 ;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(int)droppedPinFloorOrdinal;
-(void)setDroppedPinFloorOrdinal:(int)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
@end

