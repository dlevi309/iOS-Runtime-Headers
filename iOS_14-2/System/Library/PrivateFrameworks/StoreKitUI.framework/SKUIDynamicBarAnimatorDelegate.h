/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIDynamicBarAnimatorDelegate <NSObject>
@optional
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;

@required
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
-(void)dynamicBarAnimatorDidUpdate:(id)arg1;

@end

