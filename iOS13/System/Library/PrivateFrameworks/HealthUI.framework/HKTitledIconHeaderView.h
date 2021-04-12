/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,retain) UIColor * iconImageTint; 
@property (assign,nonatomic) BOOL centersSubtitle;                     //@synthesize centersSubtitle=_centersSubtitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)_updateFont;
-(void)setIconImageTint:(UIColor *)arg1 ;
-(void)setLayoutMarginsWithTableView:(id)arg1 ;
-(id)_healthIconImage;
-(CGSize)_sizeThatFitsLabel:(id)arg1 containerSize:(CGSize)arg2 ;
-(double)_verticalOffsetForTitle;
-(void)_positionSubtitleLabel;
-(BOOL)centersSubtitle;
-(double)_verticalOffsetForSubtitle;
-(void)setCentersSubtitle:(BOOL)arg1 ;
-(UIColor *)iconImageTint;
@end

