/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class CKComponent;

@interface WFAccessibilityActionComponent : CKCompositeComponent {

	CKComponent* _componentToActivate;

}

@property (nonatomic,readonly) CKComponent * componentToActivate;              //@synthesize componentToActivate=_componentToActivate - In the implementation block
+(id)newWithAttributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg1 componentToActivate:(id)arg2 component:(id)arg3 ;
-(CKComponent *)componentToActivate;
@end

