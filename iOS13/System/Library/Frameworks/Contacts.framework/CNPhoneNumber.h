/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _initialCountryCode;
	NSString* _stringValue;
	os_unfair_lock_s _stateLock;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (nonatomic,copy,readonly) NSString * initialCountryCode;                               //@synthesize initialCountryCode=_initialCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * digits; 
@property (nonatomic,copy,readonly) NSString * formattedStringValue; 
@property (nonatomic,copy,readonly) NSString * formattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * unformattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * stringValue;                                      //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithStringValue:(id)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithCopiedStringValue:(id)arg1 ;
+(id)defaultCountryCode;
+(CFPhoneNumberRef)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2 ;
+(BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1 ;
+(id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+(id)_countryCodesForNorthAmericanDialingPlan;
+(id)unsupportedCountryCodes;
+(id)dialingCodeForISOCountryCode:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)countryCode;
-(NSString *)unformattedInternationalStringValue;
-(NSString *)digits;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithStringValue:(id)arg1 ;
-(BOOL)isLikePhoneNumberForSamePerson:(id)arg1 ;
-(NSString *)formattedStringValue;
-(id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)initialCountryCode;
-(BOOL)isLikePhoneNumber:(id)arg1 ;
-(CFPhoneNumberRef)phoneNumberRef;
-(CFPhoneNumberRef)nts_lazyPhoneNumberRef;
-(id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1 ;
-(id)_countryCodeFromPhoneNumberRef;
-(id)_determineCorrectCountryCodeForNorthAmericanDialingPlan;
-(id)fullyQualifiedDigits;
-(id)lastFourDigits;
-(NSString *)formattedInternationalStringValue;
-(BOOL)isFullyQualified;
-(id)digitsRemovingDialingCode;
-(id)formattedStringValueRemovingDialingCode;
@end

