/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class RTMapItemMO, NSDate, NSNumber, NSString, NSData, NSUUID;

@interface RTVehicleEventMO : NSManagedObject {

	RTMapItemMO* cachedMapItem;

}

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * locLatitude; 
@property (nonatomic,copy) NSNumber * locLongitude; 
@property (nonatomic,copy) NSNumber * locUncertainty; 
@property (nonatomic,copy) NSDate * locDate; 
@property (nonatomic,copy) NSNumber * locReferenceFrame; 
@property (nonatomic,copy) NSString * vehicleIdentifier; 
@property (nonatomic,copy) NSNumber * userSetLocation; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * photoData; 
@property (nonatomic,copy) NSNumber * locationQuality; 
@property (nonatomic,copy) NSNumber * usualLocation; 
@property (nonatomic,copy) NSUUID * mapItemIdentifier; 
@property (nonatomic,retain) RTMapItemMO * cachedMapItem; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)setMapItem:(id)arg1 ;
-(id)mapItem;
-(RTMapItemMO *)cachedMapItem;
-(void)setCachedMapItem:(RTMapItemMO *)arg1 ;
@end

