/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface WFWrappingStackLayoutComponent : CKComponent {

	WFWrappingStackLayoutComponentStyle _style;
	vector<CKComponent *, std::__1::allocator<CKComponent *> >* _children;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const WFWrappingStackLayoutComponentStyle*)arg3 children:(const vector<CKComponent *, std::__1::allocator<CKComponent *> >*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

