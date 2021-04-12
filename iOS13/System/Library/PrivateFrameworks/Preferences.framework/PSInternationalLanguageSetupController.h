/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSSetupController.h>

@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController {

	PSLanguageSelector* _languageSelector;

}

@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
-(void)commit;
-(void)setupController;
-(PSLanguageSelector *)languageSelector;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
@end

