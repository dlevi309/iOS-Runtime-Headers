/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIPostPlayConfig : NSObject {

	BOOL _hlsWatchedTimeEnabled;
	double _bootstrapInterval;
	double _documentUpdateOffsetInterval;
	unsigned long long _maximumAutoPlayableItems;
	double _minAutoPlayStopTime;
	double _duration;
	double _autoPlayTimerDuration;
	double _minTimeIntervalFromEndToDisplay;

}

@property (assign,nonatomic) double bootstrapInterval;                                 //@synthesize bootstrapInterval=_bootstrapInterval - In the implementation block
@property (assign,nonatomic) double documentUpdateOffsetInterval;                      //@synthesize documentUpdateOffsetInterval=_documentUpdateOffsetInterval - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAutoPlayableItems;              //@synthesize maximumAutoPlayableItems=_maximumAutoPlayableItems - In the implementation block
@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double autoPlayTimerDuration;                             //@synthesize autoPlayTimerDuration=_autoPlayTimerDuration - In the implementation block
@property (assign,nonatomic) double minAutoPlayStopTime;                               //@synthesize minAutoPlayStopTime=_minAutoPlayStopTime - In the implementation block
@property (assign,nonatomic) double minTimeIntervalFromEndToDisplay;                   //@synthesize minTimeIntervalFromEndToDisplay=_minTimeIntervalFromEndToDisplay - In the implementation block
@property (assign,nonatomic) BOOL hlsWatchedTimeEnabled;                               //@synthesize hlsWatchedTimeEnabled=_hlsWatchedTimeEnabled - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)autoPlayTimerDuration;
-(double)minTimeIntervalFromEndToDisplay;
-(double)bootstrapInterval;
-(unsigned long long)maximumAutoPlayableItems;
-(double)minAutoPlayStopTime;
-(BOOL)hlsWatchedTimeEnabled;
-(void)setBootstrapInterval:(double)arg1 ;
-(double)documentUpdateOffsetInterval;
-(void)setDocumentUpdateOffsetInterval:(double)arg1 ;
-(void)setMaximumAutoPlayableItems:(unsigned long long)arg1 ;
-(void)setMinAutoPlayStopTime:(double)arg1 ;
-(void)setAutoPlayTimerDuration:(double)arg1 ;
-(void)setMinTimeIntervalFromEndToDisplay:(double)arg1 ;
-(void)setHlsWatchedTimeEnabled:(BOOL)arg1 ;
@end

