/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate {

	CLKTextProvider* _line1TextProvider;
	CLKTextProvider* _line2TextProvider;

}

@property (nonatomic,copy) CLKTextProvider * line1TextProvider;              //@synthesize line1TextProvider=_line1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;              //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)line1TextProvider;
-(void)setLine1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)line2TextProvider;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
@end

