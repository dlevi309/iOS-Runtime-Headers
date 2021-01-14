/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface CKStackLayoutComponent : CKComponent {

	CKStackLayoutComponentStyle _style;
	vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >* _children;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const CKStackLayoutComponentStyle*)arg3 children:(const vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >*)arg4 ;
+(id)newRTLCompatibleWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const CKStackLayoutComponentStyle*)arg3 children:(const vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >*)arg4 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

