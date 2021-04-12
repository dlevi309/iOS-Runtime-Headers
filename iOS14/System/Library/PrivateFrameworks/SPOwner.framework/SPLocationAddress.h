/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPLocationAddress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _formattedAddressLines;
	NSString* _country;
	NSString* _countryCode;
	NSString* _streetName;
	NSString* _streetAddress;
	NSString* _locality;
	NSString* _stateCode;
	NSString* _administrativeArea;
	NSString* _placemark;

}

@property (nonatomic,copy) NSString * formattedAddressLines;              //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * streetName;                         //@synthesize streetName=_streetName - In the implementation block
@property (nonatomic,copy) NSString * streetAddress;                      //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,copy) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * stateCode;                          //@synthesize stateCode=_stateCode - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * placemark;                          //@synthesize placemark=_placemark - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)country;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)streetAddress;
-(void)setPlacemark:(NSString *)arg1 ;
-(void)setStreetAddress:(NSString *)arg1 ;
-(NSString *)locality;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 ;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 placemark:(id)arg9 ;
-(NSString *)streetName;
-(NSString *)stateCode;
-(void)setStreetName:(NSString *)arg1 ;
-(void)setStateCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)placemark;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setFormattedAddressLines:(NSString *)arg1 ;
-(NSString *)formattedAddressLines;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(BOOL)isEqual:(id)arg1 ;
@end

