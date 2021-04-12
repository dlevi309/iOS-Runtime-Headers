/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFComponentDragController.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>

@class NSArray, WFAction, NSHashTable, WFModuleModel, NSString;

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate> {

	CGSize _initialSize;
	CGPoint _initialLocation;
	NSArray* _actions;
	WFAction* _sourceAction;
	/*^block*/id _actionGenerator;
	NSHashTable* _viewControllers;

}

@property (nonatomic,retain) WFAction * sourceAction;                    //@synthesize sourceAction=_sourceAction - In the implementation block
@property (nonatomic,copy) id actionGenerator;                           //@synthesize actionGenerator=_actionGenerator - In the implementation block
@property (nonatomic,retain) NSHashTable * viewControllers;              //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) WFModuleModel * model; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)setViewControllers:(NSHashTable *)arg1 ;
-(id)actions;
-(NSHashTable *)viewControllers;
-(void)updateView;
-(void)reset;
-(void)loadView;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2 ;
-(id)initWithGestureRecognizer:(id)arg1 actionGenerator:(/*^block*/id)arg2 ;
-(long long)sizeRangeFlexibility;
-(void)updateCurrentViewControllers;
-(WFAction *)sourceAction;
-(void)setSourceAction:(WFAction *)arg1 ;
-(id)actionGenerator;
-(void)setActionGenerator:(id)arg1 ;
@end

