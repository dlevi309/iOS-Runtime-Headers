/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol CEKWheelScrubberViewDelegate <NSObject>
@optional
-(void)wheelScrubberViewWillBeginScrolling:(id)arg1;
-(void)wheelScrubberViewDidScroll:(id)arg1;
-(void)wheelScrubberViewWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)wheelScrubberViewDidEndScrolling:(id)arg1;

@required
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;
-(void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;

@end

