/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
+(id)templateWithFamily:(long long)arg1 textProvider:(id)arg2 level:(double)arg3 charging:(BOOL)arg4 ;
-(double)level;
-(CLKTextProvider *)textProvider;
-(BOOL)charging;
-(void)setLevel:(double)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFamily:(long long)arg1 textProvider:(id)arg2 level:(double)arg3 charging:(BOOL)arg4 ;
@end

