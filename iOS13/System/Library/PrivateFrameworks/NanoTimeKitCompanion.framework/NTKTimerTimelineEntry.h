/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)companionModel;
+(id)_modularRectangularImageProvider;
+(id)_cornerSmallImageProvider;
+(id)_modularSmallImageProvider;
+(id)_circularSmallImageProvider;
+(id)_circularMediumImageProvider;
+(id)_utilitarianSmallImageProvider;
+(id)_extraLargeImageProvider;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)setCountdownDuration:(double)arg1 ;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newLargeFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newSignatureCornerGaugeImageTemplate;
-(id)_newSignatureRectangular;
-(id)_newCircularMediumTemplate;
-(id)_newSimpleTextTemplate;
-(double)countdownDuration;
-(id)_countdownTextProvider;
-(id)_headerTextProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 twoDigitMinuteZeroPadding:(BOOL)arg3 ;
-(id)_gaugeProviderForTimeAtState:(unsigned long long)arg1 tintColor:(id)arg2 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_relativeDateGaugeProviderForTimeInterval:(double)arg1 fullDuration:(double)arg2 paused:(BOOL)arg3 tintColor:(id)arg4 ;
-(id)_relativeDateTextProviderForTimeInterval:(double)arg1 paused:(BOOL)arg2 twoDigitMinuteZeroPadding:(BOOL)arg3 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
@end

