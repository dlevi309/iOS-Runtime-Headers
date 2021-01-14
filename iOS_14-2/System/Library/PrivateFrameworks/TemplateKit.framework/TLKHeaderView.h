/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKImage, TLKMultilineText, TLKRichText, NSString, TLKImageView, TLKLabel, TLKStackView, TLKRoundedCornerLabel;

@interface TLKHeaderView : TLKView <NUIContainerViewDelegate> {

	BOOL _subtitleIsEmphasized;
	BOOL _useCompactWidth;
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
@property (assign,nonatomic) BOOL subtitleIsEmphasized;                               //@synthesize subtitleIsEmphasized=_subtitleIsEmphasized - In the implementation block
@property (nonatomic,retain) TLKMultilineText * footnote;                             //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) TLKMultilineText * trailingText;                         //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) TLKImage * subtitleImage;                                //@synthesize subtitleImage=_subtitleImage - In the implementation block
@property (nonatomic,retain) NSString * roundedBorderText;                            //@synthesize roundedBorderText=_roundedBorderText - In the implementation block
@property (assign,nonatomic) long long axis;                                          //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) BOOL useCompactWidth;                                    //@synthesize useCompactWidth=_useCompactWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TLKLabel *)titleLabel;
-(void)setAxis:(long long)arg1 ;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(void)setImageView:(TLKImageView *)arg1 ;
-(long long)axis;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)setImage:(TLKImage *)arg1 ;
-(void)setSubtitleImageView:(TLKImageView *)arg1 ;
-(void)setTrailingTextLabel:(TLKLabel *)arg1 ;
-(TLKImageView *)imageView;
-(id)hasImage;
-(void)setTrailingText:(TLKMultilineText *)arg1 ;
-(TLKLabel *)trailingTextLabel;
-(void)setInnerStackView:(TLKStackView *)arg1 ;
-(TLKStackView *)innerStackView;
-(TLKImageView *)subtitleImageView;
-(TLKImage *)subtitleImage;
-(NSString *)roundedBorderText;
-(TLKRoundedCornerLabel *)roundedCornerLabel;
-(void)setRoundedCornerLabel:(TLKRoundedCornerLabel *)arg1 ;
-(void)setSubtitleImage:(TLKImage *)arg1 ;
-(void)setRoundedBorderText:(NSString *)arg1 ;
-(id)footnoteLabelText;
-(id)roundedCornerLabelText;
-(void)_dynamicUserInterfaceTraitDidChange;
-(TLKRichText *)subtitle;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setFootnoteLabel:(TLKLabel *)arg1 ;
-(TLKImage *)image;
-(TLKMultilineText *)trailingText;
-(void)setSubtitleIsEmphasized:(BOOL)arg1 ;
-(TLKLabel *)footnoteLabel;
-(BOOL)subtitleIsEmphasized;
-(void)setFootnote:(TLKMultilineText *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)didMoveToWindow;
-(TLKMultilineText *)footnote;
-(void)setSubtitle:(TLKRichText *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultLayoutMargins;
-(TLKMultilineText *)title;
-(void)setSubtitleStackView:(TLKStackView *)arg1 ;
-(TLKStackView *)subtitleStackView;
-(BOOL)useCompactWidth;
-(void)setUseCompactWidth:(BOOL)arg1 ;
@end

