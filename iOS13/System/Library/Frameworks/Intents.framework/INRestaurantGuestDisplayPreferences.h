/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantGuestDisplayPreferencesExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying> {

	BOOL _nameFieldFirstNameOptional;
	BOOL _nameFieldLastNameOptional;
	BOOL _nameFieldShouldBeDisplayed;
	BOOL _emailAddressFieldShouldBeDisplayed;
	BOOL _phoneNumberFieldShouldBeDisplayed;
	BOOL _nameEditable;
	BOOL _emailAddressEditable;
	BOOL _phoneNumberEditable;

}

@property (assign,nonatomic) BOOL nameFieldFirstNameOptional;                      //@synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional - In the implementation block
@property (assign,nonatomic) BOOL nameFieldLastNameOptional;                       //@synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional - In the implementation block
@property (assign,nonatomic) BOOL nameFieldShouldBeDisplayed;                      //@synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL emailAddressFieldShouldBeDisplayed;              //@synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL phoneNumberFieldShouldBeDisplayed;               //@synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL nameEditable;                                    //@synthesize nameEditable=_nameEditable - In the implementation block
@property (assign,nonatomic) BOOL emailAddressEditable;                            //@synthesize emailAddressEditable=_emailAddressEditable - In the implementation block
@property (assign,nonatomic) BOOL phoneNumberEditable;                             //@synthesize phoneNumberEditable=_phoneNumberEditable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(BOOL)nameFieldFirstNameOptional;
-(void)setNameFieldFirstNameOptional:(BOOL)arg1 ;
-(BOOL)nameFieldLastNameOptional;
-(void)setNameFieldLastNameOptional:(BOOL)arg1 ;
-(BOOL)nameFieldShouldBeDisplayed;
-(void)setNameFieldShouldBeDisplayed:(BOOL)arg1 ;
-(BOOL)emailAddressFieldShouldBeDisplayed;
-(void)setEmailAddressFieldShouldBeDisplayed:(BOOL)arg1 ;
-(BOOL)phoneNumberFieldShouldBeDisplayed;
-(void)setPhoneNumberFieldShouldBeDisplayed:(BOOL)arg1 ;
-(BOOL)nameEditable;
-(void)setNameEditable:(BOOL)arg1 ;
-(BOOL)emailAddressEditable;
-(void)setEmailAddressEditable:(BOOL)arg1 ;
-(BOOL)phoneNumberEditable;
-(void)setPhoneNumberEditable:(BOOL)arg1 ;
@end

