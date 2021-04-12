/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate {

	CLKTextProvider* _innerTextProvider;
	CLKTextProvider* _outerTextProvider;

}

@property (nonatomic,copy) CLKTextProvider * innerTextProvider;              //@synthesize innerTextProvider=_innerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * outerTextProvider;              //@synthesize outerTextProvider=_outerTextProvider - In the implementation block
+(id)templateWithInnerTextProvider:(id)arg1 outerTextProvider:(id)arg2 ;
-(CLKTextProvider *)outerTextProvider;
-(CLKTextProvider *)innerTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setOuterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setInnerTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithInnerTextProvider:(id)arg1 outerTextProvider:(id)arg2 ;
@end

