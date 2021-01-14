/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class CKComponent;

@interface WFExpansionToggleComponent : CKCompositeComponent {

	BOOL _expanded;
	CKTypedComponentAction<bool> _toggleAction;
	CKComponent* _disclosureComponent;

}
+(id)newWithLabel:(id)arg1 hintLabel:(id)arg2 labelsToAlignTo:(id)arg3 disclosureImage:(id)arg4 toggleAction:(CKTypedComponentAction<bool>)arg5 expanded:(BOOL)arg6 style:(const WFParameterLayoutComponentStyle*)arg7 ;
-(void)toggleChanged;
@end

