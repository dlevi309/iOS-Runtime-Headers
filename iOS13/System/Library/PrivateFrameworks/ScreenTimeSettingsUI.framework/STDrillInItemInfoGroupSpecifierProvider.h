/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@class STUsageItem, PSSpecifier;

@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageItem* _usageItem;
	PSSpecifier* _appIconSpecifier;
	PSSpecifier* _ageRatingSpecifier;
	PSSpecifier* _developerSpecifier;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                       //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) PSSpecifier * appIconSpecifier;                //@synthesize appIconSpecifier=_appIconSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * ageRatingSpecifier;              //@synthesize ageRatingSpecifier=_ageRatingSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * developerSpecifier;              //@synthesize developerSpecifier=_developerSpecifier - In the implementation block
-(void)_didFetchAppInfo:(id)arg1 ;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 ;
-(id)usageItem:(id)arg1 ;
-(id)category:(id)arg1 ;
-(id)ageRating:(id)arg1 ;
-(id)developer:(id)arg1 ;
-(PSSpecifier *)ageRatingSpecifier;
-(PSSpecifier *)developerSpecifier;
-(PSSpecifier *)appIconSpecifier;
@end

