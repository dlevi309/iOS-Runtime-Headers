/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapItemStorage, NSUUID;

@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (copy,nonatomic) NSUUID * supersededSearchId; 
-(id)initWithProxyObject:(id)arg1 ;
-(NSUUID *)supersededSearchId;
-(void)setSupersededSearchId:(NSUUID *)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
@end

