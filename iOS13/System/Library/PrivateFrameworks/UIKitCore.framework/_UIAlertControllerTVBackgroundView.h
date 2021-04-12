/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setAlpha:(double)arg1 forState:(unsigned long long)arg2 ;
-(void)setShouldUseTintColorAsBackgroundColor:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
-(double)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(void)setShouldShowShadow:(BOOL)arg1 ;
-(double)alphaForState:(unsigned long long)arg1 ;
-(id)_displayedBackgroundColor;
-(BOOL)shouldUseTintColorAsBackgroundColor;
-(BOOL)shouldShowShadow;
@end

