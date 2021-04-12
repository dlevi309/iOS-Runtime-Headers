/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(id)currentKeyplane;
-(BOOL)visible;
-(CGSize)splitLeftSize;
-(BOOL)usesAutoShift;
-(BOOL)shouldFadeToLayout;
-(void)layoutSubviews;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
@end

