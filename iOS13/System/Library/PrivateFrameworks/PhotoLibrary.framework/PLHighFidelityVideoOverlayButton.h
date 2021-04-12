/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLVideoOverlayButton.h>

@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	UIImageView* _overlayPlayBackground;
	id _target;
	SEL _action;

}
-(void)dealloc;
-(long long)style;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

