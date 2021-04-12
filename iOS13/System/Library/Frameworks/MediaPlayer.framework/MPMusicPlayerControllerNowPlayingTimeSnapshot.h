/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding> {

	double _elapsedTime;
	double _duration;
	double _timestamp;
	BOOL _live;
	float _rate;
	long long _state;

}

@property (getter=isLive,nonatomic,readonly) BOOL live;              //@synthesize live=_live - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) float rate;                           //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) long long state;                      //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)liveSnapshotWithRate:(float)arg1 state:(long long)arg2 ;
+(id)snapshotWithElapsedTime:(double)arg1 duration:(double)arg2 rate:(float)arg3 atTimestamp:(double)arg4 state:(long long)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)state;
-(double)currentTime;
-(float)rate;
-(BOOL)isLive;
@end

