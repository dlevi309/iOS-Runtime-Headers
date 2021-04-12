/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class NSString;

@interface WFModuleParameterSelectionRowComponent : CKCompositeComponent {

	CKTypedComponentAction<NSString *> _action;
	NSString* _identifier;

}
+(id)newWithIdentifier:(id)arg1 title:(id)arg2 disabledSubtitle:(id)arg3 enabled:(BOOL)arg4 action:(CKTypedComponentAction<NSString *>)arg5 appearance:(id)arg6 ;
-(void)handleParameterLayoutPressed;
@end

