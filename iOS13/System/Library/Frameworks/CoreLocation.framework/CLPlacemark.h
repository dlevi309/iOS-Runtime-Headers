/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemarkInternal, NSString, CNPostalAddress, CLLocation, CLRegion, NSTimeZone, NSDictionary, NSArray;

@interface CLPlacemark : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {

	CLPlacemarkInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNPostalAddress * postalAddress; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) CLRegion * region; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * thoroughfare; 
@property (nonatomic,copy,readonly) NSString * subThoroughfare; 
@property (nonatomic,copy,readonly) NSString * locality; 
@property (nonatomic,copy,readonly) NSString * subLocality; 
@property (nonatomic,copy,readonly) NSString * administrativeArea; 
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea; 
@property (nonatomic,copy,readonly) NSString * postalCode; 
@property (nonatomic,copy,readonly) NSString * ISOcountryCode; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (nonatomic,copy,readonly) NSString * inlandWater; 
@property (nonatomic,copy,readonly) NSString * ocean; 
@property (nonatomic,copy,readonly) NSArray * areasOfInterest; 
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)placemarkWithGEOMapItem:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2 ;
-(id)_intents_defaultReadableDescription;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_intents_indexingRepresentation;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(CLLocation *)location;
-(CLRegion *)region;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)postalCode;
-(NSString *)country;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(id)initWithPlacemark:(id)arg1 ;
-(id)formattedAddressLines;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)ISOcountryCode;
-(id)fullThoroughfare;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(id)_geoMapItem;
-(CNPostalAddress *)postalAddress;
@end

