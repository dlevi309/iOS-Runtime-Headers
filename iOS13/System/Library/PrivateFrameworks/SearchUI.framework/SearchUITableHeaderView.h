/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol SearchUITableHeaderViewDelegate, SFFeedbackListener;
@class SFResultSection, TLKLabel, UIView, TLKTextButton, TLKStackView, NSString;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerViewDelegate> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _shouldUseStandardSectionInsets;
	BOOL _useShorterHeaders;
	BOOL _usesInsetRoundedSections;
	BOOL _isExpanded;
	id<SearchUITableHeaderViewDelegate> _delegate;
	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _headerType;
	SFResultSection* _section;
	TLKLabel* _titleLabel;
	UIView* _bannerView;
	TLKTextButton* _headerOptionButton;
	TLKStackView* _stackView;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) TLKTextButton * headerOptionButton;                               //@synthesize headerOptionButton=_headerOptionButton - In the implementation block
@property (nonatomic,retain) SFResultSection * section;                                        //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) TLKStackView * stackView;                                         //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;                                    //@synthesize headerType=_headerType - In the implementation block
@property (assign,nonatomic) BOOL usesInsetRoundedSections;                                    //@synthesize usesInsetRoundedSections=_usesInsetRoundedSections - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                  //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUITableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener;                   //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) NSString * title; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                               //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets;                              //@synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets - In the implementation block
@property (assign,nonatomic) BOOL useShorterHeaders;                                           //@synthesize useShorterHeaders=_useShorterHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)init;
-(id<SearchUITableHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUITableHeaderViewDelegate>)arg1 ;
-(NSString *)title;
-(CGSize)intrinsicContentSize;
-(TLKLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SFResultSection *)section;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(TLKStackView *)stackView;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setFloating:(BOOL)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
-(unsigned long long)headerType;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(id)moreResultsPunchout;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(UIView *)bannerView;
-(void)setBannerView:(UIView *)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)moreButtonPressed;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)headerOptionButtonPressed;
-(void)setHeaderOptionButton:(TLKTextButton *)arg1 ;
-(void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2 usesInsetRoundedSection:(BOOL)arg3 ;
-(void)updateSectionTitle;
-(TLKTextButton *)headerOptionButton;
-(void)updateAlignmentRectInsets;
-(BOOL)useShorterHeaders;
-(BOOL)usesInsetRoundedSections;
-(BOOL)shouldUseStandardSectionInsets;
-(void)setUsesInsetRoundedSections:(BOOL)arg1 ;
-(void)updateHeaderButtonVisibility;
-(BOOL)supportsShowMoreInApp;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(void)setUseShorterHeaders:(BOOL)arg1 ;
@end

