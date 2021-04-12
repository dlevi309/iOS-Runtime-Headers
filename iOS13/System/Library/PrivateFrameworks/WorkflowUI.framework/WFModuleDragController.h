/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFComponentDragController.h>

@class NSArray, WFAction, WFModuleModel;

@interface WFModuleDragController : WFComponentDragController {

	NSArray* _actions;
	WFAction* _sourceAction;

}

@property (nonatomic,retain) WFModuleModel * model; 
@property (nonatomic,readonly) WFAction * sourceAction;              //@synthesize sourceAction=_sourceAction - In the implementation block
@property (nonatomic,copy) NSArray * actions;                        //@synthesize actions=_actions - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)reset;
-(void)loadView;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(long long)sizeRangeFlexibility;
-(void)updateCurrentViewControllers;
-(id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2 ;
-(WFAction *)sourceAction;
@end

