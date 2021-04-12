/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@class NSDate;

@interface LKOperation : NSObject {

	NSDate* _startTime;
	NSDate* _endTime;
	double _duration;

}

@property (nonatomic,readonly) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration;                 //@synthesize duration=_duration - In the implementation block
-(id)init;
-(id)dictionary;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
@end

