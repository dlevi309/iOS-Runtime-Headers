/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate {

	CLKTextProvider* _line1TextProvider;
	CLKTextProvider* _line2TextProvider;

}

@property (nonatomic,copy) CLKTextProvider * line1TextProvider;              //@synthesize line1TextProvider=_line1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;              //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
+(id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2 ;
-(CLKTextProvider *)line2TextProvider;
-(CLKTextProvider *)line1TextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setLine1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2 ;
@end

