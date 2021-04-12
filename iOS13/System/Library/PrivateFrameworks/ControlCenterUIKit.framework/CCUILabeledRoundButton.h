/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didMoveToWindow;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_layoutLabels;
-(void)buttonTapped:(id)arg1 ;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(CCUIRoundButton *)buttonView;
-(void)setButtonView:(CCUIRoundButton *)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)setLabelsVisible:(BOOL)arg1 ;
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(BOOL)labelsVisible;
-(BOOL)useAlternateBackground;
-(id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(void)_setupLabelsBounds;
-(void)_updateVisualStylingOfLabel:(id)arg1 ;
-(BOOL)_shouldUseLargeTextLayout;
@end

