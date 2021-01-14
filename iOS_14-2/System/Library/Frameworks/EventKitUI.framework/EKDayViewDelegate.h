/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2;
-(id)dayView:(id)arg1 selectedCopyViewForOccurrence:(id)arg2;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
-(void)dayViewDidCompleteAsyncLoadAndLayout:(id)arg1;
-(BOOL)dayViewShouldDrawSynchronously:(id)arg1;
-(void)dayViewDidTapEmptySpace:(id)arg1;

@end

