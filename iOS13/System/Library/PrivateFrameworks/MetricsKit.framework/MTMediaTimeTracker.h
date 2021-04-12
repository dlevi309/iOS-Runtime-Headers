/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSDate;

@interface MTMediaTimeTracker : NSObject {

	float _playbackRate;
	NSDate* _date;
	long long _position;

}

@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float playbackRate;              //@synthesize playbackRate=_playbackRate - In the implementation block
-(NSDate *)date;
-(long long)position;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPosition:(unsigned long long)arg1 ;
@end

