/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class RTMapItemMO, NSNumber, NSUUID, NSString, NSDate, NSSet, NSOrderedSet;

@interface RTLearnedLocationOfInterestMO : NSManagedObject {

	RTMapItemMO* cachedMapItem;

}

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,copy) NSString * placeCustomLabel; 
@property (nonatomic,retain) NSUUID * placeIdentifier; 
@property (nonatomic,retain) NSUUID * placeMapItemIdentifier; 
@property (nonatomic,copy) NSNumber * placeType; 
@property (nonatomic,copy) NSNumber * placeTypeSource; 
@property (nonatomic,copy) NSDate * placeExpirationDate; 
@property (nonatomic,copy) NSDate * placeCreationDate; 
@property (nonatomic,retain) NSSet * transitions; 
@property (nonatomic,retain) NSOrderedSet * visits; 
@property (nonatomic,retain) RTMapItemMO * cachedMapItem; 
+(id)fetchRequest;
+(id)managedObjectWithLocationOfInterest:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithLocationOfInterest:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestSortedByCreation;
-(void)setMapItem:(id)arg1 ;
-(id)mapItem;
-(RTMapItemMO *)cachedMapItem;
-(void)setCachedMapItem:(RTMapItemMO *)arg1 ;
-(void)updateWithLearnedLocation:(id)arg1 ;
@end

