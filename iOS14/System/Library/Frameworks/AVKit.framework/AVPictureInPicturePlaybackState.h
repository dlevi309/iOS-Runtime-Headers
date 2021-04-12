/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVPictureInPicturePlaybackState : NSObject <NSCopying> {

	BOOL _paused;
	double _initializationTimestamp;
	double _initializedElapsedTime;
	double _timelineRate;
	double _timelineDuration;

}

@property (nonatomic,readonly) double initializationTimestamp;              //@synthesize initializationTimestamp=_initializationTimestamp - In the implementation block
@property (nonatomic,readonly) double initializedElapsedTime;               //@synthesize initializedElapsedTime=_initializedElapsedTime - In the implementation block
@property (nonatomic,readonly) double timelineRate;                         //@synthesize timelineRate=_timelineRate - In the implementation block
@property (nonatomic,readonly) double timelineDuration;                     //@synthesize timelineDuration=_timelineDuration - In the implementation block
@property (nonatomic,readonly) double currentElapsedTime; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused;                 //@synthesize paused=_paused - In the implementation block
-(double)timelineRate;
-(id)initWithElapsedTime:(double)arg1 timelineDuration:(double)arg2 timelineRate:(double)arg3 paused:(BOOL)arg4 ;
-(double)currentElapsedTime;
-(double)initializationTimestamp;
-(double)initializedElapsedTime;
-(double)timelineDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPaused;
-(BOOL)isEqual:(id)arg1 ;
@end

