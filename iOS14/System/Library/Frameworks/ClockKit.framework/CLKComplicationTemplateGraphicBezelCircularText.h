/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate {

	CLKComplicationTemplateGraphicCircular* _circularTemplate;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKComplicationTemplateGraphicCircular * circularTemplate;              //@synthesize circularTemplate=_circularTemplate - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;                                         //@synthesize textProvider=_textProvider - In the implementation block
+(id)templateWithCircularTemplate:(id)arg1 textProvider:(id)arg2 ;
+(id)templateWithCircularTemplate:(id)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKComplicationTemplateGraphicCircular *)circularTemplate;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)_validEmbeddedTemplateClassNamesForKey:(id)arg1 ;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(id)initWithCircularTemplate:(id)arg1 textProvider:(id)arg2 ;
-(void)setCircularTemplate:(CLKComplicationTemplateGraphicCircular *)arg1 ;
-(id)initWithCircularTemplate:(id)arg1 ;
@end

