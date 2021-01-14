/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSDate;

@interface WLThroughputSample : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	unsigned long long _bytes;
	unsigned long long _expectedBytes;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long bytes;                      //@synthesize bytes=_bytes - In the implementation block
@property (assign,nonatomic) unsigned long long expectedBytes;              //@synthesize expectedBytes=_expectedBytes - In the implementation block
-(NSDate *)endDate;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)bytes;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(double)duration;
-(unsigned long long)expectedBytes;
-(void)setExpectedBytes:(unsigned long long)arg1 ;
@end

