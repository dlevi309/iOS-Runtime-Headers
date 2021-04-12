/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class UIView, NSArray;


@protocol WFDragCoordinator <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) NSArray * participatingViewControllers; 
@property (nonatomic,readonly) NSArray * scrollViewsAffectingDrag; 
@property (nonatomic,readonly) id<WFModuleDelegate> moduleDelegate; 
@required
-(UIView *)containerView;
-(NSArray *)participatingViewControllers;
-(NSArray *)scrollViewsAffectingDrag;
-(id<WFModuleDelegate>)moduleDelegate;

@end

