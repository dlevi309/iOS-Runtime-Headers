/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

