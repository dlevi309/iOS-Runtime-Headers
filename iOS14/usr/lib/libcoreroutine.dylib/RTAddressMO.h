/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSString, NSArray, NSData, NSDate, NSUUID, NSNumber, RTDeviceMO, RTMapItemMO;

@interface RTAddressMO : RTCloudManagedObject

@property (nonatomic,copy) NSString * administrativeArea; 
@property (nonatomic,copy) NSString * administrativeAreaCode; 
@property (nonatomic,retain) NSArray * areasOfInterest; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) long long flags; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSString * inlandWater; 
@property (nonatomic,copy) NSNumber * island; 
@property (nonatomic,copy) NSString * locality; 
@property (nonatomic,copy) NSString * ocean; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,retain) NSArray * subPremises; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * iso3166CountryCode; 
@property (nonatomic,copy) NSString * iso3166SubdivisionCode; 
@property (nonatomic,retain) RTDeviceMO * device; 
@property (nonatomic,retain) RTMapItemMO * mapItem; 
+(id)fetchRequest;
+(id)managedObjectWithAddress:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithAddress:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

