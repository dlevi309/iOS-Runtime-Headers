/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFAccessibilityActionComponent : CKCompositeComponent {

	CKComponent* _componentToActivate;

}

@property (nonatomic,readonly) CKComponent * componentToActivate;              //@synthesize componentToActivate=_componentToActivate - In the implementation block
+(id)newWithAttributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg1 componentToActivate:(id)arg2 component:(id)arg3 ;
-(CKComponent *)componentToActivate;
@end

