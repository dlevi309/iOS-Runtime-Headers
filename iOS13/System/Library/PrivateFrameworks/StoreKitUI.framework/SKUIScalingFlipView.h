/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIScalingFlipView : UIView {

	UIView* _backView;
	/*^block*/id _completionBlock;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)_timingFunction;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)performFlipWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
@end

