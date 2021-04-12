/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


#import <iAd/iAd-Structs.h>
@interface ADMediaAnalyticsEventInfo : NSObject {

	double _totalDuration;
	double _currentPlaybackTime;
	double _visiblePercentage;
	double _volume;

}

@property (assign,nonatomic) double totalDuration;                    //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;              //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (assign,nonatomic) double volume;                           //@synthesize volume=_volume - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(double)totalDuration;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
@end

