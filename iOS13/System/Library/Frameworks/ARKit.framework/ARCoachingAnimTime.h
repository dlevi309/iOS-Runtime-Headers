/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)absoluteTime;
-(void)setAbsoluteTime:(double)arg1 ;
-(double)delta;
-(double)oscillatingTime;
-(double)deltaPercentage;
@end

