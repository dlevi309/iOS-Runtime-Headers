/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSDate;

@interface WPDStat : NSObject {

	double _currentTime;
	NSDate* _lastTime;

}

@property (assign) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (retain) NSDate * lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
-(void)stopTime;
-(id)init;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(void)setLastTime:(NSDate *)arg1 ;
-(NSDate *)lastTime;
-(void)startTime;
-(void)calculateTimeUpdate;
@end

