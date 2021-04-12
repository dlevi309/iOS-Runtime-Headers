/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIScrollViewScrollableAncestor <NSObject>
@required
-(CGPoint*)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;
-(void)_descendentScrollViewDidEndDragging:(id)arg1;
-(void)_descendentScrollViewDidCancelDragging:(id)arg1;
-(BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2;

@end

