/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface _HKDeepBreathingSessionConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	double _sessionDuration;
	double _inhaleExhaleRatio;
	double _respirationsPerMinute;

}

@property (readonly) NSUUID * UUID;                                     //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double sessionDuration;                    //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) double inhaleExhaleRatio;                  //@synthesize inhaleExhaleRatio=_inhaleExhaleRatio - In the implementation block
@property (assign,nonatomic) double respirationsPerMinute;              //@synthesize respirationsPerMinute=_respirationsPerMinute - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSUUID *)UUID;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(double)sessionDuration;
-(void)setSessionDuration:(double)arg1 ;
-(double)inhaleExhaleRatio;
-(void)setInhaleExhaleRatio:(double)arg1 ;
-(double)respirationsPerMinute;
-(void)setRespirationsPerMinute:(double)arg1 ;
@end

