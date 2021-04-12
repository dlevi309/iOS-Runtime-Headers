/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)bytes;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(unsigned long long)expectedBytes;
-(void)setExpectedBytes:(unsigned long long)arg1 ;
@end

