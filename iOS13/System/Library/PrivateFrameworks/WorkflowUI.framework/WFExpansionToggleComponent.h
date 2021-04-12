/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFExpansionToggleComponent : CKCompositeComponent {

	BOOL _expanded;
	CKTypedComponentAction<bool> _toggleAction;
	CKComponent* _disclosureComponent;

}
+(id)newWithLabel:(id)arg1 hintLabel:(id)arg2 labelsToAlignTo:(id)arg3 disclosureImage:(id)arg4 toggleAction:(CKTypedComponentAction<bool>)arg5 expanded:(BOOL)arg6 style:(const WFParameterLayoutComponentStyle*)arg7 ;
-(void)toggleChanged;
@end

