/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate {

	CLKComplicationTemplateGraphicCircular* _circularTemplate;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKComplicationTemplateGraphicCircular * circularTemplate;              //@synthesize circularTemplate=_circularTemplate - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;                                         //@synthesize textProvider=_textProvider - In the implementation block
-(CLKTextProvider *)textProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKComplicationTemplateGraphicCircular *)circularTemplate;
-(void)setCircularTemplate:(CLKComplicationTemplateGraphicCircular *)arg1 ;
@end

