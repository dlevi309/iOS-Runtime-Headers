/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>
@optional
-(void)_didScroll;
-(void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 unclampedOriginalTarget:(CGPoint)arg4;
-(UIEdgeInsets*)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
-(UIEdgeInsets*)_collapsableContentPaddingForObservedScrollView:(id)arg1;
-(void)_observeScrollViewWillBeginDragging:(id)arg1;
-(void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)_observeScrollViewDidEndDecelerating:(id)arg1;
-(void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(CGPoint)arg2;

@end

