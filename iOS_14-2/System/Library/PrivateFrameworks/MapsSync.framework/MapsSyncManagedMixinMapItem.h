/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSData, MapsSyncManagedCollectionPlaceItem, MapsSyncManagedFavoriteItem, MapsSyncManagedHistoryPlaceItem;

@interface MapsSyncManagedMixinMapItem : NSManagedObject

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (copy,nonatomic) NSData * mapItemStorage; 
@property (retain,nonatomic) MapsSyncManagedCollectionPlaceItem * collectionPlaceItem; 
@property (retain,nonatomic) MapsSyncManagedFavoriteItem * favoriteItem; 
@property (retain,nonatomic) MapsSyncManagedHistoryPlaceItem * historyPlaceItem; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

