/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(long long)index;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)shadowColor;
-(void)setIndex:(long long)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIFont *)subtitleFont;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)sizeToFit;
-(long long)style;
-(NSString *)title;
-(void)dealloc;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
@end

