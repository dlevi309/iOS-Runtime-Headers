/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)turnOn;
-(void)blink:(long long)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)invalidate;
-(void)turnOff;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(void)_startBlinking;
-(void)_stopBlinking;
-(void)_updateLedOnState;
-(void)setLedColor:(UIColor *)arg1 ;
-(UIColor *)ledColor;
@end

