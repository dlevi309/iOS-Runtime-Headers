/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, TLKLabel;

@interface TLKEnlargedTitleView : TLKView {

	TLKMultilineText* _title;
	TLKMultilineText* _subtitle;
	TLKLabel* _titleLabel;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(TLKLabel *)titleLabel;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(id)titleLabelText;
-(TLKMultilineText *)subtitle;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(TLKMultilineText *)title;
@end

