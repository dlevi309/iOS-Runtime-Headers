/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKGaugeProvider, CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKTextProvider* _outerTextProvider;
	CLKFullColorImageProvider* _outerImageProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                            //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;                       //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;                      //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * outerTextProvider;                         //@synthesize outerTextProvider=_outerTextProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * outerImageProvider;              //@synthesize outerImageProvider=_outerImageProvider - In the implementation block
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(CLKTextProvider *)trailingTextProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKTextProvider *)outerTextProvider;
-(CLKFullColorImageProvider *)outerImageProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setOuterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setOuterImageProvider:(CLKFullColorImageProvider *)arg1 ;
@end

