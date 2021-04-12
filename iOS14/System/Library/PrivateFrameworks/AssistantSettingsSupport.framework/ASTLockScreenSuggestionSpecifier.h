/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class NSSet, NSString;

@interface ASTLockScreenSuggestionSpecifier : NSObject <PSSpecifierGroup> {

	NSSet* _disabledLockScreenBundles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(id)specifierForBundleID:(id)arg1 ;
-(void)setLockScreenSwitchEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isLockScreenSwitchEnabled:(id)arg1 ;
@end

