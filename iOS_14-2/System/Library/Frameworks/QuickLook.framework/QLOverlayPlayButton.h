/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
@end

