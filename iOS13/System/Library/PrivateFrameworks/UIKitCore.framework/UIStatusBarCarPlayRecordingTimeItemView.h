/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {

	_UIStatusBarRoundedCornerView* _pillView;

}
-(long long)textStyle;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(long long)buttonType;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)allowsUserInteraction;
-(double)extraRightPadding;
-(void)_updatePillFrame;
-(CGRect)_pillFrame;
-(void)movedToSuperview:(id)arg1 ;
-(BOOL)usesAdvancedActions;
@end

