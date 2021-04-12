/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

@interface WFWrappingStackLayoutComponent : CKComponent {

	WFWrappingStackLayoutComponentStyle _style;
	vector<CKComponent *, std::__1::allocator<CKComponent *> >* _children;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const WFWrappingStackLayoutComponentStyle*)arg3 children:(const vector<CKComponent *, std::__1::allocator<CKComponent *> >*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

