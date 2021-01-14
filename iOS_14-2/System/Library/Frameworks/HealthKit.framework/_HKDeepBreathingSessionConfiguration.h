/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSDate;

@interface _HKDeepBreathingSessionConfiguration : HKTaskConfiguration {

	NSDate* _startDate;
	double _sessionDuration;
	double _inhaleExhaleRatio;
	double _respirationsPerMinute;

}

@property (nonatomic,copy) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double sessionDuration;                    //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) double inhaleExhaleRatio;                  //@synthesize inhaleExhaleRatio=_inhaleExhaleRatio - In the implementation block
@property (assign,nonatomic) double respirationsPerMinute;              //@synthesize respirationsPerMinute=_respirationsPerMinute - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSessionDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(void)setInhaleExhaleRatio:(double)arg1 ;
-(double)inhaleExhaleRatio;
-(double)respirationsPerMinute;
-(void)setRespirationsPerMinute:(double)arg1 ;
-(double)sessionDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

