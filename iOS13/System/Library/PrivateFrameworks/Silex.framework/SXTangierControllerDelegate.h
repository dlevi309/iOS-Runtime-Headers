/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXTangierControllerDelegate <NSObject>
@optional
-(void)tangierControllerDidScroll:(id)arg1;
-(void)tangierControllerWillStartScrolling:(id)arg1;
-(void)tangierControllerDidStopScrolling:(id)arg1;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;

@end

