/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willRemoveSubview:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHostedView:(UIView *)arg1 ;
-(CGSize)_layoutSizeThatFits:(CGSize)arg1 fixedAxes:(unsigned long long)arg2 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(void)_setFrameWithAlignmentRect:(CGRect)arg1 ;
-(void)constraintsDidChangeInEngine:(id)arg1 ;
-(void)_layoutMetricsInvalidatedForHostedView;
-(id)initWithHostedView:(id)arg1 ;
-(void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1 ;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)hostedView;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
@end

