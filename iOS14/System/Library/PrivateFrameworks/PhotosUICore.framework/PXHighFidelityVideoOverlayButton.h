/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXVideoOverlayButton.h>

@class UIButton, _UIBackdropView, UIImageView;

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	UIImageView* _overlayPlayBackground;
	id _target;
	SEL _action;
	BOOL _showAsPause;
	BOOL __didConfigureForPause;

}

@property (assign,setter=_setDidConfigureForPause:,nonatomic) BOOL _didConfigureForPause;              //@synthesize _didConfigureForPause=__didConfigureForPause - In the implementation block
@property (assign,nonatomic) BOOL showAsPause;                                                         //@synthesize showAsPause=_showAsPause - In the implementation block
-(id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(BOOL)arg2 ;
-(void)setShowAsPause:(BOOL)arg1 ;
-(BOOL)_didConfigureForPause;
-(BOOL)showAsPause;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
-(void)_setDidConfigureForPause:(BOOL)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(long long)style;
@end

