/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface CKTextComponent : CKComponent {

	CKTextKitAttributes* _attributes;
	CKTextComponentAccessibilityContext _accessibilityContext;

}
+(id)newWithTextAttributes:(const CKTextKitAttributes*)arg1 viewAttributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg2 options:(const CKTextComponentOptions*)arg3 size:(const CKComponentSize*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)wf_applyVisualStying:(id)arg1 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
@end

