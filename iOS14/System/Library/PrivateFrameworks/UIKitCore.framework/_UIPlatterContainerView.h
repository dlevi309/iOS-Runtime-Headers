/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(_UIPlatterView *)arg1 ;
-(void)_updateTransforms;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSource:(_UIPlatterView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(_UIPlatterView *)updatedTarget;
-(_UIPlatterView *)target;
-(void)applyRotation:(double)arg1 ;
-(void)setUpdatedTarget:(_UIPlatterView *)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2 ;
-(_UIPlatterView *)source;
@end

