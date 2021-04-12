/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UILabel, NSString, UIFont;

@interface SUTableHeaderView : UIView {

	UIColor* _bottomBorderColor;
	UIEdgeInsets _edgeInsets;
	long long _index;
	long long _style;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;              //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIFont * subtitleFont; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) UIColor * textColor; 
-(void)dealloc;
-(long long)index;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)subtitle;
-(void)setIndex:(long long)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)subtitleFont;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
@end

