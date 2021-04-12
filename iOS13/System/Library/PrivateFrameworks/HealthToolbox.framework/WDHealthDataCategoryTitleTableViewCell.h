/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	NSLayoutConstraint* _topLayoutConstraint;
	NSLayoutConstraint* _bottomLayoutConstraint;
	long long _headerType;
	double _lastBaselineToBottomDistance;
	NSString* _titleText;

}

@property (nonatomic,copy) NSString * titleText;              //@synthesize titleText=_titleText - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setHeaderType:(long long)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)_updateFont;
-(id)_titleLabelFont;
-(void)_setupUI;
-(double)_titleLabelTopToFirstBaseline;
-(double)_titleLabelLastBaselineToBottom;
-(id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLastBaselineToBottomDistance:(double)arg1 ;
@end

