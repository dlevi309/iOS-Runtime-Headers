/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, HKUITodayCirclePulseBackground, CALayer;

@interface HKUITodayCirclePulseView : UIView {

	UIView* _backgroundContainer;
	HKUITodayCirclePulseBackground* _background;
	CALayer* _dayLabel;
	double _circleDiameter;

}

@property (assign,nonatomic) double circleDiameter;              //@synthesize circleDiameter=_circleDiameter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)pulse:(/*^block*/id)arg1 ;
-(void)_layoutSubviews;
-(double)circleDiameter;
-(void)setCircleDiameter:(double)arg1 ;
-(void)setDayLabelContent:(id)arg1 ;
@end

