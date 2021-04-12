/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicRectangularTextMeteredGauge : CLKComplicationTemplate {

	CLKFullColorImageProvider* _headerImageProvider;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _body1TextProvider;
	CLKGaugeProvider* _gaugeProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * headerImageProvider;              //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                         //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body1TextProvider;                          //@synthesize body1TextProvider=_body1TextProvider - In the implementation block
@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                             //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)body1TextProvider;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKFullColorImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
@end

