/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoMetadata.h>

@class NSString;

@interface SVMutableVideoMetadata : NSObject <SVVideoMetadata> {

	BOOL _muted;
	double _duration;
	double _time;
	double _framerate;
	double _timePlayed;
	double _volume;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double framerate;                      //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) double timePlayed;                     //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) BOOL muted;                            //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                         //@synthesize volume=_volume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)duration;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setTimePlayed:(double)arg1 ;
-(double)timePlayed;
-(double)framerate;
-(void)setFramerate:(double)arg1 ;
@end

