/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, _UIBackdropView;

@interface QLOverlayPlayButton : UIView {

	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}
-(id)init;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

