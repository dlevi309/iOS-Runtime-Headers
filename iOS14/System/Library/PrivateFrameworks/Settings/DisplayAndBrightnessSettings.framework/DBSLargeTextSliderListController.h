/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSArray;

@interface DBSLargeTextSliderListController : PSListController {

	PSSpecifier* _sliderGroupSpecifier;
	BOOL _viewIsDisappearing;
	BOOL _showsExtendedRangeSwitch;
	BOOL _usesExtendedRange;
	BOOL _showsLargerSizesHelpText;
	NSArray* _contentSizeCategories;
	long long _selectedCategoryIndex;

}

@property (nonatomic,copy) NSArray * contentSizeCategories;                //@synthesize contentSizeCategories=_contentSizeCategories - In the implementation block
@property (assign,nonatomic) long long selectedCategoryIndex;              //@synthesize selectedCategoryIndex=_selectedCategoryIndex - In the implementation block
@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;                //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
@property (assign,nonatomic) BOOL usesExtendedRange;                       //@synthesize usesExtendedRange=_usesExtendedRange - In the implementation block
@property (assign,nonatomic) BOOL showsLargerSizesHelpText;                //@synthesize showsLargerSizesHelpText=_showsLargerSizesHelpText - In the implementation block
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentSizeCategories:(NSArray *)arg1 ;
-(BOOL)usesExtendedRange;
-(NSArray *)contentSizeCategories;
-(void)setSelectedCategoryIndex:(long long)arg1 ;
-(BOOL)showsExtendedRangeSwitch;
-(long long)selectedCategoryIndex;
-(void)setShowsLargerSizesHelpText:(BOOL)arg1 ;
-(BOOL)showsLargerSizesHelpText;
-(void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getDynamicTypeValueForSpecifier:(id)arg1 ;
-(id)initUsingExtendedRange:(BOOL)arg1 ;
-(void)setUsesExtendedRange:(BOOL)arg1 ;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)loadView;
@end

