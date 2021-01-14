/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _subLocality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _postalCode;
	NSString* _country;

}

@property (nonatomic,readonly) NSString * thoroughfare;                       //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,readonly) NSString * subThoroughfare;                    //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,readonly) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postalAddressWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8 ;
+(id)normalizeAddressString:(id)arg1 ;
-(NSString *)subLocality;
-(NSString *)postalCode;
-(NSString *)country;
-(NSString *)subAdministrativeArea;
-(id)initWithFoundInAppsPostalAddress:(id)arg1 ;
-(id)initWithContactsPostalAddress:(id)arg1 ;
-(NSString *)subThoroughfare;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_countryStringWithCountry:(id)arg1 isoCode:(id)arg2 ;
-(NSString *)locality;
-(id)description;
-(id)singleLineNormalizedAddressString;
-(id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8 ;
-(id)toCNPostalAddress;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)thoroughfare;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
@end

