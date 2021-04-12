/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol AVTimeControlling;
@class AVTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {

	id<AVTimeControlling> _playerController;
	double _interval;
	double _resolution;
	double _currentTime;
	AVTimer* _timer;
	double _minTime;
	double _maxTime;

}

@property (assign) double targetTime; 
@property (assign) double targetTimeWithinEndTimes; 
@property (readonly) double remainingTargetTimeWithinEndTimes; 
@property (assign) double currentTimeWithinEndTimes; 
@property (readonly) double remainingTime; 
@property (readonly) double remainingTimeWithinEndTimes; 
@property (readonly) double seekableTimeRangeDuration; 
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges,readonly) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges; 
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) BOOL currentTimeAtEndOfSeekableTimeRanges; 
@property (assign) double minTime;                                                                                                                             //@synthesize minTime=_minTime - In the implementation block
@property (assign) double maxTime;                                                                                                                             //@synthesize maxTime=_maxTime - In the implementation block
@property (retain) id<AVTimeControlling> playerController; 
@property (assign) double interval; 
@property (assign) double resolution; 
@property (assign) double currentTime; 
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(BOOL)automaticallyNotifiesObserversOfCurrentTime;
+(id)keyPathsForValuesAffectingTargetTime;
+(id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTime;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+(id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)currentTime;
-(double)remainingTime;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(double)minTime;
-(double)maxTime;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(id<AVTimeControlling>)playerController;
-(void)setPlayerController:(id<AVTimeControlling>)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)seekableTimeRangeDuration;
-(double)targetTimeWithinEndTimes;
-(void)setTargetTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTargetTimeWithinEndTimes;
-(double)remainingTimeWithinEndTimes;
-(BOOL)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
-(BOOL)isCurrentTimeAtEndOfSeekableTimeRanges;
-(double)targetTime;
-(void)setTargetTime:(double)arg1 ;
@end

