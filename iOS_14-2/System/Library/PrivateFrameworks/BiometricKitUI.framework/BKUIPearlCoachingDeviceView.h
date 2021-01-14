/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, BKUIRotationArrowAnimationLayer, NSLayoutConstraint;

@interface BKUIPearlCoachingDeviceView : UIView {

	BOOL _isDisplayZoomEnabled;
	BOOL _animationRunning;
	BOOL _inSheet;
	long long _orientation;
	UIImage* _deviceImage;
	UIImageView* _deviceView;
	BKUIRotationArrowAnimationLayer* _animationLayer;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,retain) UIImage * deviceImage;                                         //@synthesize deviceImage=_deviceImage - In the implementation block
@property (nonatomic,retain) UIImageView * deviceView;                                      //@synthesize deviceView=_deviceView - In the implementation block
@property (nonatomic,retain) BKUIRotationArrowAnimationLayer * animationLayer;              //@synthesize animationLayer=_animationLayer - In the implementation block
@property (assign,nonatomic) BOOL animationRunning;                                         //@synthesize animationRunning=_animationRunning - In the implementation block
@property (assign,nonatomic) BOOL inSheet;                                                  //@synthesize inSheet=_inSheet - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                         //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                          //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,readonly) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL isDisplayZoomEnabled;                                     //@synthesize isDisplayZoomEnabled=_isDisplayZoomEnabled - In the implementation block
-(void)startAnimation;
-(BKUIRotationArrowAnimationLayer *)animationLayer;
-(void)setAnimationLayer:(BKUIRotationArrowAnimationLayer *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)layoutSubviews;
-(NSLayoutConstraint *)heightConstraint;
-(void)stopAnimation;
-(long long)orientation;
-(BOOL)inSheet;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInSheet:(BOOL)arg1 ;
-(BOOL)isDisplayZoomEnabled;
-(void)setIsDisplayZoomEnabled:(BOOL)arg1 ;
-(id)initWithSheetLayout:(BOOL)arg1 ;
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

