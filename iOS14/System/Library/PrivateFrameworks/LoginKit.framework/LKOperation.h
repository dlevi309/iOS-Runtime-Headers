/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)dictionary;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(double)duration;
-(NSDate *)startTime;
@end

