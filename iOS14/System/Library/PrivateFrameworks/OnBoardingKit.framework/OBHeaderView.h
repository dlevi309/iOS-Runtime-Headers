/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIView.h>

@class OBAnimationView, OBImageView, UIView, NSArray, OBTemplateLabel, OBTemplateHeaderDetailLabel, OBHeaderAccessoryButton, UIImage;

@interface OBHeaderView : UIView {

	BOOL _usingSymbolImage;
	BOOL _iconInheritsTint;
	BOOL _allowFullWidthIcon;
	OBAnimationView* _animationView;
	OBImageView* _imageView;
	UIView* _topAssetContainer;
	NSArray* _topAssetContainerConstraints;
	OBTemplateLabel* _headerLabel;
	OBTemplateHeaderDetailLabel* _detailLabel;
	NSArray* _imageViewConstraints;
	NSArray* _detailLabelConstraints;
	OBHeaderAccessoryButton* _accessoryButton;
	unsigned long long _templateType;
	UIImage* _originalIconImage;
	UIView* _customIconContainerView;

}

@property (nonatomic,retain) OBAnimationView * animationView;                        //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) OBImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * topAssetContainer;                             //@synthesize topAssetContainer=_topAssetContainer - In the implementation block
@property (nonatomic,retain) NSArray * topAssetContainerConstraints;                 //@synthesize topAssetContainerConstraints=_topAssetContainerConstraints - In the implementation block
@property (nonatomic,retain) OBTemplateLabel * headerLabel;                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) OBTemplateHeaderDetailLabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSArray * imageViewConstraints;                         //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
@property (nonatomic,retain) NSArray * detailLabelConstraints;                       //@synthesize detailLabelConstraints=_detailLabelConstraints - In the implementation block
@property (nonatomic,retain) OBHeaderAccessoryButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;                        //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,retain) UIImage * originalIconImage;                            //@synthesize originalIconImage=_originalIconImage - In the implementation block
@property (nonatomic,retain) UIView * customIconContainerView;                       //@synthesize customIconContainerView=_customIconContainerView - In the implementation block
@property (assign,nonatomic) BOOL iconInheritsTint;                                  //@synthesize iconInheritsTint=_iconInheritsTint - In the implementation block
@property (assign,nonatomic) BOOL allowFullWidthIcon;                                //@synthesize allowFullWidthIcon=_allowFullWidthIcon - In the implementation block
-(void)setImageView:(OBImageView *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(double)topPadding;
-(double)bottomPadding;
-(void)tintColorDidChange;
-(BOOL)iconInheritsTint;
-(id)headerFont;
-(void)setIconInheritsTint:(BOOL)arg1 ;
-(OBImageView *)imageView;
-(void)setIcon:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)setLanguage:(id)arg1 ;
-(void)setTitleTrailingSymbol:(id)arg1 ;
-(id)_createImageView:(id)arg1 ;
-(id)_symbolIconForHeaderStyle:(id)arg1 configuration:(id)arg2 ;
-(void)extendedInitWithTitle:(id)arg1 detailText:(id)arg2 ;
-(id)_createDetailLabelIfNeeded;
-(void)_insertAndLayoutImageViewIfNeeded;
-(void)_updateConstraintsForDetailLabel;
-(void)setOriginalIconImage:(UIImage *)arg1 ;
-(void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2 ;
-(void)setAccessoryButton:(OBHeaderAccessoryButton *)arg1 ;
-(UIImage *)originalIconImage;
-(double)iconHeight;
-(NSArray *)imageViewConstraints;
-(UIView *)topAssetContainer;
-(BOOL)allowFullWidthIcon;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_layoutTopAssetContainer;
-(NSArray *)topAssetContainerConstraints;
-(double)iconToHeaderLabelPadding;
-(void)setTopAssetContainerConstraints:(NSArray *)arg1 ;
-(NSArray *)detailLabelConstraints;
-(double)headerLabelToDetailLabelPadding;
-(void)setDetailLabelConstraints:(NSArray *)arg1 ;
-(double)_setupAssistantIconHeight;
-(void)setTopAssetContainer:(UIView *)arg1 ;
-(id)initWithTitle:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(void)setAllowFullWidthIcon:(BOOL)arg1 ;
-(void)setSymbol:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)setTitleHyphenationFactor:(float)arg1 ;
-(void)removeDetailLabel;
-(void)removeAccessoryButton;
-(double)detailLabelToAccessoryButtonPadding;
-(void)_animateDetailLabelAlpha:(double)arg1 duration:(double)arg2 ;
-(UIView *)customIconContainerView;
-(void)setCustomIconContainerView:(UIView *)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(void)setDetailLabel:(OBTemplateHeaderDetailLabel *)arg1 ;
-(unsigned long long)templateType;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(OBTemplateLabel *)headerLabel;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)setHeaderLabel:(OBTemplateLabel *)arg1 ;
-(OBHeaderAccessoryButton *)accessoryButton;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(OBTemplateHeaderDetailLabel *)detailLabel;
-(id)symbolConfiguration;
-(OBAnimationView *)animationView;
-(void)setAnimationView:(OBAnimationView *)arg1 ;
-(id)title;
-(id)_detailFont;
-(void)addAccessoryButton:(id)arg1 ;
@end

