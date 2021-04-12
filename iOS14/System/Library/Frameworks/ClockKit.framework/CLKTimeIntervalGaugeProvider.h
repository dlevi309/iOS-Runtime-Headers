/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@class NSMutableDictionary, CLKClockTimerToken, NSDate;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	CLKClockTimerToken* _timerToken;
	BOOL _paused;
	float _startFillFraction;
	float _endFillFraction;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) float startFillFraction;              //@synthesize startFillFraction=_startFillFraction - In the implementation block
@property (assign,nonatomic) float endFillFraction;                //@synthesize endFillFraction=_endFillFraction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7 ;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(BOOL)validate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(void)setStartFillFraction:(float)arg1 ;
-(void)setEndFillFraction:(float)arg1 ;
-(void)_maybeStartOrStopUpdates;
-(float)startFillFraction;
-(float)endFillFraction;
@end

