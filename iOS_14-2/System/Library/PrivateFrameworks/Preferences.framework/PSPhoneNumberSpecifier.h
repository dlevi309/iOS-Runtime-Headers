/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTextFieldSpecifier.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate> {

	NSString* _countryCode;

}

@property (nonatomic,retain) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end

