/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(BOOL)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2 ;
-(BOOL)visible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg1 ;
-(id)currentKeyplane;
-(void)_moveWithEvent:(id)arg1 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(BOOL)usesAutoShift;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(CGSize)splitLeftSize;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
@end

