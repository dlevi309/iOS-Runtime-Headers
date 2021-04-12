/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController {

	PSLargeTextSliderListController* _sliderListController;
	PSLargeTextSliderListController* _extendedRangeSliderListController;
	BOOL _usesExtendedRange;
	BOOL _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)specifiers;
-(BOOL)showsExtendedRangeSwitch;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
@end

