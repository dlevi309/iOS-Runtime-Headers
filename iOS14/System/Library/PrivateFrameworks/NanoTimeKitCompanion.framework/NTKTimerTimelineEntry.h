/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKTimerTimelineEntry : NTKTimelineEntryModel {

	double _remainingTime;
	unsigned long long _state;
	double _countdownDuration;

}

@property (assign,nonatomic) double remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double countdownDuration;              //@synthesize countdownDuration=_countdownDuration - In the implementation block
+(id)_modularRectangularImageProvider;
+(id)_cornerSmallImageProvider;
+(id)_modularSmallImageProvider;
+(id)_circularSmallImageProvider;
+(id)_circularMediumImageProvider;
+(id)_utilitarianSmallImageProvider;
+(id)_extraLargeImageProvider;
+(id)companionModel;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setCountdownDuration:(double)arg1 ;
-(double)countdownDuration;
-(id)_countdownTextProvider;
-(id)_newCircularMediumTemplate;
-(id)_newSimpleTextTemplate;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newLargeFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newSignatureCornerGaugeImageTemplate;
-(id)_newSignatureRectangular;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(id)_templateMetadata;
-(id)_headerTextProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 twoDigitMinuteZeroPadding:(BOOL)arg3 ;
-(id)_gaugeProviderForTimeAtState:(unsigned long long)arg1 tintColor:(id)arg2 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_relativeDateGaugeProviderForTimeInterval:(double)arg1 fullDuration:(double)arg2 paused:(BOOL)arg3 tintColor:(id)arg4 ;
-(id)_relativeDateTextProviderForTimeInterval:(double)arg1 paused:(BOOL)arg2 twoDigitMinuteZeroPadding:(BOOL)arg3 ;
@end

