/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface AXGestureRecorderGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
+(Class)layerClass;
-(CAGradientLayer *)gradientLayer;
-(id)_copyColorsArrayWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)_configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 locations:(id)arg3 animated:(BOOL)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(id)_copyLocationsArrayWithTopColorLocation:(float)arg1 bottomColorLocation:(float)arg2 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
@end

