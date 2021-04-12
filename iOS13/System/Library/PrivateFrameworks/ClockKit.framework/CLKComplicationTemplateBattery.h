/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate {

	long long _family;
	BOOL _charging;
	CLKTextProvider* _textProvider;
	double _level;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (assign,nonatomic) double level;                              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL charging;                             //@synthesize charging=_charging - In the implementation block
+(id)batteryTemplateWithFamily:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)level;
-(void)setLevel:(double)arg1 ;
-(BOOL)charging;
-(void)setCharging:(BOOL)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
@end

