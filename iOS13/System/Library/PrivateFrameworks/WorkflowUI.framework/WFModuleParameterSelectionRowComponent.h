/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class NSString;

@interface WFModuleParameterSelectionRowComponent : CKCompositeComponent {

	CKTypedComponentAction<NSString *> _action;
	NSString* _identifier;

}
+(id)newWithIdentifier:(id)arg1 title:(id)arg2 disabledSubtitle:(id)arg3 enabled:(BOOL)arg4 action:(CKTypedComponentAction<NSString *>)arg5 appearance:(id)arg6 ;
-(void)handleParameterLayoutPressed;
@end

