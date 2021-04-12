/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIBackgroundBlurView, SiriUIVisualEffectView, UIImageView;

@interface AFUISiriEyesFreeView : UIView {

	SiriUIBackgroundBlurView* _backdropView;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	long long _eyesFreeMode;

}

@property (nonatomic,readonly) long long eyesFreeMode;              //@synthesize eyesFreeMode=_eyesFreeMode - In the implementation block
-(id)backdropView;
-(id)initWithFrame:(CGRect)arg1 eyesFreeMode:(long long)arg2 ;
-(void)_configureEyesFreePresentation:(long long)arg1 ;
-(long long)eyesFreeMode;
@end

