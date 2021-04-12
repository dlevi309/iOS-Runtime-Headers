/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString, UIColor;

@interface PKStackedLabelCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _isRTL;
	NSString* _titleText;
	NSString* _detailText;
	UIColor* _titleTextColor;
	UIColor* _detailTextColor;

}

@property (nonatomic,copy) NSString * titleText;                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                    //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;               //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIColor * detailTextColor;              //@synthesize detailTextColor=_detailTextColor - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)titleText;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)_applyLabelStyles;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)detailTextColor;
@end

