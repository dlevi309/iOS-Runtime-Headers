/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
@end

