/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFComponentDragController.h>
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
-(void)reset;
-(void)loadView;
-(id)actions;
-(void)updateView;
-(NSHashTable *)viewControllers;
-(void)setViewControllers:(NSHashTable *)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(long long)sizeRangeFlexibility;
-(void)updateCurrentViewControllers;
-(id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2 ;
-(WFAction *)sourceAction;
-(id)initWithGestureRecognizer:(id)arg1 actionGenerator:(/*^block*/id)arg2 ;
-(void)setSourceAction:(WFAction *)arg1 ;
-(id)actionGenerator;
-(void)setActionGenerator:(id)arg1 ;
@end

