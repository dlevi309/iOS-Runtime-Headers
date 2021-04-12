/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

@interface WFAdaptiveLayoutComponent : CKComponent {

	vector<CKComponent *, std::__1::allocator<CKComponent *> >* _children;

}
+(id)newWithChildren:(const vector<CKComponent *, std::__1::allocator<CKComponent *> >*)arg1 size:(const CKComponentSize*)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

