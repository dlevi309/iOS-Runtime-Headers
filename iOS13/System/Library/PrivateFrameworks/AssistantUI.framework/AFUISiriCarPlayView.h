/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, AFUIStarkGradientView, _UIVisualEffectBackdropView;

@interface AFUISiriCarPlayView : UIView {

	long long _backgroundViewMode;
	UIView* _fullScreenBackgroundView;
	UIImageView* _fullScreenAuraView;
	AFUIStarkGradientView* _gradientView;
	_UIVisualEffectBackdropView* _fullScreenBackdropView;
	UIView* _systemBackgroundView;

}

@property (nonatomic,retain) UIView * fullScreenBackgroundView;                                 //@synthesize fullScreenBackgroundView=_fullScreenBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * fullScreenAuraView;                                  //@synthesize fullScreenAuraView=_fullScreenAuraView - In the implementation block
@property (nonatomic,retain) AFUIStarkGradientView * gradientView;                              //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectBackdropView * fullScreenBackdropView;              //@synthesize fullScreenBackdropView=_fullScreenBackdropView - In the implementation block
@property (nonatomic,retain) UIView * systemBackgroundView;                                     //@synthesize systemBackgroundView=_systemBackgroundView - In the implementation block
@property (assign,nonatomic) long long backgroundViewMode;                                      //@synthesize backgroundViewMode=_backgroundViewMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(AFUIStarkGradientView *)gradientView;
-(void)setGradientView:(AFUIStarkGradientView *)arg1 ;
-(void)setBackgroundViewMode:(long long)arg1 ;
-(void)_updateViewsForBackgroundViewMode:(long long)arg1 ;
-(long long)backgroundViewMode;
-(UIView *)fullScreenBackgroundView;
-(void)setFullScreenBackgroundView:(UIView *)arg1 ;
-(UIImageView *)fullScreenAuraView;
-(void)setFullScreenAuraView:(UIImageView *)arg1 ;
-(_UIVisualEffectBackdropView *)fullScreenBackdropView;
-(void)setFullScreenBackdropView:(_UIVisualEffectBackdropView *)arg1 ;
-(UIView *)systemBackgroundView;
-(void)setSystemBackgroundView:(UIView *)arg1 ;
@end

