/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _TVSpinnerView : UIView {

	BOOL _shouldResumeAnimation;
	UIView* _spinnerContainer;
	UIView* _spinnerOverlayContainer;
	UIColor* _color;
	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                //@synthesize color=_color - In the implementation block
-(void)dealloc;
-(UIColor *)color;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 ;
-(void)_removeAnimations;
-(void)_updateImagesForTraitCollection:(id)arg1 ;
-(void)_addAnimations;
-(id)_spinnerImageForTraitCollection:(id)arg1 size:(CGSize)arg2 alpha:(double)arg3 ;
@end

