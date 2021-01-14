/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint, UIColor, NSString, UIFont;

@interface GKDashboardSectionHeaderView : UICollectionReusableView {

	BOOL _onDarkBackground;
	UILabel* _titleLabel;
	NSLayoutConstraint* _leftMarginConstraint;
	UIColor* _titleColor;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (nonatomic,retain) UIColor * titleColor;                                    //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * leftMarginConstraint;               //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                   //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
+(double)defaultHeight;
+(CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2 ;
+(double)widthForTitle:(id)arg1 withFont:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIColor *)titleColor;
-(CGSize)intrinsicContentSize;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(BOOL)onDarkBackground;
-(NSLayoutConstraint *)leftMarginConstraint;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)title;
-(UIFont *)font;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

