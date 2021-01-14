/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider, NSString, UIImage, CCUICAPackageDescription, CCUIRoundButton, UIColor, UILabel;

@interface CCUILabeledRoundButton : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _labelsVisible;
	BOOL _useAlternateBackground;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _glyphImage;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	CCUIRoundButton* _buttonView;
	NSString* _contentSizeCategoryThreshold;
	UIColor* _highlightColor;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) CCUIRoundButton * buttonView;                                    //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL labelsVisible;                                              //@synthesize labelsVisible=_labelsVisible - In the implementation block
@property (assign,nonatomic) BOOL useAlternateBackground;                                     //@synthesize useAlternateBackground=_useAlternateBackground - In the implementation block
@property (assign,nonatomic) NSString * contentSizeCategoryThreshold;                         //@synthesize contentSizeCategoryThreshold=_contentSizeCategoryThreshold - In the implementation block
-(UILabel *)titleLabel;
-(BOOL)labelsVisible;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)useAlternateBackground;
-(NSString *)glyphState;
-(void)setGlyphState:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(UIImage *)glyphImage;
-(void)setContentSizeCategoryThreshold:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(NSString *)contentSizeCategoryThreshold;
-(void)setLabelsVisible:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(void)_updateFonts;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setButtonView:(CCUIRoundButton *)arg1 ;
-(void)_updateVisualStylingOfLabel:(id)arg1 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(BOOL)_shouldUseLargeTextLayout;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CCUIRoundButton *)buttonView;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(void)_setupLabelsBounds;
-(NSString *)title;
-(UIColor *)highlightColor;
-(void)_layoutLabels;
@end

