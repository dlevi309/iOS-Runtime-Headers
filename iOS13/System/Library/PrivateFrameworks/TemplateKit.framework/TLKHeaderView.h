/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKView.h>

@class TLKImage, TLKMultilineText, TLKRichText, NSString, TLKImageView, TLKLabel, TLKStackView, TLKRoundedCornerLabel;

@interface TLKHeaderView : TLKView {

	TLKImage* _image;
	TLKMultilineText* _title;
	TLKRichText* _subtitle;
	TLKMultilineText* _footnote;
	TLKMultilineText* _trailingText;
	TLKImage* _subtitleImage;
	NSString* _roundedBorderText;
	long long _axis;
	TLKImageView* _imageView;
	TLKLabel* _titleLabel;
	TLKLabel* _trailingTextLabel;
	TLKLabel* _subtitleLabel;
	TLKLabel* _footnoteLabel;
	TLKImageView* _subtitleImageView;
	TLKStackView* _subtitleStackView;
	TLKStackView* _innerStackView;
	TLKRoundedCornerLabel* _roundedCornerLabel;

}

@property (nonatomic,retain) TLKStackView * contentView; 
@property (nonatomic,retain) TLKImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * trailingTextLabel;                            //@synthesize trailingTextLabel=_trailingTextLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * footnoteLabel;                                //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * subtitleImageView;                        //@synthesize subtitleImageView=_subtitleImageView - In the implementation block
@property (nonatomic,retain) TLKStackView * subtitleStackView;                        //@synthesize subtitleStackView=_subtitleStackView - In the implementation block
@property (nonatomic,retain) TLKStackView * innerStackView;                           //@synthesize innerStackView=_innerStackView - In the implementation block
@property (nonatomic,retain) TLKRoundedCornerLabel * roundedCornerLabel;              //@synthesize roundedCornerLabel=_roundedCornerLabel - In the implementation block
@property (nonatomic,retain) TLKImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TLKMultilineText * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TLKRichText * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) TLKMultilineText * footnote;                             //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) TLKMultilineText * trailingText;                         //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) TLKImage * subtitleImage;                                //@synthesize subtitleImage=_subtitleImage - In the implementation block
@property (nonatomic,retain) NSString * roundedBorderText;                            //@synthesize roundedBorderText=_roundedBorderText - In the implementation block
@property (assign,nonatomic) long long axis;                                          //@synthesize axis=_axis - In the implementation block
-(TLKMultilineText *)title;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)trailingText;
-(TLKImage *)image;
-(void)setImage:(TLKImage *)arg1 ;
-(TLKRichText *)subtitle;
-(long long)axis;
-(TLKLabel *)titleLabel;
-(TLKImageView *)imageView;
-(void)setSubtitle:(TLKRichText *)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(id)titleLabelFont;
-(void)didMoveToWindow;
-(id)hasImage;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(TLKLabel *)footnoteLabel;
-(void)setFootnoteLabel:(TLKLabel *)arg1 ;
-(TLKMultilineText *)footnote;
-(void)setFootnote:(TLKMultilineText *)arg1 ;
-(void)setTrailingText:(TLKMultilineText *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)titleLabelText;
-(id)subtitleLabelText;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setInnerStackView:(TLKStackView *)arg1 ;
-(void)setSubtitleImageView:(TLKImageView *)arg1 ;
-(void)setSubtitleStackView:(TLKStackView *)arg1 ;
-(void)setTrailingTextLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)trailingTextLabel;
-(TLKImage *)subtitleImage;
-(TLKStackView *)subtitleStackView;
-(TLKStackView *)innerStackView;
-(TLKImageView *)subtitleImageView;
-(NSString *)roundedBorderText;
-(TLKRoundedCornerLabel *)roundedCornerLabel;
-(void)setRoundedCornerLabel:(TLKRoundedCornerLabel *)arg1 ;
-(void)setSubtitleImage:(TLKImage *)arg1 ;
-(void)setRoundedBorderText:(NSString *)arg1 ;
-(id)footnoteLabelText;
-(id)roundedCornerLabelText;
@end

