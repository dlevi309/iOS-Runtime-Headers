/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)contentMode;
-(UIEdgeInsets)contentInsets;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(double)_contentAspectRatio;
-(void)setContentMode:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(void)_viewDidUpdateContent;
-(void)_updateContentViewContainerConstraints;
-(void)_updateContentViewInsetConstraints;
-(UIView *)contentViewContainer;
-(NSLayoutConstraint *)contentViewContainerWidthConstraint;
-(NSLayoutConstraint *)contentViewContainerHeightConstraint;
-(NSLayoutConstraint *)contentViewLeadingConstraint;
-(NSLayoutConstraint *)contentViewTrailingConstraint;
-(UIView *)centerFillContentView;
-(BOOL)_limitToNonScrollingContentHeight;
@end

