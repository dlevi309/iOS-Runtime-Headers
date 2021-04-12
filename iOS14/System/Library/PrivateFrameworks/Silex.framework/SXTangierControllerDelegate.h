/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXTangierControllerDelegate <NSObject>
@optional
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
-(void)tangierControllerDidStopScrolling:(id)arg1;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)tangierControllerDidScroll:(id)arg1;
-(void)tangierControllerWillStartScrolling:(id)arg1;

@end

