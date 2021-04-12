/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, BKUIRotationArrowAnimationLayer;

@interface BKUIPearlCoachingDeviceView : UIView {

	BOOL _isDisplayZoomEnabled;
	BOOL _animationRunning;
	long long _orientation;
	UIImage* _deviceImage;
	UIImageView* _deviceView;
	BKUIRotationArrowAnimationLayer* _animationLayer;

}

@property (nonatomic,retain) UIImage * deviceImage;                                         //@synthesize deviceImage=_deviceImage - In the implementation block
@property (nonatomic,retain) UIImageView * deviceView;                                      //@synthesize deviceView=_deviceView - In the implementation block
@property (nonatomic,retain) BKUIRotationArrowAnimationLayer * animationLayer;              //@synthesize animationLayer=_animationLayer - In the implementation block
@property (assign,nonatomic) BOOL animationRunning;                                         //@synthesize animationRunning=_animationRunning - In the implementation block
@property (nonatomic,readonly) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL isDisplayZoomEnabled;                                     //@synthesize isDisplayZoomEnabled=_isDisplayZoomEnabled - In the implementation block
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;
-(BKUIRotationArrowAnimationLayer *)animationLayer;
-(void)setAnimationLayer:(BKUIRotationArrowAnimationLayer *)arg1 ;
-(BOOL)isDisplayZoomEnabled;
-(void)setIsDisplayZoomEnabled:(BOOL)arg1 ;
-(id)initWithCompactLayout:(BOOL)arg1 ;
-(void)setDeviceView:(UIImageView *)arg1 ;
-(UIImageView *)deviceView;
-(void)setDeviceImage:(UIImage *)arg1 ;
-(UIImage *)deviceImage;
-(BOOL)animationRunning;
-(void)setAnimationRunning:(BOOL)arg1 ;
-(void)resetDevice;
-(void)setDeviceHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)rotateDeviceToAngle:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_colorForStroke;
@end

