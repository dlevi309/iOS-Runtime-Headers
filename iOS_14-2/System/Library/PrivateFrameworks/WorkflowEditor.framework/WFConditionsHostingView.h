/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class WFWorkflow, UIViewController;

@interface WFConditionsHostingView : UICollectionReusableView {

	 workflow;
	 viewController;
	 hostingController;

}

@property (retain,nonatomic) WFWorkflow * workflow; 
@property (assign,__weak,nonatomic) UIViewController * viewController; 
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFWorkflow *)workflow;
-(UIViewController *)viewController;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
@end

