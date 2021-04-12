/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARCoachingAnimTime : NSObject {

	double _absoluteTime;
	double _startTime;
	double _oscillatingTime;
	double _delta;
	double _deltaPercentage;
	double _duration;

}

@property (assign,nonatomic) double absoluteTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double oscillatingTime; 
@property (nonatomic,readonly) double delta; 
@property (nonatomic,readonly) double deltaPercentage; 
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)delta;
-(double)absoluteTime;
-(void)setAbsoluteTime:(double)arg1 ;
-(double)duration;
-(double)startTime;
-(double)oscillatingTime;
-(double)deltaPercentage;
@end

