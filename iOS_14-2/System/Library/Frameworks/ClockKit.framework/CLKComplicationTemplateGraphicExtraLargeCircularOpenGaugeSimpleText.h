/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicExtraLargeCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _bottomTextProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                  //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * bottomTextProvider;              //@synthesize bottomTextProvider=_bottomTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;              //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
+(id)templateWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)bottomTextProvider;
-(CLKTextProvider *)centerTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setBottomTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3 ;
@end

