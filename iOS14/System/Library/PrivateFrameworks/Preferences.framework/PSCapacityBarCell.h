/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSLayoutConstraint, UILabel, PSCapacityBarView, UIStackView, NSArray, PSCapacityBarLegendView, UIFont, UIColor, NSString;

@interface PSCapacityBarCell : PSTableCell {

	double _tableWidth;
	NSMutableArray* _normalConstraints;
	NSMutableArray* _largeConstraints;
	NSMutableArray* _legendConstraints;
	NSMutableArray* _commonConstraints;
	NSLayoutConstraint* _barHeightConstraint;
	UILabel* _titleLabel;
	UILabel* _sizeLabel;
	UILabel* _loadingLabel;
	PSCapacityBarView* _barView;
	UIStackView* _legendView;
	NSArray* _legends;
	PSCapacityBarLegendView* _otherLegend;
	UIFont* _legendFont;
	UIFont* _bigFont;
	UIColor* _legendTextColor;
	BOOL _hideLegend;
	BOOL _showOtherLegend;
	BOOL _forceLoading;
	BOOL _sizesAreMem;
	NSString* _sizeFormat;

}
+(id)specifierWithTitle:(id)arg1 ;
+(id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)updateConstraints;
-(void)initializeViews;
-(void)createLargeConstraints;
-(void)createNormalConstraints;
-(void)createCommonConstraints;
-(void)addVerticalLegends;
-(id)usageString:(id)arg1 ;
-(void)addHorizontalLegends;
-(void)createLegends:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

