/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKScrollViewDelegate <UIScrollViewDelegate>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(void)scrollViewDidLayoutSubviews:(id)arg1;
-(void)scrollViewWillScroll:(id)arg1;
-(BOOL)allowsHorizontalScrollingForScrollView:(id)arg1;
-(BOOL)allowsVerticalRubberbandingForScrollView:(id)arg1;
-(CGPoint*)scrollView:(id)arg1 restrictContentOffset:(CGPoint)arg2;
-(void)scrollViewDidEndSwipe:(id)arg1;
-(void)scrollView:(id)arg1 willAnimateToContentOffset:(CGPoint)arg2;

@end

