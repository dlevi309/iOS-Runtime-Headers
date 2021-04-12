/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)postalCode;
-(NSString *)country;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
-(id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8 ;
-(id)initWithContactsPostalAddress:(id)arg1 ;
-(id)initWithFoundInAppsPostalAddress:(id)arg1 ;
-(id)toCNPostalAddress;
-(id)singleLineNormalizedAddressString;
@end

