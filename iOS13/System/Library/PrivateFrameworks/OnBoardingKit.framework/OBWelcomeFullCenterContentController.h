/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class UIView, NSLayoutConstraint, NSArray;

@interface OBWelcomeFullCenterContentController : OBWelcomeController {

	UIView* _centerContentView;
	NSLayoutConstraint* _contentViewOptionalHeightAnchor;
	double _contentViewMaxHeight;
	NSArray* _floatingConstraintGroup;
	NSArray* _pinnedConstraintGroup;

}

@property (nonatomic,retain) UIView * centerContentView;                                        //@synthesize centerContentView=_centerContentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewOptionalHeightAnchor;              //@synthesize contentViewOptionalHeightAnchor=_contentViewOptionalHeightAnchor - In the implementation block
@property (assign,nonatomic) double contentViewMaxHeight;                                       //@synthesize contentViewMaxHeight=_contentViewMaxHeight - In the implementation block
@property (nonatomic,retain) NSArray * floatingConstraintGroup;                                 //@synthesize floatingConstraintGroup=_floatingConstraintGroup - In the implementation block
@property (nonatomic,retain) NSArray * pinnedConstraintGroup;                                   //@synthesize pinnedConstraintGroup=_pinnedConstraintGroup - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)insertCenterContentView;
-(UIView *)centerContentView;
-(void)setCenterContentView:(UIView *)arg1 ;
-(void)setFloatingConstraintGroup:(NSArray *)arg1 ;
-(double)_availablePreScrollContentHeight;
-(void)setContentViewOptionalHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewOptionalHeightAnchor;
-(NSArray *)floatingConstraintGroup;
-(void)setPinnedConstraintGroup:(NSArray *)arg1 ;
-(void)recalculateLayoutForTraitCollectionChange;
-(NSArray *)pinnedConstraintGroup;
-(void)setCenteredContentView:(id)arg1 ;
-(double)contentViewMaxHeight;
-(void)setContentViewMaxHeight:(double)arg1 ;
@end

