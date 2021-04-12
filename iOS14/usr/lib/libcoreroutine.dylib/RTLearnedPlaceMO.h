/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fetchRequestSortedByCreation;
+(id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(void)didSave;
@end

