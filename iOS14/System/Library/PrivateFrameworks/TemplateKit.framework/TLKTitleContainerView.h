/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class TLKRichTextField, TLKLabel, TLKImageView;

@interface TLKTitleContainerView : TLKStackView {

	TLKRichTextField* _titleField;
	TLKLabel* _secondaryLabel;
	TLKImageView* _secondaryImageView;

}

@property (nonatomic,retain) TLKRichTextField * titleField;                  //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,retain) TLKLabel * secondaryLabel;                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * secondaryImageView;              //@synthesize secondaryImageView=_secondaryImageView - In the implementation block
+(BOOL)hasNonBoldFormattingInRichText:(id)arg1 ;
-(id)titleLabel;
-(id)viewForLastBaselineLayout;
-(id)init;
-(id)viewForFirstBaselineLayout;
-(id)titleFont;
-(void)setTitleField:(TLKRichTextField *)arg1 ;
-(TLKRichTextField *)titleField;
-(TLKImageView *)secondaryImageView;
-(void)setSecondaryImageView:(TLKImageView *)arg1 ;
-(void)setSecondaryLabel:(TLKLabel *)arg1 ;
-(void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(BOOL)arg4 useCompactMode:(BOOL)arg5 truncateMiddle:(BOOL)arg6 ;
-(TLKLabel *)secondaryLabel;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
@end

