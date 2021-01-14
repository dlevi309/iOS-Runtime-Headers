/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
+(id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 gaugeProvider:(id)arg4 ;
+(id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3 ;
-(CLKTextProvider *)headerTextProvider;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKFullColorImageProvider *)headerImageProvider;
-(CLKTextProvider *)body1TextProvider;
-(void)setHeaderImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 gaugeProvider:(id)arg4 ;
-(id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3 ;
@end

