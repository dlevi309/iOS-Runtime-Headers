/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

