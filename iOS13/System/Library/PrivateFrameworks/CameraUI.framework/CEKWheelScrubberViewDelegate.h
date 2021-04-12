/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CEKWheelScrubberViewDelegate <NSObject>
@optional
-(void)wheelScrubberViewWillBeginScrolling:(id)arg1;
-(void)wheelScrubberViewDidScroll:(id)arg1;
-(void)wheelScrubberViewWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)wheelScrubberViewDidEndScrolling:(id)arg1;

@required
-(void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;

@end

