/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIImageView, NSLayoutConstraint, UIView;

@interface _UIContextMenuActionView : UIView {

	BOOL _disabled;
	BOOL _destructive;
	UIStackView* _labelStackView;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	NSLayoutConstraint* _topToFirstBaseline;
	NSLayoutConstraint* _lastBaselineToBottom;
	NSLayoutConstraint* _trailingViewCenterXToTrailing;
	NSLayoutConstraint* _labelStackViewTrailingToTrailingViewCenterX;
	NSLayoutConstraint* _nonSymbolImageWidth;
	NSLayoutConstraint* _nonSymbolImageHeight;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIStackView * labelStackView;                                                  //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToFirstBaseline;                                       //@synthesize topToFirstBaseline=_topToFirstBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lastBaselineToBottom;                                     //@synthesize lastBaselineToBottom=_lastBaselineToBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingViewCenterXToTrailing;                            //@synthesize trailingViewCenterXToTrailing=_trailingViewCenterXToTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelStackViewTrailingToTrailingViewCenterX;              //@synthesize labelStackViewTrailingToTrailingViewCenterX=_labelStackViewTrailingToTrailingViewCenterX - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonSymbolImageWidth;                                      //@synthesize nonSymbolImageWidth=_nonSymbolImageWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonSymbolImageHeight;                                     //@synthesize nonSymbolImageHeight=_nonSymbolImageHeight - In the implementation block
@property (nonatomic,readonly) UIView * trailingView; 
@property (nonatomic,readonly) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                                 //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL destructive;                                                              //@synthesize destructive=_destructive - In the implementation block
-(BOOL)disabled;
-(BOOL)destructive;
-(void)setDestructive:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(id)_imageTintColor;
-(void)updateConstraints;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(id)_primaryTitleLabel;
-(UIStackView *)labelStackView;
-(id)_subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(id)_imageViewForImage:(id)arg1 ;
-(void)setTopToFirstBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setLastBaselineToBottom:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topToFirstBaseline;
-(NSLayoutConstraint *)lastBaselineToBottom;
-(UIView *)trailingView;
-(void)setLabelStackViewTrailingToTrailingViewCenterX:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingViewCenterXToTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelStackViewTrailingToTrailingViewCenterX;
-(NSLayoutConstraint *)trailingViewCenterXToTrailing;
-(CGSize)_maxImageSize;
-(void)setNonSymbolImageWidth:(NSLayoutConstraint *)arg1 ;
-(void)setNonSymbolImageHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonSymbolImageWidth;
-(NSLayoutConstraint *)nonSymbolImageHeight;
-(id)_subtitleTextColor;
-(id)_subtitleLabelFilterForCurrentTraits;
-(void)_updateAppearanceForStateChange;
-(id)_colorReflectingActionStateForColor:(id)arg1 ;
@end

