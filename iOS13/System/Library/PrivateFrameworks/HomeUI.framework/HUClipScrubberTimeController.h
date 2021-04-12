/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUClipScrubberTimeController : NSObject {

	double _timeScale;
	double _minimumDuration;
	double _maximumDuration;

}

@property (assign,nonatomic) double minimumDuration;                    //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign,nonatomic) double maximumDuration;                    //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) double timeScale;                          //@synthesize timeScale=_timeScale - In the implementation block
@property (nonatomic,readonly) double maximumGestureScale; 
+(id)attributedTimeStringFromDate:(id)arg1 ;
+(id)attributedLiveStringFromDate:(id)arg1 ;
+(id)dayNameStringFromDate:(id)arg1 ;
+(BOOL)_shouldUseTwentyFourHourTime;
+(id)twentyFourHourTimeStringFromDate:(id)arg1 ;
+(id)attributedStringFromTwentyFourHourDateString:(id)arg1 ;
+(id)twelveHourTimeStringFromDate:(id)arg1 ;
+(id)attributedStringFromDateString:(id)arg1 ;
+(id)twentyFourHourLiveStringFromDate:(id)arg1 ;
+(id)liveStringFromDate:(id)arg1 ;
-(id)init;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(double)timeScale;
-(void)setTimeScale:(double)arg1 ;
-(double)minimumDuration;
-(void)setMinimumDuration:(double)arg1 ;
-(void)reloadClips:(id)arg1 ;
-(double)timeScaleForGestureScale:(double)arg1 ;
-(double)timeScaleForGestureScale:(double)arg1 maxDuration:(double)arg2 ;
-(double)maximumGestureScale;
-(BOOL)isAtMinimumZoom;
-(double)suggestedWidthForClip:(id)arg1 ;
-(void)updateTimeScaleIfNeeded;
@end

