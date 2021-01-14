/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicExtraLargeCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _leadingTextProvider;
	CLKTextProvider* _trailingTextProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                    //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * leadingTextProvider;               //@synthesize leadingTextProvider=_leadingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * trailingTextProvider;              //@synthesize trailingTextProvider=_trailingTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;                //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
+(id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 centerTextProvider:(id)arg4 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(CLKTextProvider *)trailingTextProvider;
-(CLKTextProvider *)centerTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 centerTextProvider:(id)arg4 ;
@end

