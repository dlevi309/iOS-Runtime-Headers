/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/ContactsSettings.bundle/ContactsSettings
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray;

@interface ContactsShortNameController : PSListController {

	PSSpecifier* _shortNameEnabledSpecifier;
	PSSpecifier* _shortNameFormatsGroup;
	NSMutableArray* _shortNameFormatsSpecifiers;

}
-(id)specifiers;
-(void)setShortNameFormat:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)shortNameFormat;
-(void)setShortNameEnabled:(id)arg1 ;
-(id)shortNameEnabled;
-(void)setPreferNicknames:(id)arg1 ;
-(id)preferNicknames;
@end

