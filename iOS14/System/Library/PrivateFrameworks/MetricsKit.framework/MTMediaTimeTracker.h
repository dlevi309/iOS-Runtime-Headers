/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSDate;

@interface MTMediaTimeTracker : NSObject {

	float _playbackRate;
	NSDate* _date;
	unsigned long long _position;

}

@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float playbackRate;                       //@synthesize playbackRate=_playbackRate - In the implementation block
-(void)setPlaybackRate:(float)arg1 ;
-(unsigned long long)position;
-(float)playbackRate;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(NSDate *)date;
-(void)updatePosition:(unsigned long long)arg1 ;
-(id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPastPosition:(unsigned long long)arg1 ;
-(void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPosition:(unsigned long long)arg1 ;
@end

