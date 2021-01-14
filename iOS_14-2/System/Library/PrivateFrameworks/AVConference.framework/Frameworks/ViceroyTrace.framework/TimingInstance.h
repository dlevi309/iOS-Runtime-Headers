/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@interface TimingInstance : NSObject {

	float startTiming;
	float stopTiming;
	float totalTime;
	BOOL isRunning;

}

@property (assign,nonatomic) float startTiming; 
@property (assign,nonatomic) float stopTiming; 
@property (assign,nonatomic) float totalTime; 
@property (assign,nonatomic) BOOL isRunning; 
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setTotalTime:(float)arg1 ;
-(id)description;
-(BOOL)isRunning;
-(float)totalTime;
-(void)setStartTiming:(float)arg1 ;
-(void)setStopTiming:(float)arg1 ;
-(float)startTiming;
-(float)stopTiming;
@end

