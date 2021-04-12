/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {

	UIColor* _unfocusedTintColor;
	UIColor* _focusedImageTintColor;

}

@property (nonatomic,retain) UIColor * focusedImageTintColor;              //@synthesize focusedImageTintColor=_focusedImageTintColor - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(void)applyStyleAttributes:(id)arg1 ;
-(UIColor *)focusedImageTintColor;
-(void)setFocusedImageTintColor:(UIColor *)arg1 ;
@end

