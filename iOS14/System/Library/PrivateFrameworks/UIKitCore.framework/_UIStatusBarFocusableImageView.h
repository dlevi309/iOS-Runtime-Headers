/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {

	UIColor* _unfocusedTintColor;
	UIColor* _focusedImageTintColor;

}

@property (nonatomic,retain) UIColor * focusedImageTintColor;              //@synthesize focusedImageTintColor=_focusedImageTintColor - In the implementation block
-(BOOL)canBecomeFocused;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)isUserInteractionEnabled;
-(UIColor *)focusedImageTintColor;
-(void)setFocusedImageTintColor:(UIColor *)arg1 ;
@end

