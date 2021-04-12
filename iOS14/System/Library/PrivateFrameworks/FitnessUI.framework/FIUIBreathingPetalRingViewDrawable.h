/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

@class UIView;


@protocol FIUIBreathingPetalRingViewDrawable <NSObject>
@property (assign,nonatomic,__weak) id<FIUIDeepBreathingPetalRingViewDelegate> petalRingDelegate; 
@property (assign,nonatomic) CGPoint ringCenter; 
@property (assign,nonatomic) float ringRadius; 
@property (nonatomic,readonly) long long numberOfPetals; 
@property (nonatomic,readonly) long long numberOfVisiblePetals; 
@property (nonatomic,readonly) BOOL showBlurTrails; 
@property (assign,nonatomic) float preferredFramesPerSecond; 
@property (nonatomic,readonly) UIView * view; 
@required
-(float)preferredFramesPerSecond;
-(UIView *)view;
-(void)setPreferredFramesPerSecond:(float)arg1;
-(void)setRingRadius:(float)arg1;
-(float)ringRadius;
-(id<FIUIDeepBreathingPetalRingViewDelegate>)petalRingDelegate;
-(void)setRingCenter:(CGPoint)arg1;
-(CGPoint)ringCenter;
-(long long)numberOfVisiblePetals;
-(void)setPetalAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;
-(void)setBlurTrailAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
-(void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2;
-(void)setGradientRotationAngle:(float)arg1;
-(id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3 device:(id)arg4;
-(void)importDataFromPetalRing:(id)arg1;
-(void)setPetalRingDelegate:(id)arg1;
-(long long)numberOfPetals;
-(BOOL)showBlurTrails;

@end

