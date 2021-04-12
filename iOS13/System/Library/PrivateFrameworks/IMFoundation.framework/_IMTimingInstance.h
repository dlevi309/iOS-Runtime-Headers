/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@interface _IMTimingInstance : NSObject {

	double _startTiming;
	double _stopTiming;
	double _totalTime;
	BOOL _isRunning;

}

@property (assign,nonatomic) double totalTime;              //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                //@synthesize isRunning=_isRunning - In the implementation block
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isRunning;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)startUsingTime:(double)arg1 ;
-(void)stopUsingTime:(double)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
@end

