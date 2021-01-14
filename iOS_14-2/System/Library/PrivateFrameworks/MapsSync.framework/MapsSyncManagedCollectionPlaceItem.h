/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSyncManagedCollectionItem.h>

@class NSString, NSData, NSNumber, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem

@property (copy,nonatomic) NSString * customName; 
@property (copy,nonatomic) NSData * droppedPinCoordinate; 
@property (assign,nonatomic) int droppedPinFloorOrdinal; 
@property (assign,nonatomic) short origin; 
@property (retain,nonatomic) NSNumber * muid; 
@property (retain,nonatomic) NSNumber * latitude; 
@property (retain,nonatomic) NSNumber * longitude; 
@property (retain,nonatomic) MapsSyncManagedMixinMapItem * mapItem; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

