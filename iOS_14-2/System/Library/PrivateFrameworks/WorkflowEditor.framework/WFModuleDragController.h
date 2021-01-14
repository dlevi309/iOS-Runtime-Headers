/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFComponentDragController.h>

@class NSArray, WFAction, WFModuleModel;

@interface WFModuleDragController : WFComponentDragController {

	NSArray* _actions;
	WFAction* _sourceAction;

}

@property (nonatomic,retain) WFModuleModel * model; 
@property (nonatomic,readonly) WFAction * sourceAction;              //@synthesize sourceAction=_sourceAction - In the implementation block
@property (nonatomic,copy) NSArray * actions;                        //@synthesize actions=_actions - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)reset;
-(void)loadView;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2 ;
-(long long)sizeRangeFlexibility;
-(void)updateCurrentViewControllers;
-(WFAction *)sourceAction;
@end

