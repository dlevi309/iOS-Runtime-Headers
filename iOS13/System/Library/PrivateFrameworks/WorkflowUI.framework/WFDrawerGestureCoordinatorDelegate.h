/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class UIView;


@protocol WFDrawerGestureCoordinatorDelegate <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIView * drawerView; 
@property (nonatomic,readonly) double minimumDrawerHeight; 
@property (nonatomic,readonly) double maximumDrawerHeight; 
@property (nonatomic,readonly) double drawerHeight; 
@property (nonatomic,readonly) CGRect grabberAreaBounds; 
@required
-(UIView *)containerView;
-(double)drawerHeight;
-(double)minimumDrawerHeight;
-(double)maximumDrawerHeight;
-(CGRect)grabberAreaBounds;
-(void)gestureCoordinatorDidBeginInteraction:(id)arg1;
-(void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
-(void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;
-(UIView *)drawerView;

@end

