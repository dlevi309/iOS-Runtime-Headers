/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString;

@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying> {

	CLLocation* _location;
	NSString* _name;
	NSString* _vendorIdentifier;
	NSString* _restaurantIdentifier;

}

@property (nonatomic,copy) CLLocation * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * restaurantIdentifier;              //@synthesize restaurantIdentifier=_restaurantIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)init;
-(CLLocation *)location;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(NSString *)arg1 ;
-(BOOL)location:(id)arg1 equalToLocation:(id)arg2 ;
-(id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

