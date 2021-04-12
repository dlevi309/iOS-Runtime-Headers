/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSearchGestureObserver <NSObject>
@optional
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2;
-(void)searchGesture:(id)arg1 endedGesture:(BOOL)arg2;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2;

@required
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;

@end

