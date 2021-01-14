/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol INRestaurantGuestDisplayPreferencesExport <NSObject,JSExport>
@property (assign,nonatomic) BOOL nameFieldFirstNameOptional; 
@property (assign,nonatomic) BOOL nameFieldLastNameOptional; 
@property (assign,nonatomic) BOOL nameFieldShouldBeDisplayed; 
@property (assign,nonatomic) BOOL emailAddressFieldShouldBeDisplayed; 
@property (assign,nonatomic) BOOL phoneNumberFieldShouldBeDisplayed; 
@property (assign,nonatomic) BOOL nameEditable; 
@property (assign,nonatomic) BOOL emailAddressEditable; 
@property (assign,nonatomic) BOOL phoneNumberEditable; 
@required
-(id)init;
-(BOOL)nameEditable;
-(BOOL)nameFieldLastNameOptional;
-(void)setNameEditable:(BOOL)arg1;
-(BOOL)phoneNumberEditable;
-(BOOL)nameFieldFirstNameOptional;
-(void)setNameFieldFirstNameOptional:(BOOL)arg1;
-(void)setNameFieldLastNameOptional:(BOOL)arg1;
-(BOOL)nameFieldShouldBeDisplayed;
-(void)setNameFieldShouldBeDisplayed:(BOOL)arg1;
-(BOOL)emailAddressFieldShouldBeDisplayed;
-(void)setEmailAddressFieldShouldBeDisplayed:(BOOL)arg1;
-(BOOL)phoneNumberFieldShouldBeDisplayed;
-(BOOL)emailAddressEditable;
-(void)setPhoneNumberFieldShouldBeDisplayed:(BOOL)arg1;
-(void)setEmailAddressEditable:(BOOL)arg1;
-(void)setPhoneNumberEditable:(BOOL)arg1;

@end

