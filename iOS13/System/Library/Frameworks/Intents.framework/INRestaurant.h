/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CLLocation *)location;
-(id)_dictionaryRepresentation;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4 ;
-(BOOL)location:(id)arg1 equalToLocation:(id)arg2 ;
@end

