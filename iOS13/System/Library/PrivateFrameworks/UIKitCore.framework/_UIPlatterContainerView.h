/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIPlatterView;

@interface _UIPlatterContainerView : UIView {

	UIView* _updatedTargetWrapper;
	_UIPlatterView* _source;
	_UIPlatterView* _target;
	_UIPlatterView* _updatedTarget;

}

@property (nonatomic,retain) _UIPlatterView * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) _UIPlatterView * target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) _UIPlatterView * updatedTarget;              //@synthesize updatedTarget=_updatedTarget - In the implementation block
-(void)setSource:(_UIPlatterView *)arg1 ;
-(void)setTarget:(_UIPlatterView *)arg1 ;
-(_UIPlatterView *)target;
-(_UIPlatterView *)source;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateTransforms;
-(_UIPlatterView *)updatedTarget;
-(void)applyRotation:(double)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2 ;
-(void)setUpdatedTarget:(_UIPlatterView *)arg1 ;
@end

