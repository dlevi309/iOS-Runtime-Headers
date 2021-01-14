/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidZoom:(id)arg1;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
-(void)scrollViewDidScrollToTop:(id)arg1;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
-(void)scrollViewDidScroll:(id)arg1;

@end

