/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKContactFormatConfiguration;

@interface PKContactFormatValidator : NSObject {

	PKContactFormatConfiguration* _configuration;

}
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)_isFieldEntry:(id)arg1 validForContactFieldConfiguration:(id)arg2 ;
-(id)contactFieldConfigurationForGivenNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForFamilyNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)arg1 ;
-(id)_formattedFieldEntry:(id)arg1 forFieldConfiguration:(id)arg2 ;
-(id)contactFieldConfigurationForPostalField:(id)arg1 forCountryCode:(id)arg2 ;
-(BOOL)_isFieldEntry:(id)arg1 validForTextContactFieldConfiguration:(id)arg2 ;
-(BOOL)_isFieldEntry:(id)arg1 validForPickerContactFieldConfiguration:(id)arg2 ;
-(BOOL)hasFormatValidationConfigurationForCountryCode:(id)arg1 ;
-(BOOL)isGivenName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPhoneticGivenName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPhoneticFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPostalAddressFieldEntry:(id)arg1 validForPostalFieldKey:(id)arg2 forCountryCode:(id)arg3 ;
-(BOOL)emailAddressIsValid:(id)arg1 ;
-(BOOL)phoneNumberIsValid:(id)arg1 forCountryCode:(id)arg2 ;
-(unsigned long long)checkPostalAddressFormat:(id)arg1 ;
-(unsigned long long)checkNameFormat:(id)arg1 forCountryCode:(id)arg2 ;
-(id)formatPostalAddress:(id)arg1 ;
@end

