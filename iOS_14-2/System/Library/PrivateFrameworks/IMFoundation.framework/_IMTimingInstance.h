/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setTotalTime:(double)arg1 ;
-(id)init;
-(id)description;
-(void)startUsingTime:(double)arg1 ;
-(BOOL)isRunning;
-(double)totalTime;
-(void)stopUsingTime:(double)arg1 ;
@end

