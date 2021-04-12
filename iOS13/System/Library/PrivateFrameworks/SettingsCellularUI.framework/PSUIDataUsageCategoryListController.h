/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSUIDataUsageCategorySpecifier;

@interface PSUIDataUsageCategoryListController : PSListController {

	PSUIDataUsageCategorySpecifier* _parentSpecifier;

}

@property (nonatomic,retain) PSUIDataUsageCategorySpecifier * parentSpecifier;              //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
-(id)init;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(PSUIDataUsageCategorySpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSUIDataUsageCategorySpecifier *)arg1 ;
@end

