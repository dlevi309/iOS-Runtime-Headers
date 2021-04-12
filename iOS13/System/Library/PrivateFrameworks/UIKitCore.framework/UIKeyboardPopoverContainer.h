/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIKeyboardPopover, UIKBVisualEffectView, _UIPopoverView, _UIKeyboardPopoverAffordance, NSLayoutConstraint, UIView;

@interface UIKeyboardPopoverContainer : NSObject {

	_UIKeyboardPopover* _popoverContainerView;
	UIKBVisualEffectView* _backdrop;
	_UIPopoverView* _popover;
	_UIKeyboardPopoverAffordance* _affordance;
	CGRect _targetFull;
	double _arrowOffset;
	unsigned long long _direction;
	NSLayoutConstraint* _keyboardAreaHeight;

}

@property (retain,readonly) UIView * affordance; 
@property (readonly) CGRect frame; 
+(double)shadowRadius;
+(CGSize)shadowOffset;
+(id)shadowColor;
+(UIEdgeInsets)contentInsets;
+(id)pillColor;
+(double)cornerRadius;
+(double)borderWidth;
+(double)shadowOpacity;
+(double)arrowHeight;
+(id)borderColor;
+(CGSize)pillSize;
+(double)extraWidth;
+(id)propertiesForTargetRect:(CGRect)arg1 withHeight:(double)arg2 onScreenSize:(CGSize)arg3 ;
+(id)propertiesForSpecificKeyboardFrame:(CGRect)arg1 onScreenSize:(CGSize)arg2 ;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(double)dragAreaHeight;
+(double)edgeOffset;
+(double)pillCornerRadius;
+(double)pillDistanceToEdge;
-(void)invalidate;
-(CGRect)frame;
-(UIView *)affordance;
-(id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2 ;
-(void)applyProperties:(id)arg1 ;
-(void)updateBackdropStyle:(long long)arg1 ;
@end

