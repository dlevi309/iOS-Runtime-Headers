/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Foundation/NSFormatter.h>

@interface CNPostalAddressFormatter : NSFormatter {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(id)localizedStringForPostalAddressString:(id)arg1 ;
+(id)stringFromPostalAddress:(id)arg1 style:(long long)arg2 ;
+(id)formatPropertyKeyForPostalAddressPropertyKey:(id)arg1 ;
+(id)specificationForCountry:(id)arg1 ;
+(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2 ;
+(id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1 ;
+(id)supportedCountries;
+(id)specificationWithAddressFormatPlist:(id)arg1 ;
+(id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3 ;
+(id)localizedCountryNameForISOCountryCode:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 ;
-(id)postalAddressFromString:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(id)stringFromPostalAddress:(id)arg1 ;
-(long long)style;
@end

