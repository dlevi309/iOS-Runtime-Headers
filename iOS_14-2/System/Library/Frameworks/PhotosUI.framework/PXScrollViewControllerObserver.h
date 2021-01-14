/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXScrollViewControllerObserver <NSObject>
@optional
-(void)scrollViewControllerDidScroll:(id)arg1;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
-(void)scrollViewControllerDidLayoutSubviews:(id)arg1;
-(void)scrollViewControllerDidEndScrolling:(id)arg1;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg1;
-(void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(BOOL)scrollViewControllerShouldScrollToTop:(id)arg1;
-(void)scrollViewControllerContentInsetDidChange:(id)arg1;

@end

