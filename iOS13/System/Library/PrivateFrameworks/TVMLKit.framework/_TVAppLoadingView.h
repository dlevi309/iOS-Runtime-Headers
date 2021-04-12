/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWindow, UIImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface _TVAppLoadingView : UIView {

	UIView* _wallpaperView;
	UIWindow* _overlayWindow;
	BOOL _hiding;
	double _timeout;
	double _delay;
	UIImageView* _maskView;
	UIVisualEffectView* _visualEffectView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(id)loadingScreen;
-(void)timeout;
-(void)setTimeout:(double)arg1 ;
-(BOOL)isVisible;
-(void)hide;
-(void)didRotate:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingDelay:(double)arg1 ;
-(void)showOverKeyWindowWithSpinnerOnly:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 ;
-(void)showOverKeyWindow;
-(double)hideAnimationDuration;
@end

