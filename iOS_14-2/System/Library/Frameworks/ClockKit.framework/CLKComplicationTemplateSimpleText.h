/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateSimpleText : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
+(id)templateWithTextProvider:(id)arg1 ;
-(id)initWithTextProvider:(id)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
@end

