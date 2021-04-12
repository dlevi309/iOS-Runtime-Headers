/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, UIColor;

@interface HKTitledIconHeaderView : UIView {

	BOOL _centersSubtitle;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _iconImage;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) UIColor * iconImageTint; 
@property (assign,nonatomic) BOOL centersSubtitle;                     //@synthesize centersSubtitle=_centersSubtitle - In the implementation block
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)iconImage;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)_titleFont;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(NSString *)title;
-(void)setLayoutMarginsWithTableView:(id)arg1 ;
-(id)_healthIconImage;
-(CGSize)_sizeThatFitsLabel:(id)arg1 containerSize:(CGSize)arg2 ;
-(double)_verticalOffsetForTitle;
-(void)_positionSubtitleLabel;
-(BOOL)centersSubtitle;
-(double)_verticalOffsetForSubtitle;
-(void)setCentersSubtitle:(BOOL)arg1 ;
-(UIColor *)iconImageTint;
-(void)setIconImageTint:(UIColor *)arg1 ;
@end

