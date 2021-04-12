/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(TLKMultilineText *)title;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)subtitle;
-(TLKLabel *)titleLabel;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)titleLabelText;
-(id)subtitleLabelText;
@end

