/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallSimpleText : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	long long _maxDynamicFontSize;

}

@property (assign,nonatomic) long long maxDynamicFontSize;              //@synthesize maxDynamicFontSize=_maxDynamicFontSize - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
+(id)templateWithTextProvider:(id)arg1 ;
-(id)initWithTextProvider:(id)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(long long)maxDynamicFontSize;
-(void)setMaxDynamicFontSize:(long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
@end

