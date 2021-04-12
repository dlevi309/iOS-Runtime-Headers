/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SUScalingFlipViewDelegate;
@class UIView;

@interface SUScalingFlipView : UIView {

	UIView* _backView;
	id<SUScalingFlipViewDelegate> _delegate;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) id<SUScalingFlipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long direction;                                 //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
-(void)dealloc;
-(id<SUScalingFlipViewDelegate>)delegate;
-(void)setDelegate:(id<SUScalingFlipViewDelegate>)arg1 ;
-(double)duration;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
-(id)_fixedAnimationForAnimation:(id)arg1 ;
-(id)_transformAnimationWithStart:(CATransform3D)arg1 middle:(CATransform3D)arg2 end:(CATransform3D)arg3 ;
-(void)performFlip;
@end

