/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>
@optional
-(void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 unclampedOriginalTarget:(CGPoint)arg4;
-(UIEdgeInsets*)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
-(void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(CGPoint)arg2;
-(UIEdgeInsets*)_collapsableContentPaddingForObservedScrollView:(id)arg1;
-(void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)_observeScrollViewAlignedContentMarginDidChange:(id)arg1;
-(void)_didScroll;
-(void)_observeScrollViewWillBeginDragging:(id)arg1;
-(void)_observeScrollViewDidEndDecelerating:(id)arg1;

@end

