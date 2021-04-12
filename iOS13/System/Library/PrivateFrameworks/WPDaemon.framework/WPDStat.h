/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSDate;

@interface WPDStat : NSObject {

	double _currentTime;
	NSDate* _lastTime;

}

@property (assign) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (retain) NSDate * lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
-(id)init;
-(void)startTime;
-(double)currentTime;
-(NSDate *)lastTime;
-(void)stopTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setLastTime:(NSDate *)arg1 ;
-(void)calculateTimeUpdate;
@end

