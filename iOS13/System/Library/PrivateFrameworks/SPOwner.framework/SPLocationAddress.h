/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)country;
-(NSString *)formattedAddressLines;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)placemark;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setFormattedAddressLines:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(void)setPlacemark:(NSString *)arg1 ;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
-(NSString *)streetName;
-(void)setStreetName:(NSString *)arg1 ;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 placemark:(id)arg9 ;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 ;
@end

