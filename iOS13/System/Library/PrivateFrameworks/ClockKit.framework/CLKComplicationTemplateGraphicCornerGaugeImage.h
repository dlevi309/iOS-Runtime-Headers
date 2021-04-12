/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKGaugeProvider, CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeImage : CLKComplicationTemplate {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKFullColorImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                       //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;                  //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;                 //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKFullColorImageProvider *)imageProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)trailingTextProvider;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
@end

