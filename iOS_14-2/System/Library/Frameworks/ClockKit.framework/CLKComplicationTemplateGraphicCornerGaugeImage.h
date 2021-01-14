/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
+(id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4 ;
+(id)templateWithGaugeProvider:(id)arg1 imageProvider:(id)arg2 ;
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKFullColorImageProvider *)imageProvider;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)leadingTextProvider;
-(CLKTextProvider *)trailingTextProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setLeadingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4 ;
-(id)initWithGaugeProvider:(id)arg1 imageProvider:(id)arg2 ;
@end

