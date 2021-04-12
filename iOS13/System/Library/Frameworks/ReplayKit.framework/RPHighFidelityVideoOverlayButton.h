/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RPVideoOverlayButton.h>

@class UIButton, _UIBackdropView;

@interface RPHighFidelityVideoOverlayButton : UIView <RPVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(long long)style;
-(SEL)action;
-(id)initWithStyle:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

