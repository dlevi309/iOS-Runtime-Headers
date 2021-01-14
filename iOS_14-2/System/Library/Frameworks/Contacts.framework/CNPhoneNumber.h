/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNUIURLDestinationID.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNUIURLDestinationID, CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _initialCountryCode;
	NSString* _stringValue;
	os_unfair_lock_s _stateLock;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * initialCountryCode;                               //@synthesize initialCountryCode=_initialCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * digits; 
@property (nonatomic,copy,readonly) NSString * formattedStringValue; 
@property (nonatomic,copy,readonly) NSString * formattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * unformattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * stringValue;                                      //@synthesize stringValue=_stringValue - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(/*^block*/id)StringValue;
+(CFPhoneNumberRef)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2 ;
+(BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1 ;
+(id)defaultCountryCode;
+(id)_countryCodesForNorthAmericanDialingPlan;
+(id)dialingCodeForISOCountryCode:(id)arg1 ;
+(id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+(id)unsupportedCountryCodes;
+(id)phoneNumberWithStringValue:(id)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithCopiedStringValue:(id)arg1 ;
-(id)_cnui_URLDestinationID;
-(NSString *)countryCode;
-(id)init;
-(CFPhoneNumberRef)phoneNumberRef;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)initialCountryCode;
-(CFPhoneNumberRef)nts_lazyPhoneNumberRef;
-(id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1 ;
-(id)_countryCodeFromPhoneNumberRef;
-(id)lastFourDigits;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFullyQualified;
-(id)fullyQualifiedDigits;
-(id)digitsRemovingDialingCode;
-(id)formattedStringValueRemovingDialingCode;
-(NSString *)stringValue;
-(NSString *)description;
-(NSString *)formattedInternationalStringValue;
-(id)initWithStringValue:(id)arg1 ;
-(BOOL)isLikePhoneNumber:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLikePhoneNumberForSamePerson:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)unformattedInternationalStringValue;
-(NSString *)formattedStringValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)digits;
-(void)dealloc;
@end

