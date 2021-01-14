/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class CKComponent;

@interface CKBackgroundLayoutComponent : CKComponent {

	CKComponent* _component;
	CKComponent* _background;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)newWithComponent:(id)arg1 background:(id)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end

