/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class RTMapItemExtendedAttributesMO, NSData, NSNumber, RTAddressMO, NSString, RTLearnedPlaceMO, NSUUID;

@interface RTMapItemMO : RTCloudManagedObject {

	RTMapItemExtendedAttributesMO* cachedExtendedAttributes;

}

@property (nonatomic,retain) NSData * geoMapItemHandle; 
@property (nonatomic,copy) NSNumber * mapItemSource; 
@property (nonatomic,retain) RTAddressMO * address; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSNumber * uncertainty; 
@property (nonatomic,copy) NSNumber * referenceFrame; 
@property (nonatomic,copy) NSNumber * muid; 
@property (nonatomic,copy) NSNumber * resultProviderID; 
@property (nonatomic,retain) RTLearnedPlaceMO * place; 
@property (nonatomic,copy) NSUUID * extendedAttributesIdentifier; 
@property (nonatomic,copy) NSString * displayLanguage; 
@property (nonatomic,retain) RTMapItemExtendedAttributesMO * cachedExtendedAttributes; 
+(id)fetchRequest;
+(id)managedObjectWithMapItem:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithMapItem:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)extendedAttributes;
-(void)didSave;
-(void)setExtendedAttributes:(id)arg1 ;
-(RTMapItemExtendedAttributesMO *)cachedExtendedAttributes;
-(void)setCachedExtendedAttributes:(RTMapItemExtendedAttributesMO *)arg1 ;
@end

