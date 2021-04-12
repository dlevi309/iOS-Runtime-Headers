/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKComponent, UIView;

@interface CKComponentController : NSObject {

	unsigned long long _state;
	BOOL _updatingComponent;
	BOOL _performedInitialMount;
	CKComponent* _previousComponent;
	CKComponentControllerAnimationWrapper* _animationData;
	CKComponent* _component;
	UIView* _view;

}

@property (nonatomic,__weak,readonly) CKComponent * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) UIView * view;                               //@synthesize view=_view - In the implementation block
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithComponent:(id)arg1 ;
-(UIView *)view;
-(CKComponent *)component;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didMount;
-(void)didUpdateComponent;
-(void)willUpdateComponent;
-(void)componentTreeWillAppear;
-(void)componentTreeDidDisappear;
-(void)willUnmount;
-(void)didUnmount;
-(void)componentDidMount:(id)arg1 ;
-(void)component:(id)arg1 willRelinquishView:(id)arg2 ;
-(void)componentDidUnmount:(id)arg1 ;
-(void)componentWillUnmount:(id)arg1 ;
-(void)component:(id)arg1 didAcquireView:(id)arg2 ;
-(void)componentWillMount:(id)arg1 ;
-(void)willMount;
-(void)willRemount;
-(void)didRemount;
-(void)componentWillRelinquishView;
-(void)componentDidAcquireView;
-(void)_relinquishView;
-(void)_cleanupAppliedAnimations;
@end

