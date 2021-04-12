/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol CNUINavigationListStyle;
@class UIImageView, UILabel, CNUINavigationListStyleApplier, NSLayoutConstraint, UILayoutGuide;

@interface CNUINavigationListViewCell : UITableViewCell {

	BOOL _accessoryControlExpanded;
	BOOL _contentViewConstraintsLoaded;
	BOOL _showSeparator;
	UIImageView* _accessoryImageView;
	UILabel* _subtitleLabel;
	UIImageView* _titleImageView;
	UILabel* _titleLabel;
	id<CNUINavigationListStyle> _navigationListStyle;
	CNUINavigationListStyleApplier* _styleApplier;
	NSLayoutConstraint* _contentViewBottomAnchorConstraint;
	NSLayoutConstraint* _subtitleLabelFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _subtitleLabelLeadingAnchorConstraint;
	NSLayoutConstraint* _subtitleLabelTrailingAnchorConstraint;
	NSLayoutConstraint* _titleLabelFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _titleLabelLeadingAnchorConstraint;
	NSLayoutConstraint* _titleLabelTrailingAnchorConstraint;
	UILayoutGuide* _accessoryImageViewLayoutGuide;
	UILayoutGuide* _titleImageViewLayoutGuide;

}

@property (assign,getter=isAccessoryControlExpanded,nonatomic) BOOL accessoryControlExpanded;                      //@synthesize accessoryControlExpanded=_accessoryControlExpanded - In the implementation block
@property (assign,getter=isContentViewConstraintsLoaded,nonatomic) BOOL contentViewConstraintsLoaded;              //@synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomAnchorConstraint;                               //@synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelFirstBaselineAnchorConstraint;                      //@synthesize subtitleLabelFirstBaselineAnchorConstraint=_subtitleLabelFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelLeadingAnchorConstraint;                            //@synthesize subtitleLabelLeadingAnchorConstraint=_subtitleLabelLeadingAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelTrailingAnchorConstraint;                           //@synthesize subtitleLabelTrailingAnchorConstraint=_subtitleLabelTrailingAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelFirstBaselineAnchorConstraint;                         //@synthesize titleLabelFirstBaselineAnchorConstraint=_titleLabelFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelLeadingAnchorConstraint;                               //@synthesize titleLabelLeadingAnchorConstraint=_titleLabelLeadingAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTrailingAnchorConstraint;                              //@synthesize titleLabelTrailingAnchorConstraint=_titleLabelTrailingAnchorConstraint - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * accessoryImageViewLayoutGuide;                                      //@synthesize accessoryImageViewLayoutGuide=_accessoryImageViewLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * titleImageViewLayoutGuide;                                          //@synthesize titleImageViewLayoutGuide=_titleImageViewLayoutGuide - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                                                   //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,readonly) UIImageView * accessoryImageView;                                                   //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * titleImageView;                                                       //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;                                      //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (nonatomic,retain) CNUINavigationListStyleApplier * styleApplier;                                        //@synthesize styleApplier=_styleApplier - In the implementation block
+(id)reuseIdentifier;
+(double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3 ;
+(id)accessoryImageViewAccessibilityLabel;
+(id)expandedAccessoryImageViewAccessibilityLabel;
+(id)highlightedDisclosureImage;
+(id)disclosureImage;
+(double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)subtitleLabel;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(void)styleUpdated;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(double)minimumContentHeight;
-(double)contentViewBottomAnchorConstraintConstant;
-(double)subtitleLabelFirstBaselineAnchorConstraintConstant;
-(double)titleLabelFirstBaselineAnchorConstraintConstant;
-(void)setupAccessoryImageViewInView:(id)arg1 ;
-(void)loadContentViewConstraints;
-(void)applyStyle;
-(void)loadContentView;
-(void)setAccessoryControlExpanded:(BOOL)arg1 ;
-(void)setAccessoryControlExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSubtitleLabelFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubtitleLabelLeadingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubtitleLabelTrailingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelLeadingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelTrailingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateConstraintsConstants;
-(void)updateVisualStateAnimated:(BOOL)arg1 ;
-(UIImageView *)accessoryImageView;
-(UIImageView *)titleImageView;
-(CNUINavigationListStyleApplier *)styleApplier;
-(void)setStyleApplier:(CNUINavigationListStyleApplier *)arg1 ;
-(BOOL)isAccessoryControlExpanded;
-(BOOL)isContentViewConstraintsLoaded;
-(void)setContentViewConstraintsLoaded:(BOOL)arg1 ;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)subtitleLabelFirstBaselineAnchorConstraint;
-(NSLayoutConstraint *)subtitleLabelLeadingAnchorConstraint;
-(NSLayoutConstraint *)subtitleLabelTrailingAnchorConstraint;
-(NSLayoutConstraint *)titleLabelFirstBaselineAnchorConstraint;
-(NSLayoutConstraint *)titleLabelLeadingAnchorConstraint;
-(NSLayoutConstraint *)titleLabelTrailingAnchorConstraint;
-(UILayoutGuide *)accessoryImageViewLayoutGuide;
-(UILayoutGuide *)titleImageViewLayoutGuide;
@end

