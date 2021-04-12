/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKSample, NSString;

@interface WDHeartRateSession : NSObject {

	long long _sessionType;
	HKSample* _sample;
	NSString* _heartRateRange;

}

@property (assign,nonatomic) long long sessionType;                  //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,retain) HKSample * sample;                      //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) NSString * heartRateRange;              //@synthesize heartRateRange=_heartRateRange - In the implementation block
-(long long)sessionType;
-(void)setSessionType:(long long)arg1 ;
-(void)setSample:(HKSample *)arg1 ;
-(HKSample *)sample;
-(id)overlayColor;
-(id)dateString;
-(id)initWithSample:(id)arg1 sessionType:(long long)arg2 ;
-(void)setHeartRateRangeMin:(id)arg1 max:(id)arg2 ;
-(id)sessionDetail;
-(id)fixedChartTitle;
-(long long)distributionStyle;
-(id)annotationColors;
-(NSString *)heartRateRange;
-(void)setHeartRateRange:(NSString *)arg1 ;
@end

