/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)direction;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDuration:(double)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(id)_timingFunction;
-(double)duration;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)performFlipWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
@end

