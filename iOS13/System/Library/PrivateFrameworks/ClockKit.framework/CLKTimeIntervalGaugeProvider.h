/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@class NSMutableDictionary, NSNumber, NSDate;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _timerToken;
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_update;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)validate;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(BOOL)needsTimerUpdates;
-(double)progressFractionForNow:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(void)setStartFillFraction:(float)arg1 ;
-(void)setEndFillFraction:(float)arg1 ;
-(void)_maybeStartOrStopUpdates;
-(float)startFillFraction;
-(float)endFillFraction;
@end

