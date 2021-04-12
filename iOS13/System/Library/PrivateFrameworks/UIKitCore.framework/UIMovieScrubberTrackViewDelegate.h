/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIMovieScrubberTrackViewDelegate <NSObject>
@optional
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
-(void)movieScrubberTrackViewDidExpand:(id)arg1;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;

@end

