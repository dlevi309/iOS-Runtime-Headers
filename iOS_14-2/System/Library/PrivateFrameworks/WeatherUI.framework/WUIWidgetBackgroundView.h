/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
*/

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WUIWeatherConditionBackgroundView;

@interface WUIWidgetBackgroundView : UIView {

	WUIWeatherConditionBackgroundView* _condtionBackground;

}

@property (nonatomic,retain) WUIWeatherConditionBackgroundView * condtionBackground;              //@synthesize condtionBackground=_condtionBackground - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCondtionBackground:(WUIWeatherConditionBackgroundView *)arg1 ;
-(WUIWeatherConditionBackgroundView *)condtionBackground;
-(void)setConditionCode:(long long)arg1 isDay:(BOOL)arg2 ;
@end

