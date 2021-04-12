/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class UIView, UIVisualEffectView, NSString;

@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	UIView* dimmingKnockoutView;
	UIVisualEffectView* backdropView;
	double _alpha;
	double _currentCornerRadius;
	double _cornerRadius;
	long long _style;

}

@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPressed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)_updateCornerRadius;
-(void)setBounds:(CGRect)arg1 ;
-(double)cornerRadius;
-(id)_visualEffectForStyle:(long long)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_configureViewsWithStyle:(long long)arg1 ;
-(id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2 ;
-(id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1 ;
-(long long)style;
-(id)_vibrancyEffectForStyle:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

