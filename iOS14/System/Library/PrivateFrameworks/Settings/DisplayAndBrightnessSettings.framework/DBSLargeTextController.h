/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>

@class DBSLargeTextSliderListController;

@interface DBSLargeTextController : PSListController {

	DBSLargeTextSliderListController* _sliderListController;
	DBSLargeTextSliderListController* _extendedRangeSliderListController;
	BOOL _usesExtendedRange;
	BOOL _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(id)specifiers;
-(id)init;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(BOOL)showsExtendedRangeSwitch;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

