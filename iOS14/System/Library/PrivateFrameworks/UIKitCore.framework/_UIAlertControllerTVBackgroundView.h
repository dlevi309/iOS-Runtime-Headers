/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class UIView, _UIFloatingShadowView, NSMutableDictionary, NSString;

@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	BOOL _isHighlighted;
	BOOL _isPressed;
	UIView* _backgroundView;
	_UIFloatingShadowView* _shadowView;
	NSMutableDictionary* _alphas;
	BOOL _shouldUseTintColorAsBackgroundColor;
	BOOL _shouldShowShadow;

}

@property (assign,nonatomic) BOOL shouldShowShadow;                                 //@synthesize shouldShowShadow=_shouldShowShadow - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTintColorAsBackgroundColor;              //@synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)backgroundInsetAmount;
-(void)setPressed:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setShouldUseTintColorAsBackgroundColor:(BOOL)arg1 ;
-(BOOL)shouldUseTintColorAsBackgroundColor;
-(void)layoutSubviews;
-(double)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(BOOL)shouldShowShadow;
-(double)alphaForState:(unsigned long long)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(id)_displayedBackgroundColor;
-(void)setAlpha:(double)arg1 forState:(unsigned long long)arg2 ;
-(void)setShouldShowShadow:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

