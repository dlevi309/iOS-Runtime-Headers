/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@class ASTLockScreenSuggestionSpecifier, PSSpecifier, NSArray, ASTLockScreenSuggestionsGlobalController;

@interface ASTLockScreenSuggestionsDetailListController : PSListController {

	ASTLockScreenSuggestionSpecifier* _lockScreenSpecifier;
	PSSpecifier* _perAppGroup;
	NSArray* _perAppSpecifiers;
	ASTLockScreenSuggestionsGlobalController* _globalController;
	PSSpecifier* _globalSpecifier;

}
-(id)specifiers;
-(id)init;
-(void)_handleGlobalToggleChangeWithEnabled:(BOOL)arg1 ;
@end

