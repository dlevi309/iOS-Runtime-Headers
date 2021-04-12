/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@protocol UIMovieScrubberDelegate <NSObject>
@optional
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
-(void)movieScrubberWillBeginEditing:(id)arg1;
-(void)movieScrubberDidCancelEditing:(id)arg1;
-(void)movieScrubberDidBeginEditing:(id)arg1;
-(void)movieScrubberEditingAnimationFinished:(id)arg1;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg1;
-(void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;

@end

