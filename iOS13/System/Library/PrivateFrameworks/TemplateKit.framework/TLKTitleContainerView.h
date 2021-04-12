/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class TLKLabel, TLKImageView;

@interface TLKTitleContainerView : TLKStackView {

	TLKLabel* _titleLabel;
	TLKLabel* _secondaryLabel;
	TLKImageView* _secondaryImageView;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * secondaryLabel;                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * secondaryImageView;              //@synthesize secondaryImageView=_secondaryImageView - In the implementation block
+(id)titleFont;
+(id)titleFontforTitle:(id)arg1 ;
-(id)init;
-(TLKLabel *)titleLabel;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)secondaryLabel;
-(void)setSecondaryLabel:(TLKLabel *)arg1 ;
-(void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(BOOL)arg4 ;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(void)setSecondaryImageView:(TLKImageView *)arg1 ;
-(TLKImageView *)secondaryImageView;
@end

