/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeRingText : CLKComplicationTemplate {

	float _fillFraction;
	CLKTextProvider* _textProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                        //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                       //@synthesize ringStyle=_ringStyle - In the implementation block
+(id)templateWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3 ;
-(CLKTextProvider *)textProvider;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3 ;
@end

