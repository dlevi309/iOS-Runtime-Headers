/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeaderType:(long long)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(id)_titleLabelFont;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupUI;
-(double)_titleLabelTopToFirstBaseline;
-(double)_titleLabelLastBaselineToBottom;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLastBaselineToBottomDistance:(double)arg1 ;
@end

