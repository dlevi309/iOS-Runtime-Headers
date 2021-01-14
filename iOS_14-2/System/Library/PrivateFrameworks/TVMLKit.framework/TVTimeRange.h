/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSDate;

@interface TVTimeRange : NSObject {

	double _startTime;
	double _endTime;
	double _duration;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) double startTime;                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setStartTime:(double)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)duration;
-(double)startTime;
@end

