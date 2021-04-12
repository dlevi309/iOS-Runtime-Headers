/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class UIView;

@interface CKComponentDelegateForwarder : NSObject {

	vector<SEL *, std::__1::allocator<SEL *> >* _selectors;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)newWithSelectors:(vector<SEL *, std::__1::allocator<SEL *> >*)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(UIView *)view;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_doNothing;
@end

