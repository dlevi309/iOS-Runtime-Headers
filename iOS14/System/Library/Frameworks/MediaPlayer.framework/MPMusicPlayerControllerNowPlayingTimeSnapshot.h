/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(double)currentTime;
-(float)rate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)_init;
-(BOOL)isLive;
-(BOOL)isEqual:(id)arg1 ;
@end

