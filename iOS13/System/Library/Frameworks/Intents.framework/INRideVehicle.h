/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideVehicleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString, INImage;

@interface INRideVehicle : NSObject <INImageProxyInjecting, INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding> {

	CLLocation* _location;
	NSString* _registrationPlate;
	NSString* _manufacturer;
	NSString* _model;
	INImage* _mapAnnotationImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) CLLocation * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * registrationPlate;              //@synthesize registrationPlate=_registrationPlate - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) INImage * mapAnnotationImage;              //@synthesize mapAnnotationImage=_mapAnnotationImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(CLLocation *)location;
-(void)setModel:(NSString *)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(INImage *)arg1 ;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(NSString *)arg1 ;
@end

