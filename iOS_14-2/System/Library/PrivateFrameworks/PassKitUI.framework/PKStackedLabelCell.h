/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)titleTextColor;
-(NSString *)detailText;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_applyLabelStyles;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)detailTextColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

