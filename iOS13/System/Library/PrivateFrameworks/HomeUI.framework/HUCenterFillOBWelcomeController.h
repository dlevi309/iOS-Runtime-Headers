/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>

@class UIView, NSLayoutConstraint;

@interface HUCenterFillOBWelcomeController : OBWelcomeFullCenterContentController {

	UIView* _centerFillContentView;
	unsigned long long _contentMode;
	UIView* _contentViewContainer;
	NSLayoutConstraint* _contentViewContainerHeightConstraint;
	NSLayoutConstraint* _contentViewContainerWidthConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _contentViewLeadingConstraint;
	NSLayoutConstraint* _contentViewTrailingConstraint;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIView * contentViewContainer;                                          //@synthesize contentViewContainer=_contentViewContainer - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewContainerHeightConstraint;              //@synthesize contentViewContainerHeightConstraint=_contentViewContainerHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewContainerWidthConstraint;               //@synthesize contentViewContainerWidthConstraint=_contentViewContainerWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewTopConstraint;                          //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewBottomConstraint;                       //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewLeadingConstraint;                      //@synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewTrailingConstraint;                     //@synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint - In the implementation block
@property (nonatomic,readonly) UIView * centerFillContentView;                                         //@synthesize centerFillContentView=_centerFillContentView - In the implementation block
@property (assign,nonatomic) unsigned long long contentMode;                                           //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                               //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentMode:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)contentInsets;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)contentMode;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(double)_contentAspectRatio;
-(NSLayoutConstraint *)contentViewLeadingConstraint;
-(NSLayoutConstraint *)contentViewTrailingConstraint;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(void)_viewDidUpdateContent;
-(void)_updateContentViewContainerConstraints;
-(void)_updateContentViewInsetConstraints;
-(UIView *)contentViewContainer;
-(NSLayoutConstraint *)contentViewContainerWidthConstraint;
-(NSLayoutConstraint *)contentViewContainerHeightConstraint;
-(UIView *)centerFillContentView;
@end

