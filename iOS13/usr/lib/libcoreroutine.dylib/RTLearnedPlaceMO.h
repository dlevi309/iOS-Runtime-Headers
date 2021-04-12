/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSData, NSNumber, NSString, NSSet, RTMapItemMO;

@interface RTLearnedPlaceMO : RTCloudManagedObject

@property (nonatomic,retain) id<GEOMapItem> mapItemGeoMapItem; 
@property (nonatomic,retain) NSData * mapItemGeoMapItemHandle; 
@property (nonatomic,copy) NSNumber * mapItemSource; 
@property (nonatomic,copy) NSString * customLabel; 
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * typeSource; 
@property (nonatomic,retain) NSSet * visits; 
@property (nonatomic,retain) RTMapItemMO * mapItem; 
+(id)fetchRequest;
+(id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestSortedByCreation;
-(void)didSave;
@end

