/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

@class NSDateInterval;


@protocol BMEventTimeElapsing <BMStreamValidating>
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@required
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(id)arg1;
-(void)setDuration:(double)arg1;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1;
-(double)duration;

@end

