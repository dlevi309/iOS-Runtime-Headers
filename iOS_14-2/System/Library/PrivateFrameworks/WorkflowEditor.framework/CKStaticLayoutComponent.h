/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface CKStaticLayoutComponent : CKComponent {

	vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >* _children;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 children:(const vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >*)arg3 ;
+(id)newWithChildren:(const vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >*)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

