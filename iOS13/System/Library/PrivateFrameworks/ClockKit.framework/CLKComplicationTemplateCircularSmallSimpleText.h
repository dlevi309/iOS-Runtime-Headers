/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallSimpleText : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	long long _maxDynamicFontSize;

}

@property (assign,nonatomic) long long maxDynamicFontSize;              //@synthesize maxDynamicFontSize=_maxDynamicFontSize - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(id)init;
-(CLKTextProvider *)textProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(long long)maxDynamicFontSize;
-(void)setMaxDynamicFontSize:(long long)arg1 ;
@end

