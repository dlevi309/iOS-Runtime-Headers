/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAirport.h>
@class NSString, NSTimeZone, SFLatLng, NSDictionary, NSData;


@protocol SFAirport <NSObject>
@property (nonatomic,copy) NSString * code; 
@property (nonatomic,copy) NSTimeZone * timezone; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * district; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(NSString *)code;
-(void)setName:(id)arg1;
-(NSString *)countryCode;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)state;
-(void)setState:(id)arg1;
-(SFLatLng *)location;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)street;
-(NSTimeZone *)timezone;
-(void)setLocation:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(void)setTimezone:(id)arg1;
-(void)setCountry:(id)arg1;
-(void)setCity:(id)arg1;
-(void)setStreet:(id)arg1;
-(void)setPostalCode:(id)arg1;
-(void)setCode:(id)arg1;
-(NSData *)jsonData;
-(void)setDistrict:(id)arg1;
-(NSString *)district;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSTimeZone, SFLatLng, NSDictionary, NSData;

@interface SFAirport : NSObject <SFAirport, NSSecureCoding, NSCopying> {

	NSString* _code;
	NSTimeZone* _timezone;
	SFLatLng* _location;
	NSString* _city;
	NSString* _street;
	NSString* _district;
	NSString* _state;
	NSString* _postalCode;
	NSString* _countryCode;
	NSString* _country;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * code;                                          //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSTimeZone * timezone;                                    //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,retain) SFLatLng * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * city;                                          //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * street;                                        //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * district;                                      //@synthesize district=_district - In the implementation block
@property (nonatomic,copy) NSString * state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                   //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * country;                                       //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(SFLatLng *)location;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)street;
-(NSTimeZone *)timezone;
-(void)setLocation:(SFLatLng *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTimezone:(NSTimeZone *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setDistrict:(NSString *)arg1 ;
-(NSString *)district;
@end

