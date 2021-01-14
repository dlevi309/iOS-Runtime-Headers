/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)snapshotView;
-(CGSize)intrinsicContentSize;
-(CGRect)_compatibleBounds;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIView *)touchableView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTouchableView:(UIView *)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)dealloc;
@end

