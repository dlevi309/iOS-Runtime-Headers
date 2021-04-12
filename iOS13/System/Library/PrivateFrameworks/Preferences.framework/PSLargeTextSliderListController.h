/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSArray;

@interface PSLargeTextSliderListController : PSListController {

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
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setContentSizeCategories:(NSArray *)arg1 ;
-(NSArray *)contentSizeCategories;
-(void)setSelectedCategoryIndex:(long long)arg1 ;
-(BOOL)showsExtendedRangeSwitch;
-(BOOL)usesExtendedRange;
-(long long)selectedCategoryIndex;
-(void)setShowsLargerSizesHelpText:(BOOL)arg1 ;
-(BOOL)showsLargerSizesHelpText;
-(void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getDynamicTypeValueForSpecifier:(id)arg1 ;
-(id)initUsingExtendedRange:(BOOL)arg1 ;
-(void)setUsesExtendedRange:(BOOL)arg1 ;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
@end

