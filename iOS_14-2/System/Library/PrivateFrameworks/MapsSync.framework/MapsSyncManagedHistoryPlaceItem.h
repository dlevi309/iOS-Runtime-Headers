/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSyncManagedHistoryItem.h>

@class NSUUID, NSNumber, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem

@property (copy,nonatomic) NSUUID * supersededSearchId; 
@property (retain,nonatomic) NSNumber * muid; 
@property (retain,nonatomic) NSNumber * longitude; 
@property (retain,nonatomic) NSNumber * latitude; 
@property (retain,nonatomic) MapsSyncManagedMixinMapItem * mapItem; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

