/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/CPSInformationScrollViewDelegate.h>
#import <libobjc.A.dylib/CPInformationTemplateProviding.h>

@class CPSInformationTemplateButtonsViewController, CPSInformationScrollView, UIStackView, UILabel, NSArray, UILayoutGuide, NSLayoutConstraint, UIVisualEffectView, CPSHairlineView, NSString;

@interface CPSInformationEntityViewController : CPSBaseTemplateViewController <CPSButtonDelegate, UIScrollViewDelegate, CPSInformationScrollViewDelegate, CPInformationTemplateProviding> {

	CPSInformationTemplateButtonsViewController* _buttonsViewController;
	CPSInformationScrollView* _scrollView;
	UIStackView* _itemStackView;
	UILabel* _titleLabel;
	NSArray* _centeringGuideConstraints;
	UILayoutGuide* _centeringGuide;
	NSLayoutConstraint* _itemStackViewLeadingConstraint;
	NSLayoutConstraint* _itemStackViewWidthConstraint;
	UIVisualEffectView* _visualEffectView;
	CPSHairlineView* _hairlineView;

}

@property (nonatomic,retain) CPSInformationTemplateButtonsViewController * buttonsViewController;              //@synthesize buttonsViewController=_buttonsViewController - In the implementation block
@property (nonatomic,retain) CPSInformationScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * itemStackView;                                                      //@synthesize itemStackView=_itemStackView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * centeringGuideConstraints;                                              //@synthesize centeringGuideConstraints=_centeringGuideConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * centeringGuide;                                                   //@synthesize centeringGuide=_centeringGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemStackViewLeadingConstraint;                              //@synthesize itemStackViewLeadingConstraint=_itemStackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemStackViewWidthConstraint;                                //@synthesize itemStackViewWidthConstraint=_itemStackViewWidthConstraint - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                            //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) CPSHairlineView * hairlineView;                                                   //@synthesize hairlineView=_hairlineView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)_updateScrollViewInsets;
-(void)setHairlineView:(CPSHairlineView *)arg1 ;
-(CPSHairlineView *)hairlineView;
-(void)setScrollView:(CPSInformationScrollView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(CPSInformationScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)_scrollViewAccessoryInsetsDidChange:(id)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(void)updateWithInformationTemplate:(id)arg1 ;
-(void)_viewDidLoad;
-(void)scrollViewContentSizeChanged:(id)arg1 ;
-(id)informationTemplate;
-(CPSInformationTemplateButtonsViewController *)buttonsViewController;
-(void)_updateItemStackView;
-(void)_updateHairline;
-(void)setItemStackView:(UIStackView *)arg1 ;
-(void)setCenteringGuide:(UILayoutGuide *)arg1 ;
-(void)_updateCenteringGuideConstraints;
-(UILayoutGuide *)centeringGuide;
-(void)setButtonsViewController:(CPSInformationTemplateButtonsViewController *)arg1 ;
-(NSArray *)centeringGuideConstraints;
-(void)setCenteringGuideConstraints:(NSArray *)arg1 ;
-(UIStackView *)itemStackView;
-(void)_setHairlineHidden:(BOOL)arg1 ;
-(NSLayoutConstraint *)itemStackViewLeadingConstraint;
-(void)setItemStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)itemStackViewWidthConstraint;
-(void)setItemStackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

