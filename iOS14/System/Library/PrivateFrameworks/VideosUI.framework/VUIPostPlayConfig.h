/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIPostPlayConfig : NSObject {

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
-(void)setDuration:(double)arg1 ;
-(id)init;
-(double)duration;
-(double)autoPlayTimerDuration;
-(double)minTimeIntervalFromEndToDisplay;
-(double)bootstrapInterval;
-(unsigned long long)maximumAutoPlayableItems;
-(double)minAutoPlayStopTime;
-(void)setBootstrapInterval:(double)arg1 ;
-(double)documentUpdateOffsetInterval;
-(void)setDocumentUpdateOffsetInterval:(double)arg1 ;
-(void)setMaximumAutoPlayableItems:(unsigned long long)arg1 ;
-(void)setMinAutoPlayStopTime:(double)arg1 ;
-(void)setAutoPlayTimerDuration:(double)arg1 ;
-(void)setMinTimeIntervalFromEndToDisplay:(double)arg1 ;
@end

