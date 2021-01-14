/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKGaugeProvider, CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenMeteredGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKFullColorImageProvider* _imageProvider;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                       //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;                         //@synthesize textProvider=_textProvider - In the implementation block
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(CLKFullColorImageProvider *)imageProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
@end

