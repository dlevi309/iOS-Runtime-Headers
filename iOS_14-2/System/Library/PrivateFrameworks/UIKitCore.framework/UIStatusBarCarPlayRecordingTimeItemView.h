/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {

	_UIStatusBarRoundedCornerView* _pillView;

}
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(long long)textStyle;
-(BOOL)allowsUserInteraction;
-(CGRect)_pillFrame;
-(double)extraRightPadding;
-(long long)buttonType;
-(void)_updatePillFrame;
-(void)movedToSuperview:(id)arg1 ;
-(BOOL)usesAdvancedActions;
-(BOOL)showsTouchWhenHighlighted;
@end

