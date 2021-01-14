/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSNumber * locationHorizontalUncertainty; 
@property (nonatomic,copy) NSNumber * locationAltitude; 
@property (nonatomic,copy) NSNumber * locationVerticalUncertainty; 
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
+(id)managedObjectWithLocationOfInterest:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestSortedByCreation;
+(id)managedObjectWithLocationOfInterest:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)mapItem;
-(void)setMapItem:(id)arg1 ;
-(RTMapItemMO *)cachedMapItem;
-(void)setCachedMapItem:(RTMapItemMO *)arg1 ;
-(void)updateWithLearnedLocation:(id)arg1 ;
@end

