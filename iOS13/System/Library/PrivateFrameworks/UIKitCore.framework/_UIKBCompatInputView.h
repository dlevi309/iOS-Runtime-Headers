/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView {

	UIView* _touchableView;
	UIView* _snapshotView;

}

@property (nonatomic,retain) UIView * touchableView;              //@synthesize touchableView=_touchableView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;               //@synthesize snapshotView=_snapshotView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)_compatibleBounds;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
-(void)setTouchableView:(UIView *)arg1 ;
@end

