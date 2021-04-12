/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIConstraintBasedLayoutHostingView : UIView {

	UIView* _hostedView;
	BOOL _hasAddedConstraints;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)constraintsDidChangeInEngine:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)updateConstraints;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(CGSize)_layoutSizeThatFits:(CGSize)arg1 fixedAxes:(unsigned long long)arg2 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(void)setHostedView:(UIView *)arg1 ;
-(void)_setFrameWithAlignmentRect:(CGRect)arg1 ;
-(void)_layoutMetricsInvalidatedForHostedView;
-(void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1 ;
-(id)initWithHostedView:(id)arg1 ;
-(UIView *)hostedView;
@end

