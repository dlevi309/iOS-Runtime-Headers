/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
*/

#import <AppPredictionWidget/AppPredictionWidget-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CADisplayLink, UIColor;

@interface APWDebugLightView : UIView {

	UIView* _ledView;
	BOOL _ledIsOn;
	long long _blinkHertz;
	CADisplayLink* _blinkDisplayLink;
	UIColor* _ledColor;

}

@property (nonatomic,retain) UIColor * ledColor;              //@synthesize ledColor=_ledColor - In the implementation block
-(void)invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setLedColor:(UIColor *)arg1 ;
-(void)turnOn;
-(void)turnOff;
-(void)blink:(long long)arg1 ;
-(void)_updateLedOnState;
-(void)_startBlinking;
-(void)_stopBlinking;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(UIColor *)ledColor;
@end

