/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKImage, TLKRichText, TLKImageView, TLKLabel, NUIContainerGridView, NSString;

@interface TLKSimpleRowView : TLKView <NUIContainerViewDelegate> {

	TLKImage* _leadingImage;
	TLKRichText* _leadingTitle;
	TLKRichText* _leadingSubtitle;
	TLKImage* _trailingImage;
	TLKRichText* _trailingTitle;
	TLKRichText* _trailingSubtitle;
	TLKImageView* _leadingImageView;
	TLKLabel* _leadingTitleLabel;
	TLKLabel* _leadingSubtitleLabel;
	TLKLabel* _trailingTitleLabel;
	TLKLabel* _trailingSubtitleLabel;
	TLKImageView* _trailingImageView;

}

@property (nonatomic,retain) TLKImageView * leadingImageView;                 //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,retain) TLKLabel * leadingTitleLabel;                    //@synthesize leadingTitleLabel=_leadingTitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * leadingSubtitleLabel;                 //@synthesize leadingSubtitleLabel=_leadingSubtitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * trailingTitleLabel;                   //@synthesize trailingTitleLabel=_trailingTitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * trailingSubtitleLabel;                //@synthesize trailingSubtitleLabel=_trailingSubtitleLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * trailingImageView;                //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) NUIContainerGridView * contentView; 
@property (nonatomic,retain) TLKImage * leadingImage;                         //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) TLKRichText * leadingTitle;                      //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,retain) TLKRichText * leadingSubtitle;                   //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) TLKImage * trailingImage;                        //@synthesize trailingImage=_trailingImage - In the implementation block
@property (nonatomic,retain) TLKRichText * trailingTitle;                     //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,retain) TLKRichText * trailingSubtitle;                  //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applyText:(id)arg1 toLabel:(id)arg2 ;
+(double)naturalWidthOfLabel:(id)arg1 inFittingSize:(CGSize)arg2 ;
-(TLKRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(TLKRichText *)arg1 ;
-(TLKRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(TLKRichText *)arg1 ;
-(TLKImage *)leadingImage;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)setLeadingImage:(TLKImage *)arg1 ;
-(TLKImage *)trailingImage;
-(TLKImageView *)leadingImageView;
-(void)setTrailingImage:(TLKImage *)arg1 ;
-(TLKImageView *)trailingImageView;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setTrailingImageView:(TLKImageView *)arg1 ;
-(void)setLeadingImageView:(TLKImageView *)arg1 ;
-(id)gridOfAllViews;
-(void)setLeadingTitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)leadingTitleLabel;
-(void)setLeadingSubtitleLabel:(TLKLabel *)arg1 ;
-(void)setTrailingTitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)trailingTitleLabel;
-(void)setTrailingSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)trailingSubtitleLabel;
-(TLKLabel *)leadingSubtitleLabel;
-(BOOL)hasSubtitles;
-(TLKRichText *)leadingTitle;
-(TLKRichText *)trailingTitle;
-(id)stringForLabel:(id)arg1 ;
-(id)fontForTextInLabel:(id)arg1 ;
-(BOOL)usesDefaultLayoutMargins;
-(void)setLeadingTitle:(TLKRichText *)arg1 ;
-(void)setTrailingTitle:(TLKRichText *)arg1 ;
-(id)leadingTextView;
-(id)leadingTitleLabelString;
-(id)leadingSubtitleLabelString;
-(id)trailingTitleLabelString;
-(id)trailingSubtitleLabelString;
-(id)leadingTitleLabelFont;
-(id)trailingTitleLabelFont;
-(id)trailingSubtitleLabelFont;
-(double)widthOfColumnAtIndex:(unsigned long long)arg1 ;
-(id)topRowViews;
-(id)bottomRowViews;
@end

