/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)arg1 ;
+(id)placemarkWithGEOMapItem:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_defaultReadableDescription;
-(id)_intents_indexingRepresentation;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)subLocality;
-(NSTimeZone *)timeZone;
-(NSString *)postalCode;
-(CLRegion *)region;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 mapItemSource:(unsigned long long)arg5 geoMapItemHandle:(id)arg6 meCardAddress:(id)arg7 ;
-(NSArray *)areasOfInterest;
-(NSString *)ocean;
-(NSString *)country;
-(NSDictionary *)addressDictionary;
-(NSString *)subAdministrativeArea;
-(CLLocation *)location;
-(NSString *)subThoroughfare;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(NSString *)locality;
-(NSString *)name;
-(id)_initWithRTMapItem:(id)arg1 location:(id)arg2 ;
-(NSString *)description;
-(id)mecardAddress;
-(id)_geoMapItemHandle;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(void)fetchFormattedAddress:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSString *)ISOcountryCode;
-(NSString *)inlandWater;
-(id)initWithCoder:(id)arg1 ;
-(id)_geoMapItem;
-(id)formattedAddressLines;
-(id)fullThoroughfare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)thoroughfare;
-(CNPostalAddress *)postalAddress;
-(void)dealloc;
@end

