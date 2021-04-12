/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIInterfaceActionVisualStyle, NSArray, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView {

	BOOL _visualCornerForcedOverride;
	UIInterfaceActionVisualStyle* _visualStyle;
	long long _axis;
	long long _distribution;
	NSArray* _arrangedContentViews;
	unsigned long long _visualCornerPosition;
	UIStackView* _stackView;
	NSArray* _arrangedContentSeparatorViews;
	NSArray* _arrangedContentViewsDistributionConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentSeparatorViews;                            //@synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentViewsDistributionConstraints;              //@synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) long long axis;                                                       //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long distribution;                                               //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSArray * arrangedContentViews;                                       //@synthesize arrangedContentViews=_arrangedContentViews - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                              //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,nonatomic) BOOL visualCornerForcedOverride;                                      //@synthesize visualCornerForcedOverride=_visualCornerForcedOverride - In the implementation block
-(void)setDistribution:(long long)arg1 ;
-(long long)distribution;
-(void)setAxis:(long long)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(long long)axis;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_reloadStackViewArrangement;
-(CGSize)intrinsicContentSize;
-(void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1 ;
-(CGRect)_viewBoundsForStackViewFrame:(CGRect)arg1 ;
-(unsigned long long)visualCornerPosition;
-(NSArray *)arrangedContentViews;
-(long long)_dimensionAttributeToConstrainEqual;
-(UIStackView *)stackView;
-(void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(BOOL)arg2 ;
-(CGRect)_stackViewFrameForViewBounds:(CGRect)arg1 ;
-(BOOL)_isVerticalLayout;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(/*^block*/id)arg1 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1 ;
-(void)updateConstraints;
-(void)_updateRoundedCornerPositionForActionRepViews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)visualCornerForcedOverride;
-(void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
-(void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1 ;
-(void)_updateSeparatorConstantSizedAxis;
-(void)reloadDisplayedContentVisualStyle;
-(CGSize)_systemLayoutSizeFittingStackView:(CGSize)arg1 ;
-(void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1 ;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(void)setArrangedContentViews:(NSArray *)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(long long)_separatorConstantSizedAxis;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(NSArray *)arrangedContentViewsDistributionConstraints;
-(NSArray *)arrangedContentSeparatorViews;
-(void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(void)setVisualCornerForcedOverride:(BOOL)arg1 ;
@end

