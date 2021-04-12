/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeImage : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKFullColorImageProvider* _bottomImageProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                             //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * bottomImageProvider;              //@synthesize bottomImageProvider=_bottomImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;                         //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
+(id)templateWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(CLKFullColorImageProvider *)bottomImageProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setBottomImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3 ;
@end

