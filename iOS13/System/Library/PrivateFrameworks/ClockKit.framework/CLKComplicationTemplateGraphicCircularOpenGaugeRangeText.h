/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                    //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;               //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;              //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;                //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)trailingTextProvider;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
@end

