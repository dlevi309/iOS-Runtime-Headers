/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIScrollViewScrollableAncestor <NSObject>
@required
-(void)_descendentScrollViewDidEndDragging:(id)arg1;
-(void)_descendentScrollViewDidCancelDragging:(id)arg1;
-(CGPoint*)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;
-(BOOL)_descendentScrollViewShouldScrollHorizontally:(id)arg1;
-(BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2;
-(BOOL)_descendentScrollViewShouldScrollVertically:(id)arg1;

@end

