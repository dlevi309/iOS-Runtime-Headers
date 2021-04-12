/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIImageView, NSArray, NSLayoutConstraint, UIView;

@interface _UIContextMenuActionView : UIView {

	BOOL _needsConstraintRebuild;
	unsigned long long _options;
	UIStackView* _labelStackView;
	UILabel* _subtitleLabel;
	UIImageView* _leadingImageView;
	UIImageView* _trailingImageView;
	NSArray* _managedConstraints;
	NSLayoutConstraint* _topToFirstBaseline;
	NSLayoutConstraint* _lastBaselineToBottom;
	NSLayoutConstraint* _leadingToLabelStackViewLeading;
	NSLayoutConstraint* _leadingViewCenterX;
	NSLayoutConstraint* _trailingViewCenterXToTrailing;
	NSLayoutConstraint* _labelStackViewTrailingToTrailingViewCenterX;
	NSLayoutConstraint* _nonSymbolImageWidth;
	NSLayoutConstraint* _nonSymbolImageHeight;
	NSLayoutConstraint* _minHeightConstraint;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIStackView * labelStackView;                                                  //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * leadingImageView;                                                //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * trailingImageView;                                               //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) NSArray * managedConstraints;                                                  //@synthesize managedConstraints=_managedConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToFirstBaseline;                                       //@synthesize topToFirstBaseline=_topToFirstBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lastBaselineToBottom;                                     //@synthesize lastBaselineToBottom=_lastBaselineToBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingToLabelStackViewLeading;                           //@synthesize leadingToLabelStackViewLeading=_leadingToLabelStackViewLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingViewCenterX;                                       //@synthesize leadingViewCenterX=_leadingViewCenterX - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingViewCenterXToTrailing;                            //@synthesize trailingViewCenterXToTrailing=_trailingViewCenterXToTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelStackViewTrailingToTrailingViewCenterX;              //@synthesize labelStackViewTrailingToTrailingViewCenterX=_labelStackViewTrailingToTrailingViewCenterX - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonSymbolImageWidth;                                      //@synthesize nonSymbolImageWidth=_nonSymbolImageWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonSymbolImageHeight;                                     //@synthesize nonSymbolImageHeight=_nonSymbolImageHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minHeightConstraint;                                      //@synthesize minHeightConstraint=_minHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL needsConstraintRebuild;                                                   //@synthesize needsConstraintRebuild=_needsConstraintRebuild - In the implementation block
@property (nonatomic,readonly) UIView * trailingView; 
@property (nonatomic,readonly) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                    //@synthesize options=_options - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_subtitleTextColor;
-(void)setTitle:(id)arg1 ;
-(unsigned long long)options;
-(id)_imageTintColor;
-(void)setOptions:(unsigned long long)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIView *)trailingView;
-(UIImageView *)leadingImageView;
-(void)setTrailingImage:(id)arg1 ;
-(UIImageView *)trailingImageView;
-(void)setSubtitle:(id)arg1 ;
-(CGSize)_maxImageSize;
-(id)_selectionImage;
-(void)_installLabelStackViewIfNeeded;
-(void)_installTitleLabelIfNeeded;
-(void)_updateTitleLabelNumberOfLines;
-(void)_installSubtitleLabelIfNeeded;
-(id)_contentImageViewForImage:(id)arg1 ;
-(void)setTrailingImageView:(UIImageView *)arg1 ;
-(UIStackView *)labelStackView;
-(id)_symbolConfigurationForCurrentTraits;
-(void)_setNeedsConstraintRebuild;
-(void)setNeedsConstraintRebuild:(BOOL)arg1 ;
-(BOOL)needsConstraintRebuild;
-(void)_updateAttachedConstraintsForViewHierarchyChange;
-(void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)arg1 ;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(void)_updateSubtitleLabelNumberOfLines;
-(void)setLeadingImageView:(UIImageView *)arg1 ;
-(void)_updateAppearanceForStateChange;
-(void)setNonSymbolImageWidth:(NSLayoutConstraint *)arg1 ;
-(id)_primaryContentColorForCurrentState;
-(void)setLeadingViewCenterX:(NSLayoutConstraint *)arg1 ;
-(double)_primaryContentAlphaForCurrentState;
-(NSLayoutConstraint *)leadingViewCenterX;
-(id)_subtitleLabelFilterForCurrentTraits;
-(NSArray *)managedConstraints;
-(void)setTrailingViewCenterXToTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingViewCenterXToTrailing;
-(void)setNonSymbolImageHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonSymbolImageWidth;
-(NSLayoutConstraint *)topToFirstBaseline;
-(NSLayoutConstraint *)nonSymbolImageHeight;
-(void)setTopToFirstBaseline:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minHeightConstraint;
-(void)setLastBaselineToBottom:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingToLabelStackViewLeading:(NSLayoutConstraint *)arg1 ;
-(void)setLabelStackViewTrailingToTrailingViewCenterX:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelStackViewTrailingToTrailingViewCenterX;
-(NSLayoutConstraint *)lastBaselineToBottom;
-(NSLayoutConstraint *)leadingToLabelStackViewLeading;
-(void)setMinHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setManagedConstraints:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

