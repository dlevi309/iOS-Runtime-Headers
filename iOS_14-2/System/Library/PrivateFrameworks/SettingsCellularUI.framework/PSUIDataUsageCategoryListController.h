/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController {

	PSUIDataUsageCategorySpecifier* _parentSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (nonatomic,retain) PSSpecifier * spinnerSpecifier;                                //@synthesize spinnerSpecifier=_spinnerSpecifier - In the implementation block
@property (nonatomic,retain) PSUIDataUsageCategorySpecifier * parentSpecifier;              //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
-(id)specifiers;
-(id)init;
-(PSSpecifier *)spinnerSpecifier;
-(BOOL)shouldReloadSpecifiersOnResume;
-(PSUIDataUsageCategorySpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSUIDataUsageCategorySpecifier *)arg1 ;
-(void)setSpinnerSpecifier:(PSSpecifier *)arg1 ;
@end

