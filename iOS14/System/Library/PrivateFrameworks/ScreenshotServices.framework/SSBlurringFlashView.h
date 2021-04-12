/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <ScreenshotServices/SSFlashView.h>

@class SSBlurView, _SSSFlashSuperColorView, UIViewPropertyAnimator;

@interface SSBlurringFlashView : SSFlashView {

	/*^block*/id _completionBlock;
	SSBlurView* _blurView;
	_SSSFlashSuperColorView* _superColorView;
	UIViewPropertyAnimator* _superColorViewOpacityAnimator;
	UIViewPropertyAnimator* _blurViewRadiusAnimator;
	BOOL _isCompletingFlashWithNewTimingParameters;
	BOOL _superColorViewBackgroundColorAnimatorCompleted;
	BOOL _blurViewRadiusAnimatorCompleted;

}
+(double)expectedAnimationDurationForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_cornerRadius;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_setCornerRadius:(double)arg1 ;
-(void)flashWithCompletion:(/*^block*/id)arg1 ;
-(void)_blurViewRadiusAnimatorCompleted;
-(void)_superColorViewBackgroundColorAnimatorCompleted;
-(void)_runCompletionBlockIfAppropriate;
@end

