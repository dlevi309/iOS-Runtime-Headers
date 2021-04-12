/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallRingText : CLKComplicationTemplate {

	float _fillFraction;
	CLKTextProvider* _textProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                        //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                       //@synthesize ringStyle=_ringStyle - In the implementation block
-(CLKTextProvider *)textProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(float)fillFraction;
-(void)setFillFraction:(float)arg1 ;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
@end

